#ifndef SKYSCRAPPER_PUZZLE_H
# define SKYSCRAPPER_PUZZLE_H

int		validate_entry(char *str, int *views);

int		validate_column(int *m);
int		validate_view_bottom_column(int *m, int *view, int posView, int posM);
int		validate_view_top_column(int *m, int *view, int posView, int posM);
int		validate_view_left_row(int *m, int *view, int posView, int posM);
int		validate_view_right_row(int *m, int *view, int posView, int posM);

int		validate_view_left(int *m, int *view);
int		validate_view_right(int *m, int *view);
int		validate_view_top(int *m, int *view);
int		validate_view_bottom(int *m, int *view);
int		validate_view(int *m, int *view);

void	ft_putchar(char c);
void	print_matrix(int *matrix);
void	matrix_start(int *matrix);

#endif