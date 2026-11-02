/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:32:24 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:23:08 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*d1;

	if (!dest && !src)
		return (NULL);
	s1 = (unsigned char *) src;
	d1 = (unsigned char *) dest;
	if (d1 < s1)
	{
		i = 0;
		while (i < n)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			d1[i] = s1[i];
	}
	return (dest);
}
/*
int main()
{
    char s[20]="hello world";
    ft_memmove(s,s+2,3);
    printf("%s\n",s);

    char s1[20]="hello world";
    ft_memmove(s1+2,s1,3);
    printf("%s\n",s1);

    char s2[20]="hello world";
    ft_memmove(s2,s2,3);
    printf("%s",s2);

}*/
