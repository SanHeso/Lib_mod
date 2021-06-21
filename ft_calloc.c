/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:25:27 by hnewman           #+#    #+#             */
/*   Updated: 2021/05/01 14:21:03 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (char *)malloc(n * size);
	if (!arr)
		return (0);
	ft_bzero(arr, n * size);
	i++;
	return (arr);
}
