/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:40:52 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/07 16:28:40 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(10000);
	int	myarray[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
	try
	{
		sp.insert(myarray, 2, 7);
		sp.addNumber(6);
		sp.display();
		std::cout << "shortest = " << sp.shortestSpan() << std::endl;
		std::cout << "longest = " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Too much number" << std::endl;
	}
	return 0;
}
