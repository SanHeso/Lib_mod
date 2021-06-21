/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 21:52:49 by hnewman           #+#    #+#             */
/*   Updated: 2021/05/01 19:16:31 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!buf)
		return (0);
	while (src[i])
	{
		buf[i] = src[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
