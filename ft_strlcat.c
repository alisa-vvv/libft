/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:51:37 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 15:32:48 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void	ft_memcpy(void *dest, const void *src, size_t n)
//{
//	unsigned char	*ptr_dest;
//	unsigned char	*ptr_src;
//
//	ptr_dest = dest;
//	ptr_src = (unsigned char *) src;
//	while (n--)
//	{
//		*ptr_dest = *ptr_src;
//		ptr_src++;
//		ptr_dest++;
//	}
//}
//
//static size_t	ft_strlen(const char *str)
//{
//	size_t	c;
//
//	c = 0;
//	while (*str++)
//		c++;
//	return (c);
//}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *) src);
	if (dstlen == size)
		return (dstlen + srclen);
	if (dstlen < size)
		size = dstlen;
	if (srclen < size)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, size - 1);
		*(dst + dstlen + size) = '\0';
	}
	return (dstlen + srclen);
}
