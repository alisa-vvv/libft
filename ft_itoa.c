/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:44:18 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/15 17:09:48 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	lenctr(long n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	itoaer(char *convstr, long tmp_int)
{
	while (tmp_int)
	{
		convstr--;
		*convstr = tmp_int % 10 + 48;
		tmp_int /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	nlen;
	long	tmp_int;
	char	*convstr;

	nlen = 0;
	tmp_int = n;
	if (n < 0)
	{
		tmp_int = -tmp_int;
		nlen++;
	}
	nlen += lenctr(tmp_int);
	convstr = (char *) malloc((nlen + 1) * sizeof(char));
	if (!convstr)
		return (NULL);
	if (n < 0)
		*convstr = '-';
	itoaer(convstr + nlen, tmp_int);
	return (convstr);
}
