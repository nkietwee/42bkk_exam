/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:06:06 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 01:33:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
	int	i = 0;
	int j = 0;
	int	found = 1;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] >= 9 && av[1][i] <= 32)
			i--;
		while (av[1][i])
		{
			found = 1;
			while (av[1][i] > 32)
				i--;
			j = i + 1;
			while(av[1][j] > 32)
			{
				write(1, &av[1][j++] , 1);
			}
			while (av[1][i] >= 9 && av[1][i] <= 32)
			{
				i--;
				found = 0;
			}
			if (found == 0)
				write(1, " ", 1);
		}

	}
	write(1, "\n", 1);
	return (0);
}
