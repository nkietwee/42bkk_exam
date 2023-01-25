/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:41:19 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/25 15:48:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>


int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	syn;
	int	res;

	i = 0;
	syn = 1;
	res = 0;

	while((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			syn *= -1;
		i++;
	}
	if (str_base <= 10)
	{
		while (str[i] >= '0' && str[i] <= )
		{
			res = (res * str_base) + str[i] - 48;
			i++;
		}
		return(res);
	}
	else
		return;
}
