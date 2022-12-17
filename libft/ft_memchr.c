/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:19:18 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:19:19 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	int				i;
	unsigned char	*str;

	i = 0;
	uc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n != 0)
	{
		if (str[i] == uc)
			return (str + i);
		i++;
		n--;
	}
	return (NULL);
}
