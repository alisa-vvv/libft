/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/10 18:08:34 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // use =lbsd when compiling
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = (unsigned char) '\0';
		ptr++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_start;

	if (size && nmemb > (size_t) - 1 / size)
		return (NULL);
	ptr_start = malloc(nmemb * size);
	if (ptr_start == NULL)
		return (NULL);
	ft_bzero(ptr_start, nmemb * size);
	return (ptr_start);
}

int	main(void)
{
//	char *src = "\t\n\v\f\r -0012345";
//	char *src = "\t\n\v\f\r --3213-1234";
//	printf("Example_src: %s\n\n", src);
//	printf("Example_Return: %d\n", atoi(src));
//
//	printf("ft_Return: %d\n", ft_atoi(src));
	printf("size_t for this pc is: %zu\n", (size_t) - 1);
	char	*testptr;
	testptr = (char *) ft_calloc(4, );
	printf("testing allocation: %s\n", testptr);
	free(testptr);
	printf("testing free: %s\n", testptr);
	char *exampleptr = (char *) calloc(4, 2);
	printf("Example_comp: %s\n", exampleptr);
	free(exampleptr);
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


//  FOR TESTING cat/cpy
//	char src[7] = "tenate";
//	char dst[6] = "conca";
//	printf("Example_src: %s\n", src);
//	printf("Example_Return: %zu\n", strlcat(dst, src, 12));
//	printf("Example_Res: %s\n", dst);
//	printf("Example_testChar: %d\n\n", *(dst + 13));
//
//	char src2[7] = "tenate";
//	char dst2[6] = "conca";
//	printf("ftsrc: %s\n", src2);
//	printf("ft_Return: %zu\n", strlcat(dst2, src2, 12));
//	printf("ft_Res: %s\n", dst2);
//	printf("ft_testChar: %d\n\n", *(dst2 + 12));
//	return (0);