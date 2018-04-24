/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:14:07 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/24 16:41:10 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define TRUE 1

struct s_stack	*stackInit(void)
{
	struct s_stack *new_stack;
	
	new_stack = calloc(1, sizeof(struct s_stack));
	new_stack->item = NULL;
	return (new_stack);
}

int				pop(struct s_stack *stack)
{
	struct s_item *top;
	top = stack->item;
	stack->item = stack->item->next;
	return (top->idx);
}

void			push(struct s_stack *stack, int	n)
{
	struct s_item *new_item;

	new_item = calloc(1, sizeof(struct s_item));
	new_item->idx = n;
	new_item->next = stack->item;
	stack->item = new_item;
}

char			*console(void)
{
	char			*line;
	char			message[255];
	int				line_len;
	size_t			linecap;
	int				current_len;
	int				old_idx;
	struct s_stack	*stack;

	stack = stackInit();
	current_len = 0;
	linecap = 255;
	while (TRUE)
	{
		write(1, "?: ", 3);
		while ((line_len = getline(&line, &linecap, 0)) != -1)
			;
		if (strcmp(line, "SEND") == 0)
			break ;
		else if (strcmp(line, "UNDO") == 0)
		{
			old_idx= pop(stack);
			while (old_idx < current_len)
			{
				message[old_idx] = '\0';
				old_idx++;
			}
			current_len = stack->item->idx;
			
		}
		else
		{
			push(stack, current_len);
			current_len += line_len;
		}
	}
	return (strdup(message));
}
