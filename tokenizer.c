#include "minishell.h"

t_token* new_token(e_token type, char *value)
{
    t_token * new = malloc(sizeof(t_token));
    if (!new)
        return NULL;
    new->next = NULL;
    new->type = type;
    new->value = value;
    return new;
}
t_token *tokenize(char **line)
{
    return 0;
}
t_token **create_list(char *line)
{
    int i = 0;
    e_token type = -1;
    char    *value = NULL;
    t_token **list;
    t_token *new;
    while (*line)
    {
        //a function that take i and line type and value and scoups a token
        new = tokenize(&line);
        ft_lstadd_front((t_list**)list, (t_list*)new_token(new->type, new->value));
    }
    //split it into more strings depending on the type
}
