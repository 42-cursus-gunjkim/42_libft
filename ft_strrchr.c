/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:42:47 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 14:09:13 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_with_null;
	int		i;
	char	*last_loc;

	len_with_null = ft_strlen(s) + 1;
	i = 0;
	last_loc = NULL;
	while (i < len_with_null)
	{
		if (*s == c)
			last_loc = s;
		s++;
		i++;
	}
	return (last_loc);
}
