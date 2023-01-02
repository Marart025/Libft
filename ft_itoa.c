/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:13:49 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/12/08 13:28:48 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	numlen(long num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num >= 1)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*num2str(char *buffer, long num, unsigned int len)
{
	if (num == 0)
	{
		buffer[0] = '0';
		return (buffer);
	}
	if (num < 0)
		num *= -1;
	while (len--)
	{
		buffer[len] = (num % 10) + '0';
		num /= 10;
	}
	if (buffer[0] == '0')
		buffer[0] = '-';
	return (buffer);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = numlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str)
		str = num2str(str, n, len);
	return (str);
}
