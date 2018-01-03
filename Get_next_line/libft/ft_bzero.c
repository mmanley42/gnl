/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:06:14 by mmanley           #+#    #+#             */
/*   Updated: 2018/01/03 16:06:58 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*src;
	size_t	i;

	src = s;
	i = 0;
	if (src)
	{
		while (i < n)
		{
			src[i] = 0;
			i++;
		}
	}
}
