/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:34:52 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/11 19:53:54 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_add(unsigned long nb)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	print_string("0x");
	if (nb < 16)
	{
		count += print_char(hex[nb]);
		return (count);
	}
	else
		count += print_hex(nb / 16, hex);
	count += print_hex(nb % 16, hex);
	return (count);
}
