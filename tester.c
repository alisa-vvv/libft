/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 18:26:15 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*last_occ;

	ptr_s = (char *) s;
	last_occ = NULL;
	while (*ptr_s)
	{
		if (*ptr_s == c)
			last_occ = ptr_s;
		ptr_s++;
	}
	if (c == '\0')
		return (ptr_s);
	return (last_occ);
}

int	main(void)
{	
	char *str = "abc0def0gh";
	printf("Example_Res: %s\n", strrchr(str, '1'));
	printf("ft_Res: %s\n", ft_strrchr(str, '1'));
	return (0);
}




	// while (i < 5)
	// {
	// 	printf("%d, ", ptr[i]);
	// 	i++;
	// }

	// ft_memset(ptr, 9, 3);
	// i = 0;
	// printf("new arr: ");
	// while (i < 5)
	// {
	// 	printf("%d, ", ptr[i]);
	// 	i++;
	// }