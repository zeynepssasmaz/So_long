/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:19:39 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:19:40 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;
	size_t			i;

	i = 0;
	uc = (unsigned char *)b;
	while (len != 0)
	{
		uc[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
