/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 09:29:46 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/06/19 14:23:44 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void linkbuf(t_list **list, char *buf)
{
        t_list *new_node;
        t_list *last_node;

        last_node = findlastnode(list);
        if(new_node == NULL)
                return;
        if(last_node == NULL)
                *list = new_node;
        else
                last_node->next = new_node;
                new_node->str_buf = buf;
                new_node->next = NULL;
}
char *getline(t_list *list)
{
        int restcount;
        int a;
        char *rest;
        
        restcount = 0;
        if(list == NULL)
                return (NULL);
        while(list->str_buf != '\n') 
                a++;
        if(list->str_buf = '\n') //dont know if '\n' counts in the rest or the main string!
                a++;
        while(list->str_buf != '\n')
        {
        restcount++;
        a++;
        }
        rest = malloc(sizeof(char)*restcount + 1);
        a = a - restcount;
        restcount = 0;
        while(list->str_buf[a])
                rest[restcount++] = list->str_buf[a++];
        return(rest);
}
void create_list(t_list **list,int fd)
{
        int chars_read;
        char *buf;

        while(!scannewline(*list))
        {
                buf = malloc(sizeof(char)*BUFFER_SIZE);
                if(buf == NULL)
                        return;
        chars_read = read( fd,buf,BUFFER_SIZE);

        if(!chars_read)
        {
                free(buf);
                return ;
        }
        buf[chars_read] = '\0';

        linkbuf(list,buf);
        }
}
char *get_next_line(int fd)
{
        static t_list *list = NULL;
        char    *next_line;

if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

        create_list(&list, fd);

        if(list == NULL)
                return NULL;
        
        next_line = getline(list);
}