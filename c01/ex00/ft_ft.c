/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:23:02 by mdone             #+#    #+#             */
/*   Updated: 2023/02/10 10:55:25 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main ()
{
	int sayi;
	int *nbr = &sayi;

 	ft_ft(&sayi);
	printf("%d",sayi);
}