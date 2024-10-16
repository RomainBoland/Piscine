/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:05:18 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:22:57 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

int		ft_strlen(char *str);
void	ft_print_error(void);
int		*char_to_int(char *str);
int		str_is_valid(int argc, char *str);
int		dfs(int **tab, int row, int col, int *norme);
int		occur_col(int **tab, int col, int nb);
int		occur_row(int *tab, int nb);
int		visible_box_col_up(int **tab, int col);
int		visible_box_col_down(int **tab, int col, int real_norme);
int		visible_box_row_left(int *tab);
int		visible_box_row_right(int *tab, int real_norme);
int		**malloc_help(int rows, int cols);
void	put_zero(int **tab);
void	print_tab(int **tab);

#endif
