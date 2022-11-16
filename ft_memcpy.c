/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:39:42 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/16 16:40:39 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_temp;
	unsigned char	*dst_temp;
	size_t			index;

	if (dst == NULL && src == NULL)
		return (NULL);
	index = 0;
	src_temp = (unsigned char *)src;
	dst_temp = (unsigned char *)dst;
	while (index < n)
	{
		dst_temp[index] = src_temp[index];
		index++;
	}
	return (dst);
}
