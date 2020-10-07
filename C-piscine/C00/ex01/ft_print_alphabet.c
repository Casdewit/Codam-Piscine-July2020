/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nieuwe.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 18:06:30 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/10 19:06:42 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a = a + 1;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
