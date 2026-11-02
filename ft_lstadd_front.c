/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 10:37:08 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:45:00 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
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

         ft_lstadd_front(&node1,node3);

         t_list *lis= node1;
         while (lis != NULL)
         {
                 printf("%s",(char *)lis -> content);
                 lis = lis -> next;
         }
         free (node1);
         free (node2);
}*/
