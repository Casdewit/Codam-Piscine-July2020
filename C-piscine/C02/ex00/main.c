/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/18 17:07:55 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 17:59:52 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "Hallo wereld";
	char dest[] = "Doei world";
	printf("%s", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}