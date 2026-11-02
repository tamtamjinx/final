/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:20:37 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:20:39 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*strim;
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strim = (char *) malloc(end - start + 1);
	if (!strim)
		return (NULL);
	ft_memcpy(strim, s1 + start, end - start);
	strim[end - start] = '\0';
	return (strim);
}
/*
int main()
{
	char	*s = "./hello/.";
	char	*set = "./";
	char	*s1= ft_strtrim(s,set);
	printf("%s",s1);
	free(s1);
}*/
