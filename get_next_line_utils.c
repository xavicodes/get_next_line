#include "get_next_line.h"

t_list *findlastnode(t_list *list)
{
        if(list == NULL)
                return (NULL);
        while(list->next)
        {
                list = list->next ;
        }
        return (list);
}

int     scannewline( t_list *list)
{
        int i;

        i = 0;
        while(list)
        {
                while(list->str_buf[i]|| i < BUFFER_SIZE)
                {
                        if(list->str_buf[i] == '\n')
                                return (1);
                i++;
                }
                list = list->next;
        }
        return 0;
}