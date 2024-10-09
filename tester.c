/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/09 17:38:39 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char *s1 = "00ababa000-";
	char *s2 = "000";
//	printf("Example_Res: %s\n", strnstr(s1, s2, 15));
	printf("ft_Res: %s\n", ft_strnstr(s1, s2, 15));
	return (0);
}


//	unsigned char	*str;
//	str = memcmp("ab0cde", '0', 4);
//	printf("Example_Res: %s\n", str);
//	str = ft_memcmp("ab0cde", '0', 4);
//	printf("ft_Res: %s\n", str);
//	return (0);


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