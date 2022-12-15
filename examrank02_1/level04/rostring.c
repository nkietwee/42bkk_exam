/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:25:32 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/14 23:10:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc,char *argv[])
{
	int	i;
	int	start;
	int	end;
	int	word;

	i = 0;
	start = 0;
	end = 0;
	if(argc >= 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		start = i;
		while ((!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)) && argv[1][i])
			i++;
		end = i;
		while(argv[1][i])
		{
			while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
				i++;
			while (!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
				word  = 2;
			}
			if (word == 2)
				write(1, " ", 1);
		}
		while(start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}
//----------------------------------------------------------------------------------
#include<unistd.h>
int main(int argc, char *argv[])
{
    int i;
    int flag;
    int start;
    int end;
    int word;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i] == ' ' ||  argv[1][i] == '\t' )
            i++;
        start = i;
        while (argv[1][i] && (argv[1][i] != ' ' &&  argv[1][i] != '\t' ))
            i++;
        end = i;
        while (argv[1][i] == ' ' ||  argv[1][i] == '\t' )
            i++;
        while(argv[1][i])
        {
            word = 2;
            while (argv[1][i] != ' ' &&  argv[1][i] != '\t' && argv[1][i] != '\0')
            {
                write(1 , &argv[1][i], 1);
               i++;
            }
            while (argv[1][i] == ' ' &&  argv[1][i] == '\t' )
            {
                if (argv[1][i + 1] != '\0')
                    flag = 1;
                else
                    flag = 0;
                i++;
            }
            if (flag == 1)
                write(1, " ", 1);
        }
        if (word == 2)
            write (1, " ", 1);
        while (start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}