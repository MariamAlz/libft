/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:01:18 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/11 14:02:43 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*to_find;
	size_t		i;

	to_find = (char *)haystack;
	if (*needle == '\0')
		return (to_find);
	i = 0;
	while (*to_find && len-- >= ft_strlen(needle))
	{
		if (*to_find == needle[i])
		{
			if (ft_strncmp(to_find, needle, ft_strlen(needle)) == 0)
				return (to_find);
		}
		to_find++;
	}
	return (NULL);
}
