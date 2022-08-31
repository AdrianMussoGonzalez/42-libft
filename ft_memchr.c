/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusso-g <amusso-g@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:24:25 by amusso-g          #+#    #+#             */
/*   Updated: 2022/07/18 14:38:29 by amusso-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	to_find;
	size_t	counter;

	counter = 0;
	str = (char *)s;
	to_find = (char)c;
	while (counter < n)
	{
		if (str[counter] == to_find)
			return (&str[counter]);
		counter++;
	}
	return (NULL);
}
