/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusso-g <amusso-g@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:04:26 by amusso-g          #+#    #+#             */
/*   Updated: 2022/08/21 12:14:20 by amusso-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long int n)
{
	int	i;

	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			negflag;
	int			len;
	char		*str;

	nb = n;
	negflag = ft_isneg(nb);
	len = ft_countdigits(nb) + negflag;
	str = malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (str);
	if (negflag == 1)
	{
		nb *= -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while ((len) >= (0 + negflag))
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
