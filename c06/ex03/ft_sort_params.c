/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:54:44 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/10 18:45:36 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if ((s1[i] - s2[i]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i])
		return (0 - s2[i]);
	return (0);
}

void	swap_arrs(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	**sort_strs(char **strs)
{
	int	strs_sorted;
	int	i;
	int	alphabetical;

	strs_sorted = 0;
	if (!strs[0] || (strs[0] && !strs[1]))
		return (strs);
	while (!strs_sorted)
	{
		i = 1;
		alphabetical = 1;
		while (strs[i])
		{
			if (ft_strcmp(strs[i - 1], strs[i]) > 0)
			{
				swap_arrs(&strs[i - 1], &strs[i]);
				alphabetical = 0;
			}
			i++;
		}
		if (alphabetical)
			strs_sorted = 1;
	}
	return (strs);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	**sorted_params;
	int		param_i;

	if (argc < 2)
		return (1);
	sorted_params = sort_strs(&argv[1]);
	param_i = 0;
	while (sorted_params[param_i])
	{
		write(1, sorted_params[param_i], ft_strlen(sorted_params[param_i]));
		write(1, "\n", 1);
		param_i++;
	}
	return (0);
}
