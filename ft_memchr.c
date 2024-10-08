/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:17:50 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 19:17:54 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;

	s_tmp = (unsigned char *) s;
	while (n > 0)
	{
		if (*s_tmp == (unsigned char) c)
			return (s_tmp);
		s_tmp++;
		n--;
	}
	return (NULL);
}
