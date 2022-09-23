/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:50:59 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:52:30 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <set>

class Span {

private:

    unsigned int _capacity;
    std::set<int> _set;

    Span();

public:

    Span(const unsigned int& N);
    Span(const Span& s);
    Span& operator=(const Span& s);
    virtual ~Span();

    void addNumber(const int& n);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    template<class InputIterator>
    void addRange(InputIterator f, InputIterator l)
    {
        int i = 0;

        for (InputIterator it = f; it != l ; ++it) {
            ++i;
        }

        if (i + _set.size() > _capacity) {
            throw std::exception();
        }

        _set.insert(f, l);
    }


};
