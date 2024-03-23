/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:11:20 by nkietwee          #+#    #+#             */
/*   Updated: 2024/03/23 19:08:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * This code is no dup2 fd 0 for backing up fd because no use in this subject is not use fd 0
 */
// static void print2d(char **str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 		printf("[%d] : %s\n", i, str[i]);
// }

static void perr(char *s)
{
	while (*s)
		write(2, s++, 1);
}
/*
cd 
check argument 
check path
*/

static int cd(char **argv, int i)
{
	// char    path[1024];
	
    // printf("path{before} : %s\n", getcwd(path, sizeof(path)));
	if (i != 2)
		return (perr("error: cd: bad arguments\n"), 1);
	else if (chdir(argv[1]) == -1)
		return (perr("error: cd: cannot change directory to "), perr(argv[1]), perr("\n"), 1);
    // printf("path{after} : %s\n", getcwd(path, sizeof(path)));
	return 0;
}

static int exec(char **argv, char **envp, int i)
{
	int status;
	int fds[2];
	int pip = (argv[i] && strcmp(argv[i], "|") == 0); 
	if (pip && pipe(fds) == -1)
		return (perr("error: fatal\n"), 1);
	int pid = fork();
	if (!pid) // pid == 0
	{
		argv[i] = 0;
		if (pip && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
			return (perr("error: fatal\n"), 1);
		execve(*argv, argv, envp);
		return (perr("error: cannot execute "), perr(*argv), perr("\n"), 1);
	}
	waitpid(pid, &status, 0);
	if (pip && (dup2(fds[0], 0) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
		return (perr("error: fatal\n"), 1);
	return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int argc, char **argv, char **envp)
{
	(void) argc;
	int status = 0;
	while(*argv && *(argv + 1))
	{
		argv++; // escape program file
		int i = 0;
		while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
			i++;
		if (strcmp(*argv, "cd") == 0)
			status = cd(argv, i);
		else if (i)
			status = exec(argv, envp, i);
		argv += i;
	}
	return (status);
}