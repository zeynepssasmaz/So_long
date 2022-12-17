/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:21:10 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:21:11 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	starttrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	start = 0;
	while (s1[start])
	{
		i = 0;
		while (s1[start] != set[i] && i + 1 < ft_strlen(set))
			i++;
		if (s1[start] == set[i])
			start++;
		else
			break ;
	}
	return (start);
}

static size_t	endtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;

	end = ft_strlen(s1) - 1;
	while (end > 0)
	{
		i = 0;
		while (s1[end] != set[i] && i + 1 < ft_strlen(set))
			i++;
		if (s1[end] == set[i])
			end--;
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1)
		return (NULL);
	start = starttrim(s1, set);
	end = endtrim(s1, set);
	i = 0;
	if (end < start)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (end - start) + 2);
	if (!new)
		return (NULL);
	while (s1[start] != '\0' && start <= end)
	{
		new[i] = s1[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
