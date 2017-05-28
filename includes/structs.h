/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:07:10 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:07:11 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# define MAX_HASH 4096

typedef struct		s_search
{
	char			*prev_match;
	char			*results;
	int				fail;
}					t_search;

typedef struct		s_item
{
	char			*key;
	char			*value;
	struct s_item	*next;
}					t_hash;

typedef struct		s_search_hist
{
	char			*haystack;
	char			*needle;
	char			*with;
	char			*replace;
}					t_search_hist;

typedef struct		s_stack
{
	int				capacity;
	int				count;
	int				top;
	t_search		*search;
	t_hash			*hash[MAX_HASH];
	int				ctrl_r;
	char			*list[4096];
	char			*paste;
	char			**envp;
	int				success;
	int				ret;
	int				counter;
}					t_stack;

typedef struct		s_comms
{
	char			**user_comm;
	char			*get_line;
}					t_cmd;

typedef struct		s_env
{
	char			**list;
	int				top;
	int				capacity;
	int				malloc_id;
}					t_env;

unsigned int		ft_hash_code(const char *key);
#endif
