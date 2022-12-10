/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:25:32 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/09 10:27:18 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	is_space(char c)
// {
// 	if ((c == ' ') || (c == '\t'))
// 		return (1);
// 	return (0);
// }

// void	ft_print_first_word(char *str, int begin_space)
// {
// 	while (str[begin_space] != '\0' && !is_space(str[begin_space]))
// 	{
// 		ft_putchar(str[begin_space]);
// 		begin_space++;
// 	}
// }

// void	rostring(char *str)
// {
// 	int	idx;
// 	int	begin_space;

// 	begin_space = 0;
// 	while (str[begin_space] != '\0' && is_space(str[begin_space]))
// 		begin_space++;
// 	idx = begin_space;
// 	while (str[idx] != '\0' && !is_space(str[idx]))
// 		idx++;
// 	while (str[idx] != '\0')
// 	{
// 		if (str[idx] != '\0' && !is_space(str[idx]) && is_space(str[idx - 1]))
// 		{
// 			while (str[idx] != '\0' && !is_space(str[idx]))
// 			{
// 				ft_putchar(str[idx]);
// 				idx++;
// 			}
// 			ft_putchar(' ');
// 		}
// 		idx++;
// 	}
// 	ft_print_first_word(str, begin_space);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 		rostring(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// // }
// #include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int i = 0;
// 	int word = 0;
// 	int start;
// 	int end;
// 	int flag = 0;
	
// 	if (argc > 1)
// 	{
// 		while(argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i++;
// 		start = i;
// 		while(argv[1][i] && (argv[1][i] != ' ' &&  argv[1][i] != '\t'))
// 			i++;
// 		end = i;

// 		while(argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i++;
// 		while(argv[1][i] != '\0')
// 		{
//            word = 2;
//            while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
// 		   {
// 			    write (1, &argv[1][i], 1);
//                 i++;
//            }
// 		    while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 		   {
//                 // if (argv[1][i + 1] != '\0')
//                     flag = 1;
//                 // else
//                     // flag = 0;
//             //    i++;
//            }			
//        		if (flag == 1)
// 		    {
// 			    write (1," ", 1);
// 		    }
// 		}
//         if (word == 2)
//             write (1, " ", 1);

// 		while(start < end)
// 		{
// 			write (1, &argv[1][start], 1);
// 			start++;
// 		}
// 	}	
// 	write (1, "\n",1);	
// }

// #include<unistd.h>
// int main(int argc, char *argv[])
// {
//     int i;
//     int start;
//     int flag;
//     int word;
//     int end;

//     i = 0;
//     if (argc > 1)
//     {
//         while(argv[1][i] == ' ' || argv[1][i] == '\t')
//             i++;
//         start = i; 
//         while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
//             i++;
//         end = i;
//         while(argv[1][i] == ' ' || argv[1][i] == '\t')
//             i++;
//         while (argv[1][i])
//         {
//             word =  2;
//             while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
//             {
//                 write(1, &argv[1][i], 1);
//                 i++;
//             }
//             while (argv[1][i] == ' ' || argv[1][i] == '\t')
//             {
//                 if (argv[1][i + 1] != '\0')
//                     flag = 1;
//                 else
//                     flag = 0;
//                 i++;
//             }
//             if (flag == 1)
//                 write (1, " ", 1);   
//         }
//         if (word == 2)
//             write(1, " ", 1);
//         while (start < end)
//         {
//             write(1, &argv[1][start], 1);
//             start++;
//         }
//     }  
    
//     write(1, "\n", 1); 
// }

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