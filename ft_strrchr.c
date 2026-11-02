/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:25:54 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:23:32 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "hello world!";
    printf("%s\n",ft_strrchr(s,'l'));
     printf("%s\n",ft_strrchr(s,'\0'));
       printf("%s\n",ft_strrchr(s,'h'));
       printf("%p\n",ft_strrchr(s,'H'));
}*/
