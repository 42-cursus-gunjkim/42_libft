/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:20:02 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/16 15:40:37 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)b;
	c = (unsigned char)c;
	while (index < len)
	{
		temp[index] = c;
		index++;
	}
	return ((void *)temp);
}
