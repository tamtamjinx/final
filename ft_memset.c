/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:09:07 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 12:42:35 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *) s;
	while (i < n)
	{
		s1[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int main()
{   char buf[10] = {0};
   ft_memset(buf,'w',7);
    printf("%s\n",buf);

    char buf1[10]= "hello";
    ft_memset(buf1,'a',9);
    printf("%s\n",buf1);

    char buf2[10]={0};
    ft_memset(buf2,'a',12);
    printf("%s",buf2);

}*/
