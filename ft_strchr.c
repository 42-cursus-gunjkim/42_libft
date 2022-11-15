/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:34:58 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 14:09:08 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len_with_null;
	int	i;

	len_with_null = ft_strlen(s) + 1;
	i = 0;
	c = (char)c;
	while (i < len_with_null)
	{
		if (*s == c)
			return (s);
		s++;
		i++;
	}
	return (NULL);
}
