/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyasa <eyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:17:52 by eyasa             #+#    #+#             */
/*   Updated: 2023/12/08 20:31:19 by eyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*int main()
{
	int	i[] = {1,2};
	ft_memset(i, 2, 4);
	ft_memset(i, 185, 3);
	ft_memset(i, 0, 2);
	ft_memset(i, 194, 1);
	printf("%d", i[0]);
}*/
