/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:57:40 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:24:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return((char *)s);
        i++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;

    i = 0;
    while(s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            // return(++i);
            return(i++);
        i++;
    }
    return(i);
}
/*
int main(void)
{
    // printf("strspn = %lu\n" ,strspn("abc","xyz"));
    // printf("ft_strspn = %lu\n" ,ft_strspn("abc","xyz"));
    printf("strspn = %lu\n" ,      strspn("aaaaabhbbbbc","ab"));
    printf("ft_strspn = %lu\n" ,ft_strspn("aaaaabhbbbbc","ab"));
}*/
