/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   tester.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 11:47:26 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 14:51:04 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(char c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

int	main(void)
{	
	char test = '€';
	char compare = '€'; 
	printf("result: %d\n", ft_isascii(test));
	printf("compare: %d\n", isascii(compare));
	return (0);
}
