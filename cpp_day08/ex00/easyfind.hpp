/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:46:36 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:49:11 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

template<typename T>
typename T::iterator easyfind(T& c, const int& x) {
    typename T::iterator it = std::find(c.begin(), c.end(), x);
    if (it == c.end()) {
        throw std::exception();
    }
    return it;
}
