/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:08:31 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/30 14:38:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
int ft_check(char c, char *str, int index)
{
    int i;

    i = 0;
    while(str[i] && i < index)
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return(1);

}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;

    if (argc == 3)
    {
        while(argv[1][i])
            i++;
        while(argv[2][j])
        {
            argv[1][i] = argv[2][j];
            i++;
            j++;
        }
        while(argv[1][k])
        {
            if (ft_check(argv[1][k], argv[1], k) == 1)
                write(1, &argv[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/

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
