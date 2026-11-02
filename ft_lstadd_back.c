/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:35:48 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 11:35:50 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
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

         ft_lstadd_back(&node1,node3);
         t_list *lst = node1;
         while (lst != NULL)
         {
                 printf("%s",(char *)lst->content);
                 lst = lst ->next;
         }
         free (node1);
         free (node2);
         free (node3);
}*/
