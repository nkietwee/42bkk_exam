/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:08:31 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:26:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


#include<unistd.h>
int ft_check(char *str, char c, int index)
{
    int i;

    i  = 0;
    while(i < index)
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}



int main(int ac, char**av)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (ac == 3)
    {
        while (av[1][i])
            i++;
        while(av[2][j])
        {
            av[1][i] = av[2][j];
            i++;
            j++;
        }
        while(av[1][k])
        {
            if ((ft_check(av[1], av[1][k], k ) == 0))
                write(1 ,&av[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
