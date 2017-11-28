/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <vtouffet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:18:31 by vtouffet          #+#    #+#             */
/*   Updated: 2017/11/28 14:18:39 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../includes/core.h"

/*
 ** Add some padding to previous result
*/

int	ft_pad(t_flags flags, int size)
{
	int width;

	if (flags.width <= 0)
		return (size);
	width = 0;
	while (width++ < flags.width - size)
		write(STDOUT, (flags.zero && !flags.minus) ? "0" : " ", 1);
	return (size + width - 1);
}