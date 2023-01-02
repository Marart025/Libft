/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:38:07 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/12/07 13:03:27 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			len_src;
	size_t			len_dst;
	unsigned int	point;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	point = 0;
	while (src[point] && point < dstsize - len_dst)
	{
		dst[point + len_dst] = src[point];
		point++;
	}
	if (point == dstsize - len_dst && dstsize > len_dst)
		point--;
	dst[point + len_dst] = '\0';
	return (len_src + len_dst);
}
