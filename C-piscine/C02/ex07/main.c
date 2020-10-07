/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 19:31:55 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 19:32:31 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
	char str1[] = "HALLO1hallo";

	printf("%s", ft_strupcase(str1));
	return (0);
}