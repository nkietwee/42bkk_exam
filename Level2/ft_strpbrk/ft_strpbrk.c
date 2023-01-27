/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:57:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 03:16:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return((char *)s);
        i++;
    }
    return(0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int     i;

    i = 0;
    // while(s1[i])
    while(*s1)
    {
        // if (ft_strchr(s2, s1[i]) != 0)
        if (ft_strchr(s2, *s1) != 0)
            return((char *)(s1));
        s1++;
        // i++;
    }
    return(0);
}

int main(void)
{
    printf("%s\n" ,   strpbrk("bscde2fghijk4l", "cbsd"));
    printf("%s\n" ,ft_strpbrk("bscde2fghijk4l", "cbsd"));

}


