/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:07:55 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 12:15:02 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int	i = 0;
	int	j;
	int	k = 0;
	char	**ret;
	char	*word;

	ret = malloc(sizeof(char *) * 5000);
	while (str[i])
	{
		j = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			word = malloc(sizeof(char) * 5000);
		else
			break;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			word[j++] = str[i++];
		word[j] = 0;
		ret[k++] = word;
	}
	ret[k] = NULL;
	return (ret);
}


int	main( void)
{
	char **ret = ft_split("  sfsd sdfss sf  ");
	int	i = 0;
	while (i < 9)
	{
		printf("%s\n", ret[i]);
		i++;
	}

}
