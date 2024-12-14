/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:35:56 by avaliull          #+#    #+#             */
/*   Updated: 2024/12/14 13:12:46 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	signed char	sign;
	int			newint;

	sign = 1;
	newint = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (sign * newint);
		newint = newint * 10 + *str - '0';
		str++;
	}
	return (sign * newint);
}
