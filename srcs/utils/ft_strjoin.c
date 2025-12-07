/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 08:20:00 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 13:13:06 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**ft_strjoin(char **s1, char **s2)
{
	char	**str;
	size_t	size;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	size = i + j;
	str = (char **) malloc(sizeof(char *) * (size + 1));
	if (!str)
		return (NULL);
	while (*s1)
	{
		*str = ft_strdup(*s1);
		str ++;
		s1 ++;
	}
	while (*s2)
	{
		*str = ft_strdup(*s2);
		str ++;
		s2 ++;
	}
	*str = NULL;
	free_matrix((s1 - i + 1));
	free_matrix((s2 - j + 1));
	return (str - size);
}
