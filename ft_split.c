/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:38:17 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/11 17:55:56 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	fillstr(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = (unsigned char *) src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	*ptr_dest = '\0';
}

static const char	*wordallocer(char **arr, char const *s, char c, size_t i)
{
	size_t	symcount;

	symcount = 0;
	while (*s && *s != c)
	{
		s++;
		symcount++;
	}
	arr[i] = (char *) malloc((symcount + 1) * sizeof(char));
	if (!arr[i])
		return (NULL);
	fillstr(arr[i], s - symcount, symcount);
	return (s);
}

static size_t	wcounter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count += 1;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**splitted_s;

	if (!s)
		return (NULL);
	splitted_s = (char **) malloc(wcounter(s, c) * sizeof (char *));
	if (!splitted_s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			s = wordallocer(splitted_s, s, c, i);
			if (!s)
			{
				free (splitted_s);
				return (NULL);
			}
			i++;
		}
	}
	return (splitted_s);
}
