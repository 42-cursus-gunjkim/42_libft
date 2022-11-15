/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:18:48 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/15 19:55:17 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	pre_suf_set(char const *s1, char const *set)
{
	char const	*temp;
	int			len;

	temp = s1;
	len = 0;
	while (is_set(*temp, set) && *temp)
	{
		len++;
		temp++;
	}
	temp = s1 + ft_strlen(s1) - 1;
	while (is_set(*temp, set) && *temp)
	{
		len++;
		temp--;
	}
	if (len > ft_strlen(s1))
		return (ft_strlen(s1));
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		total_len;
	char	*str_trim;
	int		index;

	index = 0;
	total_len = ft_strlen(s1) - pre_suf_set(s1, set);
	str_trim = (char *)malloc(sizeof(char) * (total_len + 1));
	if (total_len == 0)
	{
		*str_trim = '\0';
		return (str_trim);
	}
	while (is_set(*s1, set))
		s1++;
	while (index < total_len)
	{
		str_trim[index] = *s1;
		index++;
		s1++;
	}
	str_trim[index] = '\0';
	return (str_trim);
}
