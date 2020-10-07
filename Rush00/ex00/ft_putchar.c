/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: aagterbe <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:45:55 by aagterbe      #+#    #+#                 */
/*   Updated: 2020/07/12 16:09:17 by aagterbe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int counterx, int countery, int x, int y)
{
	if ((counterx == 0 && countery == 0) ||
		(counterx == x - 1 && countery == y - 1 && x > 1 && y > 1))
		write(1, "/", 1);
	else if ((counterx == 0 && countery == y - 1) ||
			(counterx == x - 1 && countery == 0))
		write(1, "\\", 1);
	else if (countery == 0 || countery == y - 1 ||
			counterx == 0 || counterx == x - 1)
		write(1, "*", 1);
	else
		write(1, " ", 1);
}
