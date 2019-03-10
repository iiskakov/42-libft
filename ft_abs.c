/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiskakov <iiskakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 16:04:25 by iiskakov          #+#    #+#             */
/*   Updated: 2019/03/09 17:48:40 by iiskakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_abs(long long nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int main(void)
{
	long long nb;

	nb = -10;
	printf("%zu\n", ft_abs(nb));
	return (0);
}