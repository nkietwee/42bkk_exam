/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:56:55 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/25 15:35:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return(res);
}

int	ft_check(int num1,int num2)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= num1 && i <= num2)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			res = res * i;
			num1 = num1 / i;
			num2 = num2 / i;
		}
		i++;
	}
	return(res);
}

int	main(int argc, char **argv)
{
	int	i;
	int	num1;
	int	num2;

	i = 1;
	num1 = 0;
	if(argc == 3)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[2]);
		ft_putnbr(ft_check(num1,num2));
	}
	write(1, "\n", 1);
	return(0);
}
