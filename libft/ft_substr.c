/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:33:06 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/11 16:41:06 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_ptr(void)
{
	char	*s;

	s = malloc(sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	max;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (empty_ptr());
	max = len;
	if (ft_strlen(s) - start < len)
		max = ft_strlen(s) - start;
	sub = malloc((max + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < max)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
