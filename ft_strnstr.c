/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:42:30 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/09 17:42:25 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	isequal(const char *hay, const char *needle, size_t len)
{
	while (len)
	{
		if (*needle != *hay)
			return (0);
		needle++;
		if (!*needle)
			return (1);
		len--;
		hay++;
	}
	return (0);
}

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *) hay);
	while (*hay && len--)
	{
		if (*hay == *needle)
		{
			needle++;
			if (!*needle || isequal(hay + 1, needle, len) == 1)
				return ((char *) hay);
		}
		hay++;
	}
	return (0);
}
