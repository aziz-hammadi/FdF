/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:34:57 by ahammad           #+#    #+#             */
/*   Updated: 2021/10/12 18:35:28 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdel_first(t_list *lst)
{
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	if (!(new = ft_lstnew(NULL, 0)))
		return (lst);
	new = (*lst).next;
	free(lst);
	lst = NULL;
	return (new);
}
