/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:29:43 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/10 14:32:08 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)s;
	while (index < n)
	{
		temp[index] = 0;
		index++;
	}
}
