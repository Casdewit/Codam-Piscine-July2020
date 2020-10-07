/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 16:38:56 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 13:29:17 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int x;
	int y;
	int *a;
	int *b;

	x = 86;
	y = 10;
	a = &x;
	b = &y;
	
	printf("%d", *a);
	printf("\n");
	printf("%d", *b);
	ft_ultimate_div_mod(a, b);
	printf("\n");
	printf("%d", *a);
	printf("\n");
	printf("%d", *b);
}
