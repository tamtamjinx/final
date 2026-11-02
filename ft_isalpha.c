/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:09:54 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 11:11:04 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*

int main()
{
    printf("%d\n",ft_isalpha('A'));
    printf("%d\n",ft_isalpha('e'));
    printf("%d\n",ft_isalpha('5'));
    printf("%d\n",ft_isalpha(65));
    printf("%d\n",ft_isalpha('#'));
    printf("%d\n",ft_isalpha(3));
    printf("%d\n",ft_isalpha('\0'));
}*/
