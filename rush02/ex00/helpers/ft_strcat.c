/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:34:07 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/04 15:00:59 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		dest_i;
	int		src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i])
	{
		dest_i++;
	}
	while (src[src_i])
	{
		dest[dest_i++] = src[src_i++];
	}
	dest[dest_i] = '\0';
	return (dest);
}
