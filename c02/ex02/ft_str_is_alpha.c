/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:11:26 by mdone             #+#    #+#             */
/*   Updated: 2023/02/14 19:57:03 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)

{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z')
			|| (str[count] >= 'A' && str[count] <= 'Z'))
		{
			++count;
		}
		else
		{
			return (0);
		}	
	}
	return (1);
}
