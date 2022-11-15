/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:54 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 18:08:57 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				index;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	index = 0;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	if (dst >= src)
	{
		while (index < len)
		{
			dst_tmp[len - index - 1] = src_tmp[len - index - 1];
			index++;
		}
	}
	else
	{
		while (index < len)
		{
			dst_tmp[index] = src_tmp[index];
			index++;
		}
	}
	return (dst);
}

#include <stdio.h>

int main()
{
	int str[10] = {1,2,3,4,5,6,7,8,9};
	ft_memmove(str, str, sizeof(int) * 10);
	for(int i=0;i<10;i++)
	{
		printf("%d : ", str[i]);
	}
}