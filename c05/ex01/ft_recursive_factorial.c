/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:38:08 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/09 18:11:58 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	total = nb;
	if (nb > 1)
		total *= ft_recursive_factorial(nb - 1);
	return (total);
}
