/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:51:37 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/11 14:26:00 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = (unsigned char *) src;
	while (n--)
	{
		*ptr_dest = *ptr_src;
		ptr_src++;
		ptr_dest++;
	}
}

static size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *) src);
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - 1);
		*(dst + dst_len + size) = '\0';
	}
	return (dst_len + size);
}
