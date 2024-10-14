/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:39:02 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 12:07:01 by avaliull         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cateds;
	size_t	len;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	len = s1_len + ft_strlen(s2) + 1;
	cateds = (char *) malloc (len * sizeof(char));
	if (!cateds)
		return (NULL);
	ft_memcpy(cateds, s1, s1_len);
	ft_memcpy(cateds + s1_len, s2, len - s1_len);
	*(cateds + len) = '\0';
	return (cateds);
}
