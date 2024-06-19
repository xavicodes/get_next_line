/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:30:35 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/06/19 12:49:43 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#endif

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

typedef struct s_list
{
        char    *str_buf;
        struct s_list   *next;
}       t_list;

char *get_next_line(int fd);

t_list *findlastnode(t_list *list);

int     scanneweline( t_list *list);

void create_list(t_list **list,int fd);

void linkbuf(t_list **list, char *buf);

