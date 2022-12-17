/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:58:22 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/17 15:58:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_countnum(char c)
{
    if (c >= '0' && c <= '9')
        return(c);
    else if (c >= 'a' && c <= 'f')
        return( 10 + (c - 97));
    else if (c >= 'A' && c <= 'F')
        return( 10 + (c - 65));
    return(0);
}
int ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return(1);
    return(0);
    
}

int	ft_atoi_base(const char *str, int str_base)
{
    int     i;
    int     res;

    i = 0;
    res = 0;
    while(ft_isspace(str[i]) ==  1)
        i++;
    while(str[i])
    {
        res = (res * str_base) + ft_countnum(str[i]); 
        i++;
    }
    return(res);
}
#include<stdio.h>
int main(void)
{
    printf("%d" ,ft_atoi_base("10" , 2));

}