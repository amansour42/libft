/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:52:09 by amansour          #+#    #+#             */
/*   Updated: 2019/08/19 15:25:56 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		belong(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		++i;
	if (str[i] == c)
		return (1);
	return (0);
}
