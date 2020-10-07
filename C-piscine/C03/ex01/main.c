/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 10:40:15 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/22 14:40:17 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str1[] = "haplo";
	char str2[] = "hallo";
	int res = ft_strncmp(str1, str2, 3);
	printf("%d", res);
	printf("\n");
	char str3[] = "haplo";
	char str4[] = "hallo";
	int res2 = strncmp(str3, str4, 3);
	printf("%d", res2);
}