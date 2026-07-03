/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:50:11 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/03 14:19:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	std::vector<int>	vect;
	srand(time(NULL));
	std::cout << "Contain of vector : ";
	for (int i = 0; i < 20; i++)
	{
		const int value = rand() % 20;
		vect.push_back(value);
		std::cout << value;
		if (i < 19)
			std::cout << ", ";
	}
	std::cout << std::endl;
	try
	{
		const int i = rand() % 10;
		std::cout << "number to find = " << i << std::endl;
		easyfind(vect, i);
	}
	catch (std::exception & e)
	{
		std::cout << "No occurrence has been found." << std::endl;
	}

	std::list<int>	lst;
	std::cout << "\nContain of list : ";
	for (int i = 0; i < 20; i++)
	{
		const int value = rand() % 20;
		lst.push_back(value);
		std::cout << value;
		if (i < 19)
			std::cout << ", ";
	}
	std::cout << std::endl;
	try
	{
		const int i = rand() % 10;
		std::cout << "number to find = " << i << std::endl;
		easyfind(lst, i);
	}
	catch (std::exception & e)
	{
		std::cout << "No occurrence has been found." << std::endl;
	}
	return (0);
}
