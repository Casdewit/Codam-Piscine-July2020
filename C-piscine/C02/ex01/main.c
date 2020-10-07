/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 12:36:54 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 12:37:24 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src[] = "Hallo wereld";
	char dest[] = "Doei";
	
	ft_strncpy(dest, src, 10);
	printf("%s", dest);
	return (0);
}