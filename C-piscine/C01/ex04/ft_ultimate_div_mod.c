/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 16:38:56 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 13:29:17 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int divide;
	int remain;

	divide = *a / *b;
	remain = *a % *b;
	*a = divide;
	*b = remain;
}
