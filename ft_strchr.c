/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:32:46 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:22:41 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char )c)
		return ((char *)&s[i]);
	return (NULL);
}
/*

int main()
{
    char *s = "hello world!";
    printf("%s\n",ft_strchr(s,'w'));
     printf("%s\n",ft_strchr(s,'\0'));
       printf("%s\n",ft_strchr(s,'h'));
       printf("%p\n",ft_strchr(s,'H'));
}*/
