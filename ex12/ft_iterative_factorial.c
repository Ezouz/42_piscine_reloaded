/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:22:26 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/08 11:35:14 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb >= 1 && nb <= 12)
	{
		while (nb > 1)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}
