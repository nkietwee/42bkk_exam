/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:05:18 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 16:17:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j]) 
                return(i);
            j++;
        }
        i++;
    }
    i = 0;
    while(s[i])
        i++;
    return (i);
}

int main (void) 
{
   int len;
   int ft_len;
   const char str1[] = "ABCDEF49691";
   const char str2[] = "013";

   len = strcspn(str1, str2);
   ft_len = ft_strcspn(str1, str2);

   printf("First matched character is at %d\n", len);
   printf("ft = First matched character is at %d\n", ft_len);
   
   return(0);
}