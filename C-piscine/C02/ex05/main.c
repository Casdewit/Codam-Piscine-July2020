/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 18:12:28 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 18:13:01 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	int a;	
	char str1[] = "";

	a = ft_str_is_uppercase(str1);
	printf("%d", a);
	return (0);
}
