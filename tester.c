/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/19 17:45:00 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 
// use =lbsd when compiling
//#include "libft.h"
//#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	delstr(void *strtodel)
{
	ft_bzero((char *) strtodel, ft_strlen(strtodel));
}

int	main(void)
{
	t_list	*tstlist;
	t_list	**first_el;
	t_list	*newel;
	char	*content_test = "first";

	tstlist = ft_lstnew((void *) content_test);
	first_el = &tstlist;
	printf("Element #0: %s\n", (char *) tstlist->content);
	printf("number of elements in list = %d\n\n", ft_lstsize(*first_el));
	newel = ft_lstnew((void *) "no me");
	ft_lstadd_front(first_el, newel);
	printf("new Element #0: %s\n", (char *) (*first_el)->content);
	printf("new Element #1: %s\n", (char *) ((*first_el)->next)->content);

	printf("last element: %s\n", (char *) ft_lstlast(*first_el)->content);	
	ft_lstdelone(ft_lstlast(*first_el), delstr);
	(*first_el)->next = NULL;
	printf("last element: %s\n", (char *) (*first_el)->content);
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
//	char *src = "efgh";
//	char dst[9] = "abcd";
//	printf("Example_src: %s\n", src);
//	printf("Example_Return: %zu\n", strlcat(dst, src, 9));
//	printf("Example_Res: %s\n", dst);
//	char dst2[9] = "abcd";
//	printf("ft_return: %zu\n", ft_strlcat(dst2, src, 9));
//	printf("ft_res: %s\n", dst2);
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

// FOR TESTING STRCHR/STRRCHR
//	char	*test;
//	char	*ptrtest;
//
//	test = "teste";
//	ptrtest = test + 5;
//	if (ptrtest == ft_strrchr(test, 1024))
//		printf("same adress");
//	else
//		printf("distance: %ld\n", test - ptrtest);

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

// FOR TESTING MEMCPY
//	char src[7] = "tenate";
//	char dst[9] = "00000000";
//	char dst2[9] = "00000000";
//	printf("Example_src: %s\n", src);
//	memcpy(dst, src, 6);
//	ft_memcpy(dst2, src, 6);
//	printf("Example_Return: %s\n", dst);
//	printf("my_Return: %s\n", dst2);


// FOR TRESTING STRMAPI
//static char	test(unsigned int i, char *c)
//{
//	return (*c + i);
//}

//char	*resstr;
//char	*src = "00000";
//resstr = ft_strmapi(src, test);
//printf("src: %s\n", src);
//printf("Res: %s\n", resstr);
//free(resstr);
//return (0);

// FOR TESTING STRITERI

//static void	test(unsigned int i, char *c)
//{
//	*c = i + 48;
//}
//
//	char	src[6] = "00000";
//	printf("Before: %s\n", src);
//	ft_striteri(NULL, test);
//	printf("After: %s\n", src);

//	FOR TESTING PUTCHaR
//	int fd = open("test.txt", O_RDWR | O_CREAT);
//	ft_putchar_fd('a', fd);
//	close(fd);
//	return (0);

//	FOR TESTING PUTNMBR
//	int fd = open("test.out", O_RDWR | O_CREAT);
//	ft_putnbr_fd(32818, fd);
//	close(fd);
//	return (0);


//	FOR TESTING STRNSTR

//	printf("myres: %s\n", ft_strnstr("cats bring bugs home", "catss", 26));


//FOR TESTING NEWLST
//	t_list	*tstlist;
//	int	i = 3;
//	tstlist = ft_lstnew("lalala");
//	printf("new element: %s", (char *) tstlist->content);
//	printf("new element: %s", (char *) tstlist->next);

// FOR TESTING ADDFRONTLST
//	t_list	*tstlist;
//	t_list	**first_el;
//	t_list	*newel;
//	char	*content_test = "first";
//	tstlist = ft_lstnew((void *) content_test);
//	first_el = &tstlist;
//	printf("Element #0: %s\n", (char *) tstlist->content);
//	newel = ft_lstnew((void *) "no me");
//	ft_lstadd_front(first_el, newel);
//	printf("new Element #0: %s\n", (char *) (*first_el)->content);
//	printf("new Element #1: %s\n", (char *) ((*first_el)->next)->content);
	
//FOR TESTING LSTSIZE	
//	t_list	*tstlist;
//	t_list	**first_el;
//	t_list	*newel;
//	t_list	*tstNULL = NULL;
//	char	*content_test = "first";
//
//	tstlist = ft_lstnew((void *) content_test);
//	first_el = &tstlist;
//	printf("Element #0: %s\n", (char *) tstlist->content);
//	printf("number of elements in list = %d\n\n", ft_lstsize(*first_el));
//	newel = ft_lstnew((void *) "no me");
//	ft_lstadd_front(first_el, newel);
//	printf("new Element #0: %s\n", (char *) (*first_el)->content);
//	printf("new Element #1: %s\n", (char *) ((*first_el)->next)->content);
//	printf("number of elements in list should be 2 = %d\n\n", ft_lstsize(*first_el));
//	ft_lstadd_front(first_el, newel);
//	ft_lstadd_front(first_el, newel);
//	ft_lstadd_front(first_el, newel);
//	printf("number of elements in list should be 5 = %d\n\n", ft_lstsize(*first_el));
//	printf("number of elements when lst is NULL = %d\n\n", ft_lstsize(tstNULL));

// FOR TESTING LASTEL
//	t_list	*tstlist;
//	t_list	**first_el;
//	t_list	*newel;
//	char	*content_test = "first";
//
//	tstlist = ft_lstnew((void *) content_test);
//	first_el = &tstlist;
//	printf("Element #0: %s\n", (char *) tstlist->content);
//	printf("number of elements in list = %d\n\n", ft_lstsize(*first_el));
//	newel = ft_lstnew((void *) "no me");
//	ft_lstadd_front(first_el, newel);
//	printf("new Element #0: %s\n", (char *) (*first_el)->content);
//	printf("new Element #1: %s\n", (char *) ((*first_el)->next)->content);
//	printf("last element: %s\n", (char *) ft_lstlast(*first_el)->content);