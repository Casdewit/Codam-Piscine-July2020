/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 18:10:21 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 18:10:55 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	int a;	
	char str1[] = "asdf";

	a = ft_str_is_lowercase(str1);
	printf("%d", a);
	return (0);
}
