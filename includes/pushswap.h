/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 17:51:11 by mrachid           #+#    #+#             */
/*   Updated: 2014/05/16 17:39:31 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	int				nb;
	int				i;
	struct s_list	*next;
}					t_list;

void				ft_fill(t_list **l, int nb);
t_list				*ft_fill_one(t_list **l, int nb);
void				ft_hearts(t_list *la, t_list *lb, int v);
int					ft_is_order(t_list *l);
int					ft_minimal(int bkp, t_list *l);
t_list				*ft_pb(t_list *la, t_list **lb);
t_list				*ft_pa(t_list *lb, t_list **la, int v);
void				*ft_ra(t_list *la);
int					ft_strlen(char *s);
char				*ft_strdup(char *str);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putnbr(int n);
void				ft_putchar(char c);
#endif
