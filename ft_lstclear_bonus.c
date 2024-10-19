/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:36:35 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/19 19:02:01 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextel;
	
	while(*lst != NULL)
	{
		nextel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextel;
	}
	*lst = NULL;
}
