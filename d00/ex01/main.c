/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 02:13:44 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/23 02:34:24 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	struct s_art	**works_of_art;

	works_of_art = (struct s_art **)malloc(sizeof(struct s_art *) * 3);
	bzero(&works_of_art, 0);

	/* Small test

	works_of_art[0] = (struct s_art *)malloc(sizeof(struct s_art));
	works_of_art[0]->name = "test";
	works_of_art[0]->price = 10;
	works_of_art[1] = (struct s_art *)malloc(sizeof(struct s_art));
	works_of_art[1]->name = "test1";
	works_of_art[1]->price = 11;
	works_of_art[2] = NULL;

	*/

	return (0);
}