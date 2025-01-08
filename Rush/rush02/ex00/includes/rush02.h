/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:56:49 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

extern char	*g_buffer;

char		*create_group(char a, char b, char c);
void		print_group(char *group);
void		print_group_end(char *group, char *temp);

void		convert_number(char *str);
char		*print_first_group(char *nb, int n, char *group, char *temp);
void		manage_group(char *nb, int i, int initial_n, char *group);
int			ft_strncmp(char *s1, char *s2, unsigned int n);

int			check_all_keys(char *dict);
int			check_adjacent(char *ptr, char *to_find);
int			check_keys_1(char *dict);
int			check_keys_2(char *dict);
int			check_keys_3(char *dict);

int			check_keys_4(char *dict);
int			check_keys_5(char *dict);

int			ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_rev_tab(char *tab, int size);
char		*ft_strpower(int nb);
int			ft_strcmp(char *s1, char *s2);

int			is_space(char c);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strncpy(char *dest, char *src, int n);
char		*get_value(char *key_to_find);
char		*find_value(char *key_to_find);

int			end_check(char **argv, char *dictionary);

char		*check_nbr(char *str);
int			check_dict(char *str);
int			check_dict2(int i, int fd, int bytes_read);
int			check_dict_body(int i);

#endif
