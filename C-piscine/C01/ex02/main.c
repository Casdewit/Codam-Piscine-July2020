/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 13:07:44 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/16 14:27:00 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main()
{
	int a;
	int b;

	a = 1;
	b = 2;
	
	printf("%d", a); printf("%d", b);
	ft_swap(&a, &b);
	printf("\n");
	printf("%d", a); printf("%d", b);
	return(0);
}
