/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:16:33 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 12:36:50 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**parser(char **argv, int argc)
{
	char	**temp_argv;
	char	**temp_argv2;
	int		i;

	i = 0;
	temp_argv = ft_split(argv[i ++], ' ' );
	while(i < argc)
	{
		temp_argv2 = ft_split(argv[i ++], ' ' );
		temp_argv = ft_strjoin(temp_argv, temp_argv2);
	}
	return (temp_argv);
}
