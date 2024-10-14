/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:41:57 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 12:06:39 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//static size_t	ft_strlen(const char *str)
//{
//	size_t	c;
//
//	c = 0;
//	while (*str++)
//		c++;
//	return (c);
//}
//
//static void	ft_memcpy(void *dest, const void *src, size_t n)
//{
//	unsigned char	*ptr_dest;
//	unsigned char	*ptr_src;
//
//	ptr_dest = dest;
//	ptr_src = (unsigned char *) src;
//	while (n--)
//		*ptr_dest++ = *ptr_src++;
//}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*newstr;

	len = ft_strlen(s) + 1;
	newstr = (char *) malloc(len * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s, len);
	return (newstr);
}
