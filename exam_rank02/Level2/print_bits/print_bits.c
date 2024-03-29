/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:26:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 11:51:40 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 8;
    while(i--)
    {
        bit = ((octet >> i & 1) + '0') ;
        write (1, &bit, 1);
    }
}
