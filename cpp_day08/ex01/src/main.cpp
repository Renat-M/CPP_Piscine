/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:50:07 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:53:19 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Span.hpp"

int main() {
    {
        Span sp = Span(5);

        try {
            sp.shortestSpan();
        }
        catch (std::exception& e) {
            std::cout << "Span size too small!" << std::endl;
        }
        sp.addNumber(6);

        try {
            sp.longestSpan();
        }
        catch (std::exception& e) {
            std::cout << "Span size too small!" << std::endl;
        }

        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        try {
            sp.addNumber(-11);
        }
        catch (std::exception& e) {
            std::cout << "Span overflow!" << std::endl;
        }
    }

    std::cout << "" << std::endl;

    {
        Span sp = Span(10010);
        std::vector<int> v;

        for (int i = 0; i < 10000; ++i) {
            v.push_back(rand());
        }

        sp.addNumber(-2000);

        try {
            sp.addRange(v.begin(), v.end());
        }
        catch (std::exception& e) {
            std::cout << "Out of range!" << std::endl;
        }

        try {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception& e) {
            std::cout << "Span size too small!" << std::endl;
        }
    }

    return 0;
}
