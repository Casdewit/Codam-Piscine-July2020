/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 13:18:29 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/23 13:20:03 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(1234);
	return (0);
}
