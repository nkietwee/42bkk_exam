/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:44:22 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/30 12:07:52 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n;

    n = 0;
    if (a == 0 || b == 0)
        return(0);
    if (a < b)
        n = b;
    else if (a >= b)
        n = a;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return(n);
        n++;
    }
    return(0);
}
/*
int main()
{
    printf("%d" ,lcm(22 ,12));

}*/
