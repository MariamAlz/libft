/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <maalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:03:01 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/11 16:40:31 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strs_size(const char *s, char c)
{
	int	i;
	int	size;

	i = 1;
	size = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			size++;
		i++;
	}
	if (s[i - 1] == c)
		size--;
	return (size + 1);
}

static void	ft_fill_strs(char **strs, char const *str, char c)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		start = i;
		while (str[i] != c && str[i] != '\0')
			i++;
		end = i;
		strs[j] = ft_substr(str, start, end - start);
		j++;
	}
	strs[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
	{
		strs = (char **)malloc(sizeof(char *));
		if (!strs)
			return (NULL);
		strs[0] = 0;
		return (strs);
	}
	strs = (char **)malloc(sizeof(char *) * (ft_strs_size(s, c) + 1));
	if (!strs)
		return (NULL);
	ft_fill_strs(strs, s, c);
	return (strs);
}
