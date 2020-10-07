/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 16:40:15 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 19:32:29 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		{
			i++;
		}
	}
	return (str);
}
