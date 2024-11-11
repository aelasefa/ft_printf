/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:27:20 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/11 19:53:32 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int  print_hex(unsigned long nb , char *hex)
{
	int		count;

	count = 0;
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
