/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:30:00 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 14:32:11 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	siz;
	void	*s;

	siz = nmemb * size;
	if (nmemb != 0 && siz / nmemb != size)
		return (NULL);
	s = malloc(siz);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, siz);
	return (s);
}
/*
int main()
{
   char *s2 = ft_calloc(4,4); 
   
    printf("%c\n",s2[0]);
    printf("%c\n",s2[1]);
    printf("%c\n",s2[2]);
    printf("%c\n",s2[3]);
    free(s2);

}*/
