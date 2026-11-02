/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:48:25 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:03:11 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*newcontent;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newcontent = f(lst -> content);
		newnode = ft_lstnew(newcontent);
		if (!newnode)
		{
			del (newcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst -> next;
	}
	return (newlst);
}
/*
void del(void *content)
{
	free(content);
}
void *to_upper(void *content)
{
	char	*str;
	int	i;
	char	*dup;
	i = 0;
	if (!content)
		return(NULL);
	str = (char *) content;
	dup = ft_strdup(str);
	if (!dup)
		return(NULL);
	while(dup[i])
	{
		if (dup[i] >= 'a' && dup[i] <= 'z')
			dup[i] -= 32;
		i++;
	}
	return (void*)dup;
}

int main()
{
	t_list *node1 = NULL;
	t_list *after = NULL;
	t_list *before = NULL;

	ft_lstadd_back(&node1,ft_lstnew(ft_strdup("hello")));
	ft_lstadd_back(&node1,ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&node1,ft_lstnew(ft_strdup("!!")));

	before = ft_lstmap(node1, to_upper,del);
	after = before;
	while (after)
	{
		printf("%s\n",(char *)after->content);
                after = after -> next ;
	}
	ft_lstclear(&node1,del);
	ft_lstclear(&after,del);

}*/
