/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:58:29 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 03:07:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*first*/
#include<unistd.h>

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);

}
int main(void)
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz" , 8);
        else if (i % 3 == 0)
            write(1, "fizz" , 4);
        else if ( i % 5 == 0)
            write(1, "buzz" , 4);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }

}

/*second*/
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printnum(int	i)
{
	if (i > 9)
	{
		ft_printnum (i / 10);
		ft_printnum (i % 10);
	}
	else
		ft_putchar(i + 48 );
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz", 8);
		else if (i % 3 == 0 )
			write(1,"fizz", 4);
		else if ( i % 5 == 0)
			write(1,"buzz", 4);
		else
			ft_printnum(i);
		i++;
		write (1,"\n",1);
	}
	return (0);

}
*/
