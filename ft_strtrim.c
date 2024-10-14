/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:57:28 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 18:20:18 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*trimmer(char const *s, char const *set, char *edge, char m)
{
	while (s != edge)
	{
		if (!ft_strchr(set, *s))
			return ((char *) s);
		s += m;
	}
	s -= 1;
	return ((char *) s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1start;
	char	*s1end;
	char	*newstr;
	size_t	newstrlen;
	size_t	s1len;

	s1len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	s1start = trimmer(s1, set, (char *)(s1 + s1len), 1);
	s1end = trimmer(s1 + s1len - 1, set, s1start, -1);
	newstrlen = s1end - s1start + 1;
	newstr = (char *) malloc((newstrlen + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	if (newstrlen == 1)
		newstrlen = 0;
	ft_memcpy(newstr, s1start, newstrlen);
	newstr[newstrlen] = '\0';
	return (newstr);
}
