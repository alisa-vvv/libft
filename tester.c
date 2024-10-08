/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 14:51:27 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = (unsigned char *) src;
	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_src++;
		ptr_dest++;
		n--;
	}
}

int	main(void)
{	
	char	*src = "12345";
	char	dest3[6] = "abcde";
	printf("src: %s\n\n", src);
	printf("example before: %s\n", src+2);
	memmove(src+2, src, 3);
	printf("example after: %s\n\n", dest3);

	char	dest4[6] = "abcde";
	printf("myfunc before: %s\n", dest4);
	ft_memcpy(src+2, src, 3);
	printf("myfunc after: %s\n", dest4);
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