/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 07:08:11 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 13:04:12 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static size_t	ft_strlen_n(char *s)
{
	size_t	i;

	i = 0;
	if (!s || !*s)
		return (0);
	while (*s ++)
		i ++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*ptr;
	int		i;

	if (!*s || !s)
		return (NULL);
	i = ft_strlen_n(s);
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, (i));
	*(ptr + i) = '\0';
	return (ptr);
}
