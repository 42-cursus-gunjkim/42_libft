/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:54 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/10 16:42:11 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				index;
	unsigned char	target;
	unsigned char	target_next;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	index = 0;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	target = src_tmp[index];
	target_next = src_tmp[index + 1];
	while (index < len - 1)
	{
		dst_tmp[index++] = target;
		target = target_next;
		target_next = src_tmp[index + 1];
	}
	dst_tmp[index] = target;
	return (dst);
}

#include <stdio.h>

int main()
{
	int str[10] = {1,2,3,4,5,6,7,8,9};
	ft_memmove(str + 4, str, sizeof(int) * 5);
	for(int i=0;i<10;i++)
	{
		printf("%d : ", str[i]);
	}
}