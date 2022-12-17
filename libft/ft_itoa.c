/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:18:27 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:18:28 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findlen(long nn, int len)
{
	while (nn > 9)
	{
		len++;
		nn /= 10;
	}
	return (len);
}

static void	putnumber(char *mals, int len, long nn, int neg)
{
	mals[len--] = '\0';
	while (nn > 9)
	{
		mals[len] = (nn % 10) + 48;
		len--;
		nn /= 10;
	}
	mals[len--] = (nn % 10) + 48;
	if (neg == -1)
		mals[len] = '-';
}

char	*ft_itoa(int n)
{
	int		neg;
	long	nn;
	int		len;
	char	*mals;

	nn = (long)n;
	neg = 1;
	len = 1;
	if (nn < 0)
	{
		neg = -1;
		nn *= -1;
		len++;
	}
	len = findlen(nn, len);
	mals = (char *)malloc(sizeof(char) * (len + 1));
	if (!mals)
		return (NULL);
	putnumber(mals, len, nn, neg);
	return (mals);
}
