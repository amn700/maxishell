#include "minishell.h"

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		free(matrix[i++]);
	free(matrix);
}

int main (char **envp)
{
    char * line = NULL;
    // char **matrix = NULL;
    t_token**list = create_list(line);
    char *prompt = "minishell> ";
    while (1)
    {
        line = readline(prompt);
        if (!line)
        {
            ft_printf("exit\n");
            break;
        }
        if (*line)
            add_history(line);
        
        // matrix = ft_split_pipex(line);
        // if (!matrix)
        //     return (perror("malloc error"), 1);
        // free_matrix(matrix);
        free(line);
    }
}
