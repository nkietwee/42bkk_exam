/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 08:57:46 by nkietwee          #+#    #+#             */
/*   Updated: 2023/09/16 11:32:01 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlenmode(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return(i + 1);
		i++;
	}
	return (i);
}

char *ft_strjoin(char *str1, char *str2)
{
	char *res;
	int	i = -1;
	int	j = -1;
	res = malloc(sizeof(char) * (ft_strlenmode(str1, '\0') + ft_strlenmode(str2, '\0') + 1));
	while (str1[++i])
		res[i] = str1[i];
	while (str2[++j])
		res[i++] = str2[j];
	res[i] = '\0';
	// free(str1);
	return (res);
}
char *ft_strdup_len(char *str, int len)
{
	int	i;
	char *res;

	i = -1;
	res = malloc(sizeof(char) * (len + 1));
	while (++i < len)
		res[i] = str[i];
	res[i] = '\0';
	return (res);
}

void	ft_readall(char **line, int fd)
{
	int rd;
	char	*buff;

	rd = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (rd != 0)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		buff[rd] = '\0';
		if (!(*line))
			*line = ft_strdup_len(buff, rd);
		else
			*line = ft_strjoin(*line, buff);
	}
	free (buff);
}
char *get_next_line(int fd)
{
	static char *line;
	static char *head;
	char *res_nl;
	int	nl;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	if (!line)
	{
		ft_readall(&line, fd);
		head = line;
	}
	nl = ft_strlenmode(line, '\n');
	if (nl == 0)
	{
		if (head)
		{
			free(head);
			head = NULL;
		}
		return (NULL);
	}
	res_nl = ft_strdup_len(line, nl);
	line = line + nl;
	return (res_nl);
}

int main()
{
	int	fd;
	char *tmp;
	int	i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 15)
	{
		tmp = get_next_line(fd);
		printf("%s", tmp);
		free(tmp);
		i++;
	}

}