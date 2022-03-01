/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:34:41 by oventura          #+#    #+#             */
/*   Updated: 2021/05/27 21:02:37 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The atoi() function converts the initial portion of the string pointed to
	by str to int representation.

	It is equivalent to:

	(int)strtol(str, (char **)NULL, 10);

	While the atoi() function uses the current locale, the atoi_l() function
	may be passed a locale directly. See xlocale(3) for more information.
*/

int	ft_atoi(const char *str)
{
	long long	num;
	int			sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit((int)*str))
	{
		num = num * 10 + *str++ - '0';
		if ((num * sign) > INT_MAX)
			return (-1);
		if ((num * sign) < INT_MIN)
			return (0);
	}
	return (sign * num);
}
