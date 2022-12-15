/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:18:49 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/07 20:07:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == '_' ) 
            {   
                i++;
                argv[1][i] = argv[1][i] - 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}