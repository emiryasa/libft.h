/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyasa <eyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:17:46 by eyasa             #+#    #+#             */
/*   Updated: 2023/12/02 16:04:00 by eyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t totalsize)
{
	size_t	s;
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	s = 0;
	srclen = ft_strlen(src);
	if (!dest && totalsize == 0)
		return (srclen);
	i = ft_strlen(dest);
	destlen = i;
	if (totalsize <= destlen)
		return (totalsize + srclen);
	while (src[s] && i < totalsize - 1)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = 0;
	return (destlen + srclen);
}
