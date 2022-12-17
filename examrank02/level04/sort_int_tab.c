/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:47:26 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/15 00:40:58 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int tmp;

    i = 0;
    // tmp = tab[i];
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
        }
        else
        {
            i++;   
        }
        
    }
    

}