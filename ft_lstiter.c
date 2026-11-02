/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:44:44 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 11:44:45 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst ->next;
	}
}
/*
void ft_toupperlst(void *content)
{
	char *str;
	int i = 0;

	str = (char *) content;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main()
{
	 t_list	*node1;
	 t_list *node2;
	 t_list	*node3;
	 t_list *before;
	 t_list	*after;
	 node2 = ft_lstnew(ft_strdup("world"));
	 node1 = ft_lstnew(ft_strdup("hello"));
	 node3 = ft_lstnew(ft_strdup("!!"));

	 node1 ->next = node2;
	 node2 ->next = node3;

	 before = node1;
	 printf("before del\n");
	 while(before != NULL)
	 {
		 printf("%s",(char *)before -> content);
		 before = before ->next;
	 }
	 ft_lstiter(node1,ft_toupperlst);
	 printf("\nafter del\n");

	 after = node1;
	 while (after != NULL)
	 {
		 printf("%s",(char *)after -> content);
		 after = after ->next;
	 }
	 free(node1);
	 free(node2);
	 free(node3);
}
*/
