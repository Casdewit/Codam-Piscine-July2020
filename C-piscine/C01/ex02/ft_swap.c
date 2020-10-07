/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swapfiets.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 13:07:44 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/15 14:40:05 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
