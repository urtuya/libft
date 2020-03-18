/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellery- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 08:49:54 by vellery-          #+#    #+#             */
/*   Updated: 2020/02/14 08:49:55 by vellery-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int		get_stream(FILE *stream)
{
	if (stream == stderr)
		return (2);
	else if (stream == stdout)
		return (1);
	else
		return (0);
}

int				ft_fprintf(FILE *stream, const char *format, ...)
{
	int		ret;
	va_list	args;

	ret = 0;
	va_start(args, format);
	ret = ft_printf_(args, format, get_stream(stream));
	va_end(args);
	return (ret);
}
