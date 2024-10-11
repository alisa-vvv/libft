/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:35:56 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/11 14:26:39 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

static void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = (unsigned char *) src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	lentoend;

	lentoend = ft_strlen((char *) s) - start;
	if (len > lentoend)
		len = lentoend;
	newstr = (char *) malloc((len + 1) * sizeof (char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s + start, len);
	*(newstr + len) = '\0';
	return (newstr);
}
