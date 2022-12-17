/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:20:42 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:20:43 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mal;
	unsigned int	index;
	int				len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	mal = malloc(sizeof(char) * (len + 1));
	if (!mal)
		return (NULL);
	index = 0;
	while (s[index])
	{
		mal[index] = f(index, s[index]);
		index++;
	}
	mal[index] = '\0';
	return (mal);
}
