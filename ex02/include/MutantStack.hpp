/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:51:20 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/07 17:15:30 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK__
#define __MUTANTSTACK__

#include <stack>
#include <deque>

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		MutantStack(){}
		MutantStack(const MutantStack &obj) : std::stack<T, container>(obj){}
		MutantStack &operator=(const MutantStack &obj){return std::stack<T, container>::operator=(obj);}
		~MutantStack(){}
		typedef typename container::iterator iterator;

		iterator			begin(){return this->c.begin();}
		iterator			end(){return this->c.end();}
		
};

#endif
