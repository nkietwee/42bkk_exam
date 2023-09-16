/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:28:52 by nkietwee          #+#    #+#             */
/*   Updated: 2023/07/14 01:32:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

// int	main(int ac, char **av)
int	main(int ac, char *av[5])
{
	int	i;

	i = 0;
	(void)ac;
	while (av[i])
		printf("%s\n" , av[i++]);

	return (0);
}