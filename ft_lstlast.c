/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 10:53:15 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:54:25 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/*
int     main()
{
         t_list *node1;
         t_list *node2;
         t_list *node3;
         node1 = ft_lstnew("my name");
         node2 = ft_lstnew("is");
         node3 = ft_lstnew("ruba");
         node1 -> next = node2;
         node2 -> next = node3;

         printf("%s",(char *)ft_lstlast(node1) -> content);
         free (node1);
         free (node2);
         free (node3);
}*/
