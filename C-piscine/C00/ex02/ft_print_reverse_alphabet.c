/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   omgekeerd2.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 17:57:20 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/10 18:01:39 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter = letter - 1;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
