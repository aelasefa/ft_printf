/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:57:04 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/05 18:07:17 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*rsrc;
	unsigned char	*rdst;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	rsrc = (unsigned char *)src;
	rdst = (unsigned char *)dst;
	i = 0;
	if (rsrc != rdst)
	{
		while (i < n)
		{
			rdst[i] = rsrc[i];
			i++;
		}
	}
	return (dst);
}
