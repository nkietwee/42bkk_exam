/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:28:42 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:24:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_check(char c, char *str, int index)
{
    int i;

    i = 0 ;
    while(str[i] && (i < index || index == -1))
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            if ((ft_check(av[1][i] ,av[2] , -1) == 1) && (ft_check(av[1][i] ,av[1] , i) == 0))
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
