/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:00:58 by nkietwee          #+#    #+#             */
/*   Updated: 2023/02/11 12:46:06 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
/*-----test pass---------*/
int     *ft_rrange(int start, int end)
{
	int	i;
	int	diff;
	int	len;
	int	*tab;

	i = 0;
	diff = 0;
	len = 0;
	if (start <= end)
	{
		tab = (int *)malloc(sizeof(int)  * (end - start + 1));
		diff = -1;
	}
	else if (start > end)
	{
		tab = (int *)malloc(sizeof(int)  * (start - end + 1));
		diff = 1;
	}
	while(start != end)
	{
		tab[i] = end;
		i++;
		end = end + diff;
	}
	tab[i] = end;
	return(tab);
}

int	main(void)
{
	int	i;
	int *tab = ft_rrange(-1, -5);

	i = 0;
	while (i < 9)
	{
		printf("tab[%d] = %d\n" ,i, tab[i]);
		i++;
		// free(tab[i]);
	}
	// free(tab);
	return(0);
}
