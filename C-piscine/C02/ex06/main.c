/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 19:28:00 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 19:28:57 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main()
{
	int a;	
	char str1[] = "♥";

	a = ft_str_is_printable(str1);
	printf("%d", a);
	return (0);
}
