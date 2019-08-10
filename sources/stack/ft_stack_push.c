/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 03:21:42 by olesgedz          #+#    #+#             */
/*   Updated: 2019/04/23 03:21:57 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_stack_push(t_stack *stack, void *content,  size_t content_size)
{
	ft_lstadd(&stack->top, ft_lstnew(content, content_size));
    stack->size += 1;
}