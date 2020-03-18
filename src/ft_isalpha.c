/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellery- <vellery-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 21:05:53 by vellery-          #+#    #+#             */
/*   Updated: 2020/02/20 12:28:55 by vellery-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}