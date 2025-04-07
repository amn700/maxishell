#include "minishell.h"

int main (void)
{
    char * line = NULL;
    char **matrix = NULL;
    char *prompt = "minishell> ";
    while (1)
    {
        char *line = readline(prompt);
        if (!line)
        {
            printf("exit\n");
            break;
        }
        if (line && *line)
            add_history(line);
        printf("You entered: %s\n", line);
    }
    matrix = ft_split_pipex(line);
    if (!matrix)
        return (perror("malloc error"), 1);
    for(int i = 0; matrix[i]; i++)
        printf("%s\n", matrix[i]);
    return (0);
    // char *line = readline("minishell> ");
    // if (!line)
    //     return (0);
    // printf("You entered: %s\n", line);
}