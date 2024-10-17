/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:57:28 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/17 21:17:28 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*trimright(char const *s, char const *set)
{
	while (*s)
	{
		if (!ft_strchr(set, *s))
			return ((char *) s);
		s++;
	}
	return ((char *) s);
}

static	char	*trimleft(char const *s, char const *set, size_t j, size_t i)
{
	while (--j > i)
	{
		if (!ft_strchr(set, s[j]))
			return ((char *) &s[j]);
	}
	if (i == 0)
		return ((char *) &s[0]);
	return ((char *) &s[j]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1start;
	char	*s1end;
	char	*newstr;
	size_t	newstrlen;
	size_t	s1len;

	if (!set)
		return (NULL);
	s1len = ft_strlen(s1);
	s1start = trimright(s1, set);
	s1end = trimleft(s1, set, s1len, s1start - s1);
	newstrlen = (s1end - s1start + 1);
	newstr = (char *) malloc((newstrlen + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1start, newstrlen);
	newstr[newstrlen] = '\0';
	return (newstr);
}
