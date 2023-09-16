/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:21:22 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:25:22 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int		max(int* tab, unsigned int len)
{

    unsigned int i;
    int num = tab[0];

    i = 0;
    if(!tab)
        return(0);
    while (i < len)
    {
        if (num < tab[i])
            num = tab[i];
        i++;

    }
    return(num);
}


int	main(void)
{
	int	arr[4];
	arr[0] = 7;
	arr[1] = 2;
	arr[2] = 14;
	arr[3] = 9;
    printf ("%d", max(arr, 4));

    int arr2[1] ;
    printf ("%d", max(arr2, 4));
	return (0);
}
