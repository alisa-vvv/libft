/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:48:52 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/09 18:45:33 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	size -= 1;
	while (size--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (src_len);
}
