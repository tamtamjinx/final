/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:40:25 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 11:40:31 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst -> content);
	free (lst);
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
         t_list *before;
         t_list *after;
         node2 = ft_lstnew(ft_strdup("world"));
         node1 = ft_lstnew(ft_strdup("hello"));

         node1 ->next = node2;

         before = node1;
         printf("before del\n");
         while(before != NULL)
         {
                 printf("%s",(char *)before -> content);
                 before = before ->next;
         }
         ft_lstdelone (node2,del);
         printf("\nafter del\n");
	node1 -> next = NULL;
	 after = node1;
         while (after != NULL)
         {
                 printf("%s",(char *)after -> content);
                 after = after ->next;
         }
         free(node1);
       
}*/
