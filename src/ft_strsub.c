/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:18:33 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:18:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	strsub = (char *)malloc(sizeof(char) * len + 1);
	if (!strsub)
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i += 1;
	}
	strsub[i] = '\0';
	return (strsub);
}
