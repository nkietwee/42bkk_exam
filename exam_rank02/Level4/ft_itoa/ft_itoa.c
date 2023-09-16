/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:23:39 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/24 21:23:59 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_countnum(int	 num)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	if (num == 0)
		len = 1;
	while (num > 0)
	{
		len++;
		num =num / 10 ;
	}
	return(len);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	char	*res;
	i = 0;
	len = ft_countnum(nbr);
	res = (char *)malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	len--;
	if (nbr == 0)
	{
		//res[0] = '0';
		res[0] = nbr + 48;
		res[1] = '\0';
		return(res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr= -nbr;
	}
	while (nbr > 0)
	{
		res[len] = (nbr % 10) + 48;
		nbr =nbr / 10;
		len--;
	}
	return(res);
}


int	main(void)
{

	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(0));
}
