/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:46 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:48 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

t_list	*rotate(t_list *stack);
int		total_check(int ac, char **av);
int		checkequals(int i, int j, char **argo);
int		checkdigits(int i, char **argo);
int		maxnum(int i, char **argo);
int		checksign(int i, char **argo);
int		acceptdigit(int i, int j, char **argo);
int		swap(t_list **stack);
int		push(t_list **stack1, t_list **stack2);
int		reverse_rotate(t_list **stack);
int		ordinator(t_list *stack_a, t_list *stack_b);
int		checktrecinque(t_list **a, t_list **sb, int k);
int		stackorder(t_list *stack_a, t_list *stack_b);
int		smallorder(t_list **a, int k);
long	ft_atol(const char *str);
void	ra(t_list **a);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	binary_search_and_replace(int *c, int min, int max, t_list **stack_a);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	pusher(t_list **stack_src, t_list **stack_dest);
void	addtop(t_list **start, int data, int val);
void	ordinacose(int i, int k, int *c);
void	ft_free_stack(t_list *a);
void	stack(t_list *a, t_list *b);
void	rapb(t_list **stack_a);
void	ft_aggiungi(char **argo, int ac);
void	ft_maxfive(t_list **a, t_list **b);
void	sa(t_list **a);
void	ft_maxtre(t_list	**a);
void	rra(t_list **a);
void	rb(t_list **b);
void	sb(t_list **b);
void	ft_maxfour(t_list **a, t_list **b);
void	tempnext(int k, t_list *temp, t_list **stack_a, int *c);

#endif
