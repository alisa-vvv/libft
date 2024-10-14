/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 11:57:26 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 
// use =lbsd when compiling
#include <stdlib.h>
#include "libft.h"

//static void	fillstr(void *dest, const void *src, size_t n)
//{
//	unsigned char	*ptr_dest;
//	unsigned char	*ptr_src;
//
//	ptr_dest = dest;
//	ptr_src = (unsigned char *) src;
//	while (n--)
//		*ptr_dest++ = *ptr_src++;
//	*ptr_dest = '\0';
//}
//
//static const char	*wordallocer(char **arr, char const *s, char c, size_t i)
//{
//	size_t	symcount;
//
//	symcount = 0;
//	while (*s && *s != c)
//	{
//		s++;
//		symcount++;
//	}
//	arr[i] = (char *) malloc((symcount + 1) * sizeof(char));
//	if (!arr[i])
//		return (NULL);
//	fillstr(arr[i], s - symcount, symcount);
//	return (s);
//}
//
//static size_t	wcounter(char const *s, char c)
//{
//	size_t	count;
//
//	count = 0;
//	while (*s)
//	{
//		if (*s == c)
//			s++;
//		else
//		{
//			count += 1;
//			while (*s && *s != c)
//				s++;
//		}
//	}
//	return (count);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	size_t	i;
//	char	**splitted_s;
//
//	if (!s)
//		return (NULL);
//	splitted_s = (char **) malloc(wcounter(s, c) * sizeof (char *));
//	if (!splitted_s)
//		return (NULL);
//	i = 0;
//	while (*s)
//	{
//		if (*s == c)
//			s++;
//		else
//		{
//			s = wordallocer(splitted_s, s, c, i);
//			if (!s)
//			{
//				free (splitted_s);
//				return (NULL);
//			}
//			i++;
//		}
//	}
//	return (splitted_s);
//}

int	main(void)
{
//	char	**ft_tstr = ft_split("##get#this#stringer##stinger###");
	char	**array;
	int	i;
	array = ft_split("##abcde## a#", '#');
	i = 0;
	while (i < 2)
	{
		printf("ft_res: %s\n", array[i]);
		i++;
	}
//	printf("ft_res: %s\n", array[4]);
	free(array);
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