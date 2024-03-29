/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:45:08 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 11:54:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc,char **argv)
{
    int i;

    i = 0;
    if (argc == 4)
    {
        while (argv[1][i] && argv[2][1] == '\0' && argv[3][1] == '\0')
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
