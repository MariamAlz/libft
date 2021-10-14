/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:51:00 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/11 13:52:43 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ch;

	ch = (char *)s;
	i = 0;
	while (*ch != '\0')
	{
		ch++;
		i++;
	}
	if (c == '\0')
		return (ch);
	while (i >= 0)
	{
		if (*ch == (char)c)
			return (ch);
		ch--;
		i--;
	}
	return (NULL);
}
