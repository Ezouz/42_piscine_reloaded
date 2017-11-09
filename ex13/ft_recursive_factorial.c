/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:07:53 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/08 11:36:33 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb >= 1 && nb <= 12)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}
