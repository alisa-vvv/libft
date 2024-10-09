/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/09 19:03:45 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // use =lbsd when compiling

static size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

 size_t	ft_strlcat(char *dst, const char *src, size_t size)
 {
	size_t	src_len;
	
	src_len = ft_strlen(src);
	size -= 1;
	while (size--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (src_len);
 }

int	main(void)
{
	char src[6] = "tenate";
	char dst[5] = "conca";
//	char *test_ptr = &src[7];
//	test_ptr += 1;
//	*test_ptr = 'a';
	printf("src: %s\n", src);
	printf("Example_Return: %zu\n", strlcat(dst, src, 12));
	printf("Example_Res: %s\n", dst);
	printf("Example_testChar: %s\n\n", dst + 4);

//	char src2[8] = "abcdefgh";
//	char dst2[8] = "12345678";
//	char *test_ptr = &src2[7];
//	test_ptr += 1;
//	*test_ptr = 'a';
//	printf("ft_Return: %zu\n", ft_strlcpy(dst2, src2, 4));
//	printf("ft_Res: %s\n", dst2);
//	printf("ft_testChar: %s\n", dst2 + 4);
//	return (0);
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

//	char src[8] = "abcdefgh";
//	char dst[8] = "12345678";
//	char *test_ptr = &src[7];
//	test_ptr += 1;
//	*test_ptr = 'a';
//	printf("src: %c\n", *src);
//	printf("Example_Return: %zu\n", strlcpy(dst, src, 4));
//	printf("Example_Res: %s\n", dst);
//	printf("Example_testChar: %s\n\n", dst + 4);
//
//	char src2[8] = "abcdefgh";
//	char dst2[8] = "12345678";
//	char *test_ptr = &src2[7];
//	test_ptr += 1;
//	*test_ptr = 'a';
//	printf("ft_Return: %zu\n", ft_strlcpy(dst2, src2, 4));
//	printf("ft_Res: %s\n", dst2);
//	printf("ft_testChar: %s\n", dst2 + 4);
//	return (0);