/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:20:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 21:30:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


int ft_check(char *str,char c, int index)
{   
    int i;

    i = 0;
    while (str[i]  && (i < index ))
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);
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
            if (ft_check(argv[1], argv[1][k], k) == 0 )
                write(1, &argv[1][k], 1);
            k++;
        }
    }

}
