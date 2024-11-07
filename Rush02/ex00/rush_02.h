/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:49:36 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/06 21:28:03 by lantona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H

# define RUSH_02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

//main
//char	*ft_strjoin(char *src, char *dest);
//void	add_suffix(int group, t_list *lst, t_list *lst);
//void	print_dict(t_list *lst, char *str);
int	ft_is_input_valid(char *filename, char *number, int ac, char **av);
void	launch(char *ret, char **tmp, t_list *lst);

//split
int	ft_line_count(char *str, char sep);
int	ft_size_word(char *str, int index, char sep);
char	**ft_allocate(char *str, char **dest, char sep);
char	**ft_split(char *str, char sep);

//parse
char	*ft_read(char *filename);
void    *parse(char *ret, char *filename);
char	*ft_get_number(char *str);

//utils
int	check_position(char *valeur);
int	check_group(char *valeur);
//t_list	*create_lst(void);
//void	find_particular(char *nb, int i, t_list *lst);
//t_list	*lst_find(char *nb, int i, int position, int group, t_list *lst);
//t_list	*lst_new(char *str, char *number);
//void	lst_add_back(t_list **lst, t_list *new);

//srcs
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
void    ft_putstr(char *str);

typedef struct	s_list
{
	char	*number; //
	char	*valeur; // seven
	int		position; //
	int		group;
	struct s_list *next;
}				t_list;

void    add_suffix(int group, int position, t_list *lst);
void    print_dict(t_list *lst, char *str);
t_list	*create_lst(void);
t_list	*lst_new(char *str, char *number);
void	lst_add_back(t_list **lst, t_list *new);
void    find_particular(char *nb, int i, t_list *lst);
t_list  *lst_find(char nb, int position, int group, t_list *lst);
t_list  *lst_new(char *str, char *number);
void    lst_add_back(t_list **lst, t_list *new);
t_list  *create_lst(void);

#endif
