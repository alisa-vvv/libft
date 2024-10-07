/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   isalpha.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 11:47:26 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 14:07:13 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>



int	main (int agrc, char *argv[0])
{
	printf("result: %d", ft_isalpha(argv[1][0]));
	printf("compare: %d", isalpha(argv[1][0]));
	return (0);
}
