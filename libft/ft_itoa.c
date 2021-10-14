/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <maalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:10:27 by maalzaab          #+#    #+#             */
/*   Updated: 2021/10/11 16:39:50 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

static int	ft_length(long num, int sign)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	if (sign == -1)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	int		len;
	long	temp;

	temp = n;
	sign = ft_sign(n);
	if (n < 0)
		temp = -temp;
	len = ft_length(temp, sign);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (sign == -1)
		res[0] = '-';
	res[len--] = '\0';
	while (temp != 0)
	{
		res[len--] = ((long)temp % 10) + '0';
		temp = temp / 10;
	}
	return (res);
}
