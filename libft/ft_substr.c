/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:46:02 by jwolfram          #+#    #+#             */
/*   Updated: 2024/04/10 19:08:42 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	sub = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen || !len)
	{
		sub = (char *)malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (*s && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
