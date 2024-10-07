/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   isalpha.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 11:47:26 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 12:03:57 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	main (int agrc, char *argv[0])
{
	printf("reslut: %d", isalpha(argv[1][0]));
	return (0);
}
