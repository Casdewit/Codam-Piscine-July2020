/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 18:50:22 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/10 19:03:03 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int nummer;

	nummer = '0';
	while (nummer <= '9')
	{
		write(1, &nummer, 1);
		nummer = nummer + 1;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
