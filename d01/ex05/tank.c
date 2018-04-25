/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 21:51:01 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/25 00:10:58 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <unistd.h>

#define CURRENT_STACK tank->stacks[tank->n - 1]

struct s_tank *initTank(void)
{
	struct s_tank	*new_tank;
	
	new_tank = calloc(1, sizeof(struct s_tank));
	new_tank->n = 1;
	new_tank->stacks = calloc(1, sizeof(struct s_stack *));
	new_tank->stacks[0] = calloc(1, sizeof(struct s_stack));
	new_tank->stacks[0]->elem = NULL;
	new_tank->stacks[0]->sum = 0;
	return (new_tank);
}

void tankPush(struct s_tank *tank, int energy)
{
	struct s_elem *new_elem;

	new_elem = calloc(1, sizeof(struct s_elem));
	new_elem->energy = energy;
	if (CURRENT_STACK->elem == NULL)
	{
		new_elem->next = NULL;
		CURRENT_STACK->elem = new_elem;
		CURRENT_STACK->sum = energy;
	}
	else
	{
		write(1, "TEST1\n", 6);
		if (CURRENT_STACK->sum + energy <= 1000)
		{
			write(1, "TEST2\n", 6);
			CURRENT_STACK->sum += energy;
			new_elem->next = CURRENT_STACK->elem;
			CURRENT_STACK->elem = new_elem;
		}
		else
		{
			tank = realloc(tank, tank->n + 1);
			tank->n += 1;
			CURRENT_STACK = calloc(1, sizeof(struct s_stack));
			CURRENT_STACK->sum += energy;
			new_elem->next = CURRENT_STACK->elem;
			CURRENT_STACK->elem = new_elem;
		}
	}
}

int tankPop(struct s_tank *tank)
{
	int				energy_removed;
	struct s_elem	*tmp;

	tmp = CURRENT_STACK->elem;
	energy_removed = CURRENT_STACK->elem->energy;
	CURRENT_STACK->elem = CURRENT_STACK->elem->next;
	free(tmp);
	return (energy_removed);
}
