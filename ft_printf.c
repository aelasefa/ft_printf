/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:09:34 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/11 19:50:11 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_format(char spec, va_list args)
{
	int 	count;

	count = 0;
	if (spec == 'c')
		count += print_char((char)va_arg(args, int));
	else if (spec == 's')
		count += print_string(va_arg(args, char*));
	else if (spec == 'd' || spec == 'i')
		count += print_int(va_arg(args, int));
	else if (spec == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (spec == 'x')
		count += print_hex(va_arg(args, unsigned long), "0123456789abcdef");
	else if (spec == 'X')
		count += print_hex(va_arg(args, unsigned long), "0123456789ABCDEF");
	else if (spec == 'p')
		count += print_add(va_arg(args, unsigned long));
	else
		count += write(1, &spec, 1);
		return (count);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += print_format(*(++format), args);
		}
		else
			write(1, format, 1);
		++format; 
	}
	va_end(args);
	return (count);
}