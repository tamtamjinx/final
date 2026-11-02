/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 10:48:50 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:50:02 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
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

         printf("%d",ft_lstsize(node1));
         free (node1);
         free (node2);
         free (node3);
}*/
