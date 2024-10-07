/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   isalpha.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 11:47:26 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 13:30:33 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char	c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}

int	main (int agrc, char *argv[0])
{
	printf("result: %d", ft_isalpha(argv[1][0]));
	printf("compare: %d", isalpha(argv[1][0]));
	return (0);
}
