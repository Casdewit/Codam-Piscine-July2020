/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 15:17:11 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/23 18:37:44 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		skipspace_mincount(char *str, int *res);

int		ft_atoi(char *str);

int		main(void)
{
	printf("ft_atoi: %d", ft_atoi("  ---+123456"));
	return (0);
}
