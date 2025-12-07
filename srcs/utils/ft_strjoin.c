/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 08:20:00 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 16:38:14 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	free_m(char **argv)
{
	int	i;

	i = 0;
	if (!argv || !*argv)
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}

char	**ft_strjoin(char **s1, char **s2)
{
	char	**str;
	size_t	size;
	int		i;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char **) malloc(sizeof(char *) * (size + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = ft_strdup(s1[i]);
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		str[i] = ft_strdup(s2[i - ft_strlen(s1)]);
		i++;
	}
	str[i] = NULL;
	free_m((s1));
	free_m((s2));
	return (str);
}
