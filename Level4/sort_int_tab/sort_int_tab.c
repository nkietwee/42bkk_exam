/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:47:26 by nkietwee          #+#    #+#             */
/*   Updated: 2023/02/09 21:24:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int tmp;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}


int main(void)
{
    int i = 0;
    // int tab[5] = {4, 2, 6, 5, 5}; -> cause I set variable i = 0;
    int tab[5] = {4, 1, 50, 5, 5};

    // tab[0] = 4;
    // tab[1] = 1;
    // tab[2] = 3;
    // tab[3] = 5;
    // tab[4] = 46;

    sort_int_tab(tab, 5);

    while (i < 10)
    {
        printf("%d\n" , tab[i++]);
    }
    // printf("%d\n" , tab[1]);
    // printf("%d\n" , tab[2]);
    // printf("%d\n" , tab[3]);
    // printf("%d\n" , tab[4]);
}
