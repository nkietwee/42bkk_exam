/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:29:30 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/25 23:23:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int main(int argc,char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc == 3)
    {
        while (argv[2][j] && argv[1][i])
        {
                if (argv[1][i] == argv[2][j])
                    i++;
                j++;
        }
        if (argv[1][i] == '\0')
            write(1, "1", 1);
        else
            // return(0);
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return(0);
}

