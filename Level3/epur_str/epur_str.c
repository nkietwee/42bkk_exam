/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:05:32 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/26 01:05:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        if (argv[1][i] == '\0')
        {
            write(1, "\n", 1);
            return(0);
        }
        while((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
            i++;
        while (argv[1][i])
        {
            while(!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            while((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
                i++;
            if (argv[1][i] == '\0')
                break;
            write(1, " ", 1);
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}
































/* int main(int argc, char *argv[])
{
    int     i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] ==  '\t')
                i++;
        while(argv[1][i])
        {
            while (argv[1][i] >= 33 && argv[1][i] <= 126)
            {
                write (1, &argv[1][i], 1);
                i++;
            }
            while (argv[1][i] == ' ' || argv[1][i] ==  '\t')
                i++;
            if (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
                write (1, " ", 1);
        }
    }
    write(1, "\n", 1);
} */
