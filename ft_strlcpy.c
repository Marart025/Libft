/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:10:00 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/12/07 13:10:19 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			count;
	unsigned int	point;

	count = ft_strlen(src);
	if (!dstsize)
		return (count);
	point = 0;
	while (src[point] && point < dstsize - 1)
	{
		dst[point] = src[point];
		point++;
	}
	dst[point] = '\0';
	return (count);
}
