/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inutils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:31 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:32 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*feet;

	if (ft_lstsize(*stack) < 2)
		return (1);
	head = *stack;
	feet = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	feet->next = *stack;
	*stack = feet;
	return (0);
}

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*neck;
	int		temp_x;
	int		temp_y;

	if (ft_lstsize(*stack) < 2)
		return (1);
	head = *stack;
	neck = head->next;
	if (!head && !neck)
		return (1);
	temp_x = head->data;
	temp_y = head->val;
	head->data = neck->data;
	head->val = neck->val;
	neck->data = temp_x;
	neck->val = temp_y;
	return (0);
}

void	sa(t_list **a)
{
	if (!swap(a))
		ft_printf("sa\n");
}

void	sb(t_list **b)
{
	if (!swap(b))
		ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	if (!swap(a) && !swap(b))
		ft_printf("ss\n");
}
