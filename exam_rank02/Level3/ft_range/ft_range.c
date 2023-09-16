/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:41:26 by nkietwee          #+#    #+#             */
/*   Updated: 2023/09/16 11:21:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	diff;
	int	*tab;

	i = 0;
	diff = 0;

	if (start <= end)
	{
		tab = (int * )malloc(sizeof(int ) * ( end  - start + 1));
		diff = 1;
	}
	else if (start > end)
	{
		tab = (int * )malloc(sizeof(int ) * (start - end + 1));
		diff = -1;
	}
	while (start != end)
	{
		tab[i] = start;
		i++;
		start = start + diff;
	}
	tab[i] = start;
	return(tab);
}

// int	main()
// {
// 	int *tab = ft_range(1, 2);
// 	int	i;

// 	i = 0;
// 	while(i < 4)
// 	{
// 		printf("tab[%d]  : %d\n", i , tab[i]);
// 		i++;
// 	}
// }
