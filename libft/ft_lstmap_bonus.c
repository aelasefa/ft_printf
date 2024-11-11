/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstmap_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:10:30 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/03 18:51:52 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_najah(t_list **lst, void (*del)(void*))
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;
	void	*fcheck;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		fcheck = f(lst->content);
		if (!fcheck)
			return (ft_najah(&new, del));
		ptr = ft_lstnew(fcheck);
		if (!ptr)
		{
			del(fcheck);
			return (ft_najah(&new, del));
		}
		ft_lstadd_back(&new, ptr);
		lst = lst->next;
	}
	return (new);
}
