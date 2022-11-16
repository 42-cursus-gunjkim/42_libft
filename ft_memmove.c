/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:54 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/16 16:47:38 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*dst_tmp;

	if (dst == NULL && src == NULL)
		return (NULL);
	index = 0;
	dst_tmp = (unsigned char *)dst;
	if (dst >= src)
	{
		while (index < len)
		{
			dst_tmp[len - index - 1] = ((unsigned char *)src)[len - index - 1];
			index++;
		}
	}
	else
	{
		while (index < len)
		{
			dst_tmp[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dst);
}
