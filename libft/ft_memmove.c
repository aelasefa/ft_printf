/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:36 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/02 13:23:25 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*rsrc;
	unsigned char	*rdst;
	size_t			i;

	rsrc = (unsigned char *) src;
	rdst = (unsigned char *)dst;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			rdst[len] = rsrc[len];
		}
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			rdst[i] = rsrc[i];
			i++;
		}
	}
	return (dst);
}
