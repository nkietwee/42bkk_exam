/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:55:49 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/26 00:18:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void    ft_print(char *str)
{
    int i;

    i = 0;

    if (str[i] == '\0')
        return;
    if (str[i] >= 'a' && str[i] <= 'z')
       str[i] = str[i] - 32;
    write(1, &str[i], 1);
    i++;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] + 32;
        if (((str[i - 1] >= 9 && str[i - 1] <= 13) || str[i - 1] == 32)
        && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
        write(1, &str[i], 1);
        i++;
    }

}
int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while(i < argc )
        {
            ft_print(argv[i]);
            i++;
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}
/*----------------wrong------*/
/*
#include<stdio.h>
void    ft_print(char *str)
{
    int i;

    i = 0;

    if (str[i] == '\0')
        return;
    if (str[i] >= 'a' && str[i] <= 'z')
       str[i] = str[i] - 32;
    write(1, &str[i], 1);
    i++;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] + 32;
        if (((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
        write(1, &str[i], 1);
        i++;
    }

}
int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while(i < argc )
        {
            ft_print(argv[i]);
            i++;
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}
*/
