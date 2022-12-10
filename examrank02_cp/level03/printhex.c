/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:04:27 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/08 00:27:20 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

/* void	ft_putchar (char c)
{
	write(1, &c, 1);
} */
void	ft_printhex(int	num)
{
	if (num >= 16)
		ft_printhex(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
	// ft_putchar ("0123456789abcdef"[num % 16]);
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
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("123"));
}
*/

int	main(int argc, char *argv[])
{
	int	i;
	int	nu;

	i = 0;
	if (argc == 2)
	{
		nu = ft_atoi(argv[1]);
		ft_printhex(nu);
	}
	write (1, "\n", 1);
	return(0);
}