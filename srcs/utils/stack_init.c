/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <aluis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:11:30 by aluis             #+#    #+#             */
/*   Updated: 2025/12/07 20:17:47 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
 *  atol, i need it to check eventual overflows
 *  converting every string into a long value
*/
static long	ft_atol(const char *str)
{
	long	num;
	int		isneg;
	int		i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
}

/*
 * Create the stack with the command line values
 * Checks are embedded in the creation itslef
 * 		~Duplicate values
 * 		~Over|Underflow
 * 		~Syntax errors
 *
 * 	🏁 Flag is useful cause if true, i have the argv in the HEAP to free
 *
*/
void	stack_init(t_stack_node **a, char **argv, bool flag_argc_2)
{
	long	nbr;
	char	**splited;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		splited = ft_split(argv[i], ' ');
		j = 0;
		while (splited[j] != NULL)
		{
			if (error_syntax(splited[j]))
				error_free(a, splited, flag_argc_2);
			nbr = ft_atol(splited[j]);
			if (nbr > INT_MAX || nbr < INT_MIN)
				error_free(a, splited, flag_argc_2);
			if (error_repetition(*a, (int)nbr))
				error_free(a, splited, flag_argc_2);
			append_node(a, (int)nbr);
			j++;
		}
		i++;
		free_matrix(splited);
	}
}
