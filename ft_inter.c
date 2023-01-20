/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:14:26 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 21:41:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_check(char c,char *str, int index)
{
    int i;

    i = 0;
    while (str[i] && ( i < index || index == -1))
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);

}
int main(int argc , char *argv[])
{
    int i;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if ((ft_check (argv[1][i] ,argv[2], -1) == 1 ) && ft_check(argv[1][i] , argv[1], i) == 0)
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    
}