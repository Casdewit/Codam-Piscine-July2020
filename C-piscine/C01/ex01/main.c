/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 08:58:48 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/16 14:23:25 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main()
{
	int		x;
	int		*a;
	int		**b;
	int		***c;
	int		****d;
	int		*****e;
	int		******f;
	int		*******g;
	int		********h;
	int		*********i;

	x	= 5;
	a	= &x;
	b	= &a;
	c	= &b;
	d	= &c;
	e	= &d;
	f	= &e;
	g	= &f;
	h	= &g;
	i	= &h;

	printf("%d", x);
	ft_ultimate_ft(i);
	printf("%d", *********i);
	printf("%d", x);
	return (0);
}
