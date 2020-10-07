/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 18:04:45 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 18:05:39 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main()
{
	int a;	
	char str1[] = "";

	a = ft_str_is_alpha(str1);
	printf("%d", a);
	return (0);
}