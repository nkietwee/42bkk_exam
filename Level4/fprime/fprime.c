/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:59:33 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 12:14:27 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void	ft_prime(int num)
{
	int		i;

	i = 2;
	if (num == 1)
		printf("1");
	while (num > 1)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			num = num / i;
			if (num != 1)
				printf("*");
			i = 2;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_prime(atoi(argv[1]));
	}
	printf("\n");
	// write(1, "\n", 1);
	return(0);
}



