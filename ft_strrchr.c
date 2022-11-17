/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:42:47 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/17 15:38:18 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index_with_null;
	char	*last_loc;

	index_with_null = ft_strlen(s);
	c = (char)c;
	last_loc = NULL;
	while (index_with_null >= 0)
	{
		if (s[index_with_null] == c)
			return ((char *)(&s[index_with_null]));
		index_with_null--;
	}
	return (last_loc);
}
