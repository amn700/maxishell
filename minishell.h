#ifndef MINISHELL_H
#define MINISHELL_H

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef enum a_token
{
    COMMAND,         // Regular word or command
    PIPE,            // Pipe `|`
    REDIRECT_IN,     // Input redirection `<`
    REDIRECT_OUT,    // Output redirection `>`
    APPEND,          // Append redirection `>>`
    HEREDOC,         // Here document `<<`
    AND,             // Logical AND `&&`
    OR,              // Logical OR `||`
    DOLLAR,          // Environment variable `$`
    WILDCARD,        // Wildcard `*`
    QUOTE_SINGLE,    // Single quote `'`
    QUOTE_DOUBLE,    // Double quote `"`
    SEMICOLON        // Command separator `;`
}e_token;

// result of the tokenizer/lexer
// a list that contains the line split by its types
typedef struct s_token
{
    e_token type;
    char *value;
    struct s_token *next;
} t_token;


// typedef struct s_minishell
// {
//     char **envp;
//     char **commands;
//     char **arguments;

// }           t_minishell;


char	**ft_split_pipex(char *s);
#endif