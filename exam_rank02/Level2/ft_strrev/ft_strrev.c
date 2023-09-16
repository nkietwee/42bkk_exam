/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/07/14 01:28:41 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    len = ft_strlen(str);
    len = len - 1;
    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}


int main(void)
{
    char    str2[] = "World";

    str2[5] = 'z';
    str2[6] = 'w';
    printf("%s\n" ,str2);
    exit(0);
    // char    *str1 = "Hello";
    char    *str1 = str2;

    printf("%s" ,ft_strrev(str1));
    // printf("%p\n" ,str1); // pointer
    // printf("%p\n" ,&str2); // pointer
    // printf("%p\n" ,"Hello"); // address Hello
    // printf("%p\n" ,"World");

    // str = "World"; //
    // printf("%s\n" ,str); // pointer
    // printf("%p\n" ,str); // pointer
    // str[0] = 'c';
    // printf("str[0] = %p\n" ,str[0]); // pointer
    // printf("str[0] = %p\n" ,str[0]); // pointer
}