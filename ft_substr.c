/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:32:24 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 18:48:28 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		real_len;
	char	*substr;
	int		index;

	index = 0;
	real_len = len;
	if (ft_strlen(s + start) < len)
		real_len = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * real_len + 1);
	if (substr == NULL)
		return (NULL);
	while (index < real_len)
	{
		substr[index] = s[start + index];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
