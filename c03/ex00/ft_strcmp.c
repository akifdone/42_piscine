/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:16:33 by mdone             #+#    #+#             */
/*   Updated: 2023/02/12 02:16:34 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (!(s1[count] == s2[count]))
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
