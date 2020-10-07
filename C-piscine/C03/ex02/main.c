/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 14:24:53 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/21 14:25:38 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[] = "Jumbo";
	char dest[] = "Hallo ";

	printf("%s", ft_strcat(dest, src));
	return (0);
}