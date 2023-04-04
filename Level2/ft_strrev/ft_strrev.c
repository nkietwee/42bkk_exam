/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:24:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
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

/*
int main(void)
{
    char    *str1 = "Hello";
    char    str2[] = "World";

    // printf("%s" ,ft_strrev(str));
    printf("%p\n" ,str1); // pointer
    printf("%p\n" ,&str2); // pointer
    printf("%p\n" ,"Hello"); // address Hello
    printf("%p\n" ,"World");

    // str = "World"; //
    // printf("%s\n" ,str); // pointer
    // printf("%p\n" ,str); // pointer
    // str[0] = 'c';
    // printf("str[0] = %p\n" ,str[0]); // pointer
    // printf("str[0] = %p\n" ,str[0]); // pointer
}
*/
