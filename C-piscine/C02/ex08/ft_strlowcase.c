/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 17:54:07 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 19:34:18 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		{
			i++;
		}
	}
	return (str);
}
