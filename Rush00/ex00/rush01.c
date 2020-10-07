/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: aagterbe <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:45:55 by aagterbe      #+#    #+#                 */
/*   Updated: 2020/07/12 16:32:36 by aagterbe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int counterx, int countery, int x, int y);

void	rush(int x, int y)
{
	int counterx;
	int countery;

	countery = 0;
	while (countery < y)
	{
		counterx = 0;
		while (counterx < x)
		{
			ft_putchar(counterx, countery, x, y);
			counterx++;
		}
		write(1, "\n", 1);
		countery++;
	}
}
