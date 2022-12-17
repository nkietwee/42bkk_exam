/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:30:00 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/05 21:36:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}
void    ft_printnum(int i)
{
    if (i > 9)
    {
        ft_printnum (i / 10);
        ft_printnum (i % 10);
    }
    else
        ft_putchar(i + 48);
}


int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else
            ft_printnum(i);
        write (1, "\n", 1);
        i++;
    }
}