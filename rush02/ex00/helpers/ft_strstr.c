/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:31:14 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/13 16:31:18 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_is_matching(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i])
	{	
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		match;

	if (!to_find[0])
		return (str);
	i = 0;
	match = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
			match = str_is_matching(&str[i], to_find);
		if (match)
			return (&str[i]);
		i++;
	}
	return (0);
}

