/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:41:51 by hnewman           #+#    #+#             */
/*   Updated: 2021/05/01 14:27:08 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int ch, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*u;
	unsigned char	stop;

	i = 0;
	t = (unsigned char *)dest;
	u = (unsigned char *)src;
	stop = (unsigned char)ch;
	while (i < n)
	{
		t[i] = u[i];
		if (t[i] == stop)
			return (t + i + 1);
		i++;
	}
	return (0);
}
