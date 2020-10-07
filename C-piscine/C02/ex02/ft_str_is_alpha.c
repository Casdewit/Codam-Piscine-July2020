/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 10:58:59 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 18:05:35 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
