/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:33:07 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/30 15:29:23 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*c;
	t_list	*n;
	void	*content;

	nl = NULL;
	c = lst;
	while (c)
	{
		if (f)
			content = f(c->content);
		else
			content = c->content;
		n = ft_lstnew(content);
		if (!n)
		{
			if (del)
				del(content);
			ft_lstclear(&nl, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, n);
		c = c->next;
	}
	return (nl);
}
