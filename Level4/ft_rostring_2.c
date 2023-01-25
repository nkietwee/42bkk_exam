/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rostring_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:06:38 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/25 14:06:46 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	char	**ret;
	char	*word;

	i = 0;
	k = 0;
	ret = (char **)malloc(sizeof(char *) * 5000);
	while(str[i])
	{
		j = 0;
		while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i])
			word = (char *)malloc(sizeof(char ) * 5000);
		else
			break;
		while((!((str[i] >= 9 && str[i] <= 13) || str[i] == 32)) && str[i])
		{
			word[j++] = str[i++];
		}
		word[j] = '\0';
		ret[k++] = word;
	}
	ret[k] = NULL;
	return(ret);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}
int	main(int argc, char **argv)
{

	int	i;

	i = 1;
	if (argc > 1)
	{
		char	**ret = ft_split(argv[1]);
		while (ret[i] != NULL)
		{
			ft_putstr(ret[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(ret[0]);
	}
	write(1, "\n", 1);



}
