/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:50:23 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/09 13:43:09 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	uc_dest = (unsigned char *) dest;
	uc_src = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*uc_dest++ = *uc_src++;
	}
	else if (dest > src)
	{
		uc_src += n - 1;
		uc_dest += n - 1;
		while (n--)
			*uc_dest-- = *uc_src--;
	}
	return (dest);
}

//int	main(void)
//{	
//	char	*src;
//	char	*dest;
//	char	srcdst[9] = "";
//	src = &srcdst[2];
//	dest = &srcdst[0];
//	printf("src: %s\n\n", src);
//	memmove(dest, src, 4);
//	printf("example after: %s\n\n", src);
//
//	char	srcdst2[9] = "";
//	src = &srcdst2[2];
//	dest = &srcdst2[0];
//	printf("myfunc before: %s\n", src);
//	ft_memmove(dest, src, 4);
//	printf("myfunc after: %s\n", src);
//	return (0);
//}
//