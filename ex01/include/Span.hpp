/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:40:42 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/07 16:20:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

#include <list>
// #include <array>

class Span
{
	private:
		std::list<int>	_lst;
		unsigned int	_limit;
		int				_min;
		int				_max;	
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();
		
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		void	insert(int* array, int begin, int end);
		void	display();
};

#endif
