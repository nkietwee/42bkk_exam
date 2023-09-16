/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:05:18 by nkietwee          #+#    #+#             */
/*   Updated: 2023/04/04 10:23:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

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
	return(i);
}
/*
int	main(void)
{
	printf("%lu\n" ,    strcspn("ABCDEF4960910", "z013"));
	printf("%lu\n" ,    ft_strcspn("ABCDEF4960910", "z013"));
	// printf("%lu\n" , ft_strcspn("aaaHssllo", "sab"));
}
*/
