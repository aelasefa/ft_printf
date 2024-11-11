/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:36:59 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/11 19:52:53 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_int(int nb);
int	print_string(char *s);
int	print_char(char c);
int	print_unsigned(unsigned int nb);
int	print_hex(unsigned long nb, char *hex);
int	print_add(unsigned long nb);
# endif
