/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 19:31:57 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/27 12:43:49 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
