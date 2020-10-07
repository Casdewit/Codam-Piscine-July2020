/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 19:33:41 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 19:34:20 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char str1[] = "HALLO1hallo";

	printf("%s", ft_strlowcase(str1));
	return (0);
}
