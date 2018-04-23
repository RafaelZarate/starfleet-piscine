/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortArts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 02:14:29 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/23 03:12:23 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	void	swapArts(struct s_art **a, struct s_art **b)
{
	struct s_art *tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sortArts(struct s_art **arts)
{
	struct s_art	**output;

	output = (struct s_art **)malloc(sizeof(arts));

}