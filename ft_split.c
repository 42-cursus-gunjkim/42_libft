/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:07:09 by gunjkim           #+#    #+#             */
/*   Updated: 2022/11/16 10:46:21 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int	flag;
	int	wc;

	wc = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag == 1)
		{
			wc++;
			flag = 0;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (wc);
}

static int	ft_strlen_c(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		wl;
	int		index;
	char	**result;

	index = 0;
	wc = w_count(s, c);
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (result == NULL)
		return (NULL);
	while (index < wc)
	{
		while (*s == c)
			s++;
		wl = ft_strlen_c(s, c);
		result[index] = (char *)malloc(sizeof(char) * (wl + 1));
		ft_strlcpy(result[index], s, wl + 1);
		s = s + wl;
		index++;
	}
	result[index] = NULL;
	return (result);
}
