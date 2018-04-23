/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 00:47:00 by rzarate           #+#    #+#             */
/*   Updated: 2018/04/23 02:00:29 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <strings.h>
# include <stdio.h>
# include <limits.h>

struct s_art {
	char	*name;
	int		price;
};

int	searchPrice(struct s_art **arts, char *name);

#endif