/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:51:49 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:53:24 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Span.hpp"

Span::Span() {

}

Span::Span(const unsigned int& N) : _capacity(N) {

}

Span::Span(const Span &s) {
    *this = s;
}

Span &Span::operator=(const Span &s) {
    if (this == &s) {
        return *this;
    }
    _capacity = s._capacity;
    _set = s._set;
    return *this;
}

Span::~Span() {

}

void Span::addNumber(const int &n) {
    if (_set.size() + 1 > _capacity) {
        throw std::exception();
    }
    _set.insert(n);
}

unsigned int Span::shortestSpan() {
    if (_set.size() < 2) {
        throw std::exception();
    }
    std::set<int>::iterator it1 = _set.begin();
    std::set<int>::iterator it2 = ++_set.begin();

    int min = *(it2++) - *(it1++);
    while (it2 != _set.end() && min != 0) {
        if (*it2 - *it1 < min) {
            min = *it2 - *it1;
        }
        ++it2;
        ++it1;
    }
    return min;
}

unsigned int Span::longestSpan() {
    if (_set.size() < 2) {
        throw std::exception();
    }
    return *(--_set.end()) - *(_set.begin());
}

