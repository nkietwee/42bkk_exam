/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:43:07 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 11:43:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>


void	ft_putnbr(int num)
{
	if (num > 16)
		ft_putnbr(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	num;

	i = 0;
	if (ac == 2)
	{
		num = atoi(av[1]);
		ft_putnbr(num);
	}
	write(1, "\n", 1);
}
