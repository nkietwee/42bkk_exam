/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:00:58 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/15 15:01:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
/*int     *ft_rrange(int start, int end)
{
	int	i;
	int	*res;

	i = 0;
	if (start == 0 && end == 0)
	{
		res[0] = 0;
		res[1] = '\0';
		return(res);
	}
	if (start < end)
		res = (int *)malloc(sizeof (int) * (end) - start + 1);
	while (start <= end)
	{
		res[i] = start;
		i++;
		start++;
	}
	return(res);
}
*/
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return (range);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}
int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;
	idx = 0;
	start = 0;
	end = -3;
	tab = ft_rrange(start, end);
	size = ft_abs(end - start) + 1;
	while (idx < size)
	{
		printf(" [%d] ", tab[idx]);
		idx++;
	}
	printf("\n");
}
