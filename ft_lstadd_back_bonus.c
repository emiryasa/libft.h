/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyasa <eyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:46:49 by eyasa             #+#    #+#             */
/*   Updated: 2023/12/11 18:28:51 by eyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*int main()
{
    t_list *myList = NULL;

    ft_lstadd_back(&myList, (t_list*)malloc(sizeof(t_list)));
    ft_lstadd_back(&myList, (t_list*)malloc(sizeof(t_list)));
    ft_lstadd_back(&myList, (t_list*)malloc(sizeof(t_list)));

    t_list *current = myList;
    while (current)
    {
        printf("Eleman\n");
        current = current->next;
    }

    while (myList)
    {
        t_list *temp = myList;
        myList = myList->next;
        free(temp);
    }
    return 0;
}*/
