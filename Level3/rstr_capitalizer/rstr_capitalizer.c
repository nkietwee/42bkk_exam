/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/26 00:47:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
void	ft_rstr(char	*argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		if (argv[i] >= 'A' && argv[i] <= 'Z')
			argv[i] = argv[i] + 32;
		if ((argv[i] >= 'a' && argv[i] <= 'z') && (((argv[i + 1] >= 9 && argv[i + 1] <= 13) || argv[i + 1] == 32) || argv[i + 1] == '\0'))
			argv[i] = argv[i] - 32;
		write(1, &argv[i], 1);
		i++;
	}

}
int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			ft_rstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);

}*/

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == 32))
			str[i] = str[i] - 32;
		write(1, &str[i] , 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			ft_print(argv[i]);
			i++;
			write(1 , "\n", 1);
		}
	}
	else
		write(1 , "\n", 1);
	return(0);


}
