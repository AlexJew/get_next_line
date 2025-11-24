/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajewell <ajewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:20:26 by ajewell           #+#    #+#             */
/*   Updated: 2025/11/24 17:25:39 by ajewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen((char *)s1);
	len_2 = ft_strlen((char *)s2);
	ret = malloc(len_1 + len_2 + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len_1);
	ft_memcpy(ret + len_1, s2, len_2);
	ret[len_1 + len_2] = 0;
	return (ret);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

size_t	ft_strrchr_adapted(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i-- > 0)
	{
		if (s[i] == (char)c)
			return (i);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	copylen;
	char	*ret;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (slen <= start)
		copylen = 0;
	else if (slen - start < len)
		copylen = slen - start;
	else
		copylen = len;
	ret = malloc(copylen + 1);
	if (!ret)
		return (NULL);
	if (copylen > 0)
		ft_memcpy(ret, s + start, copylen);
	ret[copylen] = 0;
	return (ret);
}


int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
