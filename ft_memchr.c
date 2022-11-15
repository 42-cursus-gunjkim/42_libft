/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:12:32 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 14:21:54 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (temp[i] == c)
			return ((void *)(&temp[i]));
		i++;
	}
	return (NULL);
}
