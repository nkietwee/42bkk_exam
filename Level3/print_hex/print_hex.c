/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:43:07 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/30 12:23:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>


void	ft_putnbr(int num)
{
	if (num > 15)
		ft_putnbr(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sum = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
			sum = sum * 10 + (str[i] - '0');
			i++;
	}
	return (sum);
}

// int	main()
// {



// }

int	main(int ac, char **av)
{
	int	i;
	int	num;

	i = 0;
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		ft_putnbr(num);
	}
	write(1, "\n", 1);
}
