/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 15:20:23 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/21 15:27:06 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char src[] = "Jumbo";
	char dest[] = "Hallo ";

	printf("%s", ft_strncat(dest, src, 3));
	return (0);
}