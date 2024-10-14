/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 18:19:05 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 
// use =lbsd when compiling
#include "libft.h"

int	main(void)
{
	char	*orig = "abbcab3213dsav2bbccaa";
	char	*newstr;

	printf("orig: %s\n", orig);
	newstr = ft_strtrim(orig, "abc");
	printf("Result: %s\n", newstr);
	printf("testnull: %c\n", newstr[8]);
	free (newstr);
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
//	printf("ft_return: %zu\n", strlcat(dst2, src2, 12));
//	printf("ft_res: %s\n", dst2);
//	printf("ft_testchar: %d\n\n", *(dst2 + 12));
//	return (0);

// FOR TESTING CALLOC
//	printf("size_t for this pc is: %zu\n", (size_t) - 1);
//	char	*testptr;
//	testptr = (char *) ft_calloc(3, 2);
//	printf("testing allocation: %s\n", testptr);
//	free(testptr);
//	printf("testing free: %s\n", testptr);
//	char *exampleptr = (char *) calloc(1, 1);
//	printf("Example_comp: %s\n", exampleptr);
//	free(exampleptr);

//FOR TESTING STRING + MALLOC STUFF
//	char	*ft_tstr = ft_strdup("a");
//	printf("ft_res: %s\n", ft_tstr);
//	free(ft_tstr);
//	char	*ex_tstr = strdup("a");
//	printf("ex_res: %s\n", ex_tstr);
//	free(ex_tstr);



//FOR TESTING ATOI
//	char *src = "\t\n\v\f\r -0012345";
//	char *src = "\t\n\v\f\r --3213-1234";
//	printf("Example_src: %s\n\n", src);
//	printf("Example_Return: %d\n", atoi(src));
//
//	printf("ft_Return: %d\n", ft_atoi(src));

// FOR TESTING ft_split
//	char	**array;
//	int	i;
//	array = ft_split("##abcde## a#", '#');
//	i = 0;
//	while (i < 3)
//	{
//		printf("ft_res: %s\n", array[i]);
//		i++;
//	}
//	free(array);
//	return (0);

// FOR TESTING ft_strtrim
//	char	*orig = "abbcabbbccaa";
//	char	*newstr;
//
//	printf("orig: %s\n", orig);
//	newstr = ft_strtrim(orig, "abc");
//	printf("Result: %s\n", newstr);
//	printf("testnull: %c\n", newstr[8]);
//	free (newstr);