/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 14:40:51 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/16 15:24:54 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a;
	int b;
	int result;
	int remain;
	int *mod;
	int *div;

	a = 86;
	b = 10;
	div = &result;
	mod = &remain;
	
	ft_div_mod(a, b, div, mod);
	
	printf("%d", *div); printf("\n");
	printf("%d", *mod); 
	return (0);
}
