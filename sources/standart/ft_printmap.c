/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 18:53:17 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/29 18:54:30 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printmap(char **map)
{
	while (*map != NULL)
	{
		ft_putstr(*map++);
		ft_putchar('\n');
	}
}
