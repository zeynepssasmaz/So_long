/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:21:00 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:21:01 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (!ft_strlen(n))
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && h[i] != '\0' && i + j < len)
		{
			j++;
			if (n[j] == '\0')
				return (h + i);
		}
		i++;
	}
	return (NULL);
}
