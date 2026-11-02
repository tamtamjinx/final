/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:35:18 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 14:36:49 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	ssize;
	char	*str;

	ssize = ft_strlen(s) + 1;
	str = malloc(ssize);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, ssize);
	return (str);
}
/*
 int main()
 {
    
    char *s1="hello";
    char *z =ft_strdup(s1);
    printf("%s",z);
   free(z);
 }
*/
