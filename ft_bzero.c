/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:12:16 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 10:14:37 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}
/*
int main()
{
  char buffer[] = "hello world";
  ft_bzero(buffer,3);
  printf("From the beginning: %s \n",buffer);
  printf("after 3 index :%s",&buffer[3]);
}*/
