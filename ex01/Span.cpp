/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:41:01 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/11 15:01:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span(){}

Span::Span(unsigned int n)
{
	if (n < _lst.max_size())
		_limit = n;
}

Span::Span(const Span &obj)
{
    _lst = obj._lst;
	_limit = obj._limit;
}

Span& Span::operator=(const Span &obj)
{
    if (this != &obj)
	{
		_lst = obj._lst;
		_limit = obj._limit;
	}
	return (*this);
}

Span::~Span(){}

void	Span::addNumber(int nb)
{
	if (_lst.size() + 1 <= _limit)
		_lst.push_back(nb);
	else
		throw std::exception();
	if (_lst.size() == 1)
	{
		_min = nb;
		_max = nb;
	}
	else if (nb < _min)
		_min = nb;
	else if (nb > _max)
		_max = nb;
}

int	Span::shortestSpan()
{
	//misunderstanding of subject
	return (_min);
}

int	Span::longestSpan()
{
	//misunderstanding of subject
	return (_max);
}

template <typename it>
void	Span::insert(int* array, it begin, it end)
{

}

// void	Span::insert(int* array, int begin, int end)
// {
	
// 	for (int i = begin; i < end; i++)
// 		addNumber(array[i]);
// }

void	Span::display()
{
	std::cout << "span = [ ";
	for (std::list<int>::iterator it = _lst.begin(); it != _lst.end(); it++)
	{
		std::cout << (*it) << " ";
	}
	std::cout << "]" << std::endl;
}
