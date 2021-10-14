/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:12:35 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/06 19:30:50 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	max;

	dstlen = ft_strlen(dst);
	srclen = 0;
	max = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst))
		max = ft_strlen(src) + dstsize;
	while (src[srclen] && (dstlen + 1) < dstsize)
	{
		dst[dstlen] = src[srclen];
		dstlen++;
		srclen++;
	}
	dst[dstlen] = '\0';
	return (max);
}
