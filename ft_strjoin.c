/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:20:05 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:20:15 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	s1size;
	size_t	s2size;

	if (!s1 || !s2)
		return (NULL);
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	sjoin = (char *) malloc(s1size + s2size + 1);
	if (!sjoin)
		return (NULL);
	ft_memcpy(sjoin, s1, s1size);
	ft_memcpy(sjoin + s1size, s2, s2size + 1);
	return (sjoin);
}
/*
int	main()
{
	char *s1="hello";
	char *s2="world";
	char *s3=ft_strjoin(s1,s2);
	printf("%s",s3);
	free(s3);
}*/
