/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:39:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/09/16 11:37:01 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int *len)
{
	if(!str)
		str = "(null)";
	*len = write(1, str, ft_strlen(str));
}

void	ft_putnbrbase(long long int nbr,int  base,  int *len)
{
	if (nbr < 0)
	{
		*len += write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr > base - 1)
		ft_putnbrbase(nbr / base, base, len);
	*len += write(1, &"0123456789abcdef"[nbr % base], 1);
}
int ft_printf(const char *format, ... )
{
	int	len;

	len = 0;
	va_list ptr;
	va_start(ptr, format);
	while(*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(ptr, char *), &len);
			else if (*format == 'd')
				ft_putnbrbase((long long int)va_arg(ptr, int), 10, &len);
			else if (*format == 'x')
				ft_putnbrbase((long long int)va_arg(ptr, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return(va_end(ptr), len);
}

int	main()
{
	ft_printf("%s\n", "toto");
	printf("%s\n", "toto");


	ft_printf("Magic %s is %d\n", "number", 42);
	printf("Magic %s is %d\n", "number", 42);

	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	printf("Hexadecimal for %d is %x\n", 42, 42);
}