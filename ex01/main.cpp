/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:40:52 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/11 12:35:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp1(10000);
	int	myarray[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
	try
	{
		sp1.insert(myarray, 2, 7);
		sp1.addNumber(6);
		sp1.display();
		std::cout << "shortest = " << sp1.shortestSpan() << std::endl;
		std::cout << "longest = " << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : Too much number" << std::endl;
	}
	std::cout << std::endl;
	Span	sp2(2);
	try
	{
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.display();
		std::cout << "shortest = " << sp2.shortestSpan() << std::endl;
		std::cout << "longest = " << sp2.longestSpan() << std::endl;
		sp2.addNumber(3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : Too much number" << std::endl;
	}
	return 0;
}
