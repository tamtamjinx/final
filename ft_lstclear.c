/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:00:55 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:06:02 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = list;
	}
}
/*
void    del(void *content)
{
        free(content);
}
int     main()
{
         t_list *node1;
         t_list *node2;
         t_list *node3;
         t_list *before;
      
         node2 = ft_lstnew(ft_strdup("world"));
         node1 = ft_lstnew(ft_strdup("hello"));
         node3 = ft_lstnew(ft_strdup("!!"));

         node1 ->next = node2;
         node2 ->next = node3;

         before = node1;
         printf("before clear\n");
         while(before != NULL)
         {
                 printf("%s",(char *)before -> content);
                 before = before ->next;
         }
         ft_lstclear (&node1,del);
	 if (node1 == NULL)
	 {printf("\nempty list \n");}
}*/
