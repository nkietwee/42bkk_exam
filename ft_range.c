/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:40:15 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 14:32:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int     *ft_range(int start, int end)
{
    int i;
    int new_start;
    int new_end;
    int size;
    int *tab;

    i = 0;
    new_start = start;
    new_end = end;
    if (new_start < 0)
        new_start = -new_start;
    else if (new_end < 0)
        new_end = -new_end;
    size = new_end - new_start  + 1;
    if (size < 0)
        size = -size;    
    // printf("size = %d\n", size);
    tab = (int *)malloc(sizeof(int) * size);
    if (start <= end)
    {
        while(start <= end)
            tab[i++] = start++; 
    }
    else 
    {
        while(start >= end)
            tab[i++] = start--; 
    }
    return(tab);
}

int main(void)
{
    int i;
    int *tab = ft_range(2147483647, 2147483640);

    i = 0;

       while (i < 10) 
        printf("%d\n" ,tab[i++]);

}