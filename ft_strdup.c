/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:32 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 16:22:02 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int		len_with_null;
	char	*copy;

	len_with_null = ft_strlen(s1) + 1;
	copy = (char *)malloc(sizeof(char) * len_with_null);
	if (copy == NULL)
		return (NULL);
	while (s1)
	{
		*copy = *s1;
		copy++;
		s1++;
	}
	*copy = '\0';
	return (copy);
}
