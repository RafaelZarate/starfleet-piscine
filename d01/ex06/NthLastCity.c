/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NthLastCity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 00:13:37 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/25 00:56:19 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*NthLastCity(struct s_city *city, int n)
{
	int				i;
	struct s_city	*ahead;
	struct s_city	*behind;

	ahead = city;
	behind = city;
	i = 0;
	while (ahead)
	{
		if (i > n)
			behind = behind->next;
		i++;
		ahead = ahead->next;
	}
	return (behind->name);
}
