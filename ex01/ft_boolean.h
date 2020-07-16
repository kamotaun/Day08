/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:12:22 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/16 14:31:19 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS		0
#define ODD_MSG		"I have an even number of arguments."
#define EVEN_MSG	"I have an odd number of arguments."
#define EVEN(x)		x % 2 == 0
#define TRUE		1
#define FALSE		0
typedef	int 	t_bool

#endif

