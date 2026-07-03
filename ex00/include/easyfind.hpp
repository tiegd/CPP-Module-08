/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:34:40 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/03 11:56:36 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T a, int b)
{
    typename T::iterator it;
    it = std::find(a.begin(), a.end(), b);
    if (it != a.end())
        std::cout << "The occurrence " << b << " has been found" << std::endl;
    else
		throw std::exception();
}
