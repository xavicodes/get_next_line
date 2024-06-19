/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 09:29:46 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/06/19 11:06:59 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
void linkbuf(t_list **list, char *buf)
{
        if(t_list )
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



char get_line(fd)
{
        
}
char *get_next_line(int fd)
{
        static t_list *list = NULL;
        char    *next_line;

if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

        create_list(&list, fd);

        
}