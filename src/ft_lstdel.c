/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*acnt;
	t_list	*anxt;

	acnt = *alst;
	while (acnt)
	{
		anxt = acnt->next;
		del((acnt->content), (acnt->content_size));
		free(acnt);
		acnt = anxt;
	}
	*alst = NULL;
}
