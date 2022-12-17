/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:20:27 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:20:28 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dst[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] != '\0' && dsize + 1 < size)
	{
		dst[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dst[dsize] = '\0';
	return (i + ft_strlen(src));
}
