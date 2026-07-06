/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:41:01 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/06 16:39:14 by gaducurt         ###   ########.fr       */
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
	return (_min);
}

int	Span::longestSpan()
{
	return (_max);
}

// void	Span::multiAdd(int n)
// {
// 	srand(time(NULL));
// 	for (int i = 0; i < n; i++)
// 	{
// 		const int	value = rand() % 20000;
// 		addNumber(value);
// 	}
// }

void	Span::insert(int* array, int begin, int end)
{
	for (begin; begin < end; begin++)
		addNumber(array[begin]);
}

void	Span::display()
{
	std::list<int>::iterator it = _lst.begin();
	for (it; it < _lst.size())
	// for (int i = 0; i < _lst.size(); i++)
	// 	std::cout << _lst[i] << ", ";
}
