/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:13:51 by nkietwee          #+#    #+#             */
/*   Updated: 2023/09/16 11:20:54 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
void	ft_putnbr(int num)
{
	if (num / 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}
int	ft_isprime(int num)
{
	int	i;

	i = 2;
	if (num == 2)
		return(2);
	if (num % 2 == 0)
		return(0);
	while (i <= num)
	{
		if (num % i == 0 )
			return(num);
		i++;
	}
	return(0);
}

int	ft_add_prime(int num)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= num)
	{
		if (ft_isprime(i) != 0)
			sum = sum + i;
		i++;
	}
	return(sum);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res =(res  * 10) + str[i] - 48;
		i++;
	}
	return(res);
}


int	main(int argc, char **argv)
{
	int	i;
	// int	num;

	i = 0;
	if (argc == 2)
	{
		ft_putnbr(ft_add_prime(ft_atoi(argv[1])));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}
