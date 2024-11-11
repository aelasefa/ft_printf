/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:18:33 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/06 09:31:08 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	br;

	if (needle[0] == '\0')
		return ((char *)haystack);
	br = 0;
	while (br < len && haystack[br])
	{
		if (haystack[br] == needle[0])
		{
			i = br;
			j = 0;
			while (haystack[i] == needle[j] && i < len && needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[br]);
		}
		br++;
	}
	return (NULL);
}
