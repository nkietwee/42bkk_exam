/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:55:47 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:23:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int    ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);


}
/*
int main(void)
{
    printf("ft = %d\n" ,ft_strcmp("aA", "yA"));
    printf("%d\n" ,strcmp("aA", "yA"));

}

*/
