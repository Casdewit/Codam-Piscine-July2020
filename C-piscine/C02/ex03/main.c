/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 18:08:34 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 18:09:15 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main()
{
	int a;	
	char str1[] = "abc";

	a = ft_str_is_numeric(str1);
	printf("%d", a);
	return (0);
}
