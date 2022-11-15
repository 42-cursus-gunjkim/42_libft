/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:55:07 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 17:16:14 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	limit;
	int	haystack_len;
	int	needle_len;
	int	i;

	i = 0;
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (haystack);
	if (haystack_len >= len)
		limit = len - needle_len + 1;
	limit = haystack_len - needle_len + 1;
	while (i < limit)
	{
		if (ft_strncmp(haystack[i], needle, needle_len) == 0)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
