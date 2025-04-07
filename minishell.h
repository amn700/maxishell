#ifndef MINISHELL_H
#define MINISHELL_H

// #include "../libft/libft.h"
// #include "../get_next_line/get_next_line.h"
// #include "../ft_printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
// #include <sys/wait.h>

char	**ft_split_pipex(char *s);
#endif