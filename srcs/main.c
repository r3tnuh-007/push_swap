/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:16:33 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 15:29:18 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**temp_argv;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	temp_argv = parser(argv, argc);
//	for(size_t i = 0; i < ft_strlen(argv); i++)
//		printf("argv[%zu]: %s\n", i, argv[i]);
	stack_init(&a, temp_argv + 1, true);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			tiny_sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
	return (0);
}
