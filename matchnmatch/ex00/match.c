/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:23:58 by iharchi           #+#    #+#             */
/*   Updated: 2019/07/14 14:28:58 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int		match(char *s1, char *s2)
{
	if (s1[0] && s2[0] == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (!(s1[0]) && s2[0] == '*')
		return (match(s1, s2 + 1));
	if (s1[0] && s2[0] && s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	if (!(s1[0]) && !(s2[0]))
		return (1);
	return (0);
}

int		main()
{
	printf("%d",match("othmane","oth*ea"));
}
