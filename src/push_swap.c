/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:42 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:43 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	int		i;

	while (ordinator(*stack_a, *stack_b) != 1)
	{
		i = ft_lstsize(*stack_a);
		while (i)
		{
			if (((*stack_a)->val & 1) == 1)
			{
				rapb(stack_a);
				i--;
			}
			else
			{
				(*stack_a)->val = (*stack_a)->val >> 1;
				pb(stack_a, stack_b);
				i--;
			}
		}
		if ((*stack_b) != NULL)
		{
			while (*stack_b)
				pa(stack_a, stack_b);
		}
	}
}

int	ordinator(t_list *stack_a, t_list *stack_b)
{
	(void)stack_b;
	while (stack_a->next)
	{
		if (stack_a->data < stack_a->next->data)
		{
			stack_a = stack_a->next;
			if (stack_a->next == NULL)
				break ;
		}
		else
			return (0);
	}
	return (1);
}

void	addtop(t_list **start, int data, int val)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->val = val;
	head->next = *start;
	*start = head;
}

void	ordinacose(int i, int k, int *c)
{
	int		temp;

	while (k--)
	{
		while (i < k)
		{
			if (c[i] > c[i +1])
			{
				temp = c[i];
				c[i] = c[i + 1];
				c[i + 1] = temp;
			}
			i++;
		}
		i = 0;
	}
}

int	main(int ac, char **av)
{
	char	**argo;
	int		i;

	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		argo = ft_split(av[1], ' ');
		ac = 0;
		while (argo[ac])
			ac++;
		ft_aggiungi(argo, ac);
		i = 0;
		while (argo[i])
			free (argo[i++]);
		free (argo);
	}
	else
	{
		argo = av + 1;
		ac--;
		ft_aggiungi(argo, ac);
	}
}
