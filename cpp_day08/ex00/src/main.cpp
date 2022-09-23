/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:45:57 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:48:42 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../easyfind.hpp"

int main() {
    int arr[] = {1, 0, 5, -2, 7};

    {
        std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
        std::vector<int>::iterator it;

        for (it = v.begin(); it != v.end(); ++it) {
            std::cout << *it << "    ";
        }
        std::cout << std::endl;

        for (int i = 0; i < 6; ++i) {
            try {
                it = easyfind(v, i);
                std::cout << *(it) << " found at " << it - v.begin() << " position" << std::endl;
            }
            catch (std::exception &e) {
                std::cout << i << " not found" << std::endl;
            }
        }
    }

    std::cout << "" << std::endl;

    {
        std::list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));
        std::list<int>::iterator lt;

        for (lt = l.begin(); lt != l.end(); ++lt) {
            std::cout << *lt << "    ";
        }
        std::cout << std::endl;

        lt = easyfind(l, 1);

        for (int i = 0; i < 6; ++i) {
            try {
                lt = easyfind(l, i);
                std::cout << *(lt) << " found at " << i << " position" << std::endl;
            }
            catch (std::exception &e) {
                std::cout << i << " not found" << std::endl;
            }
        }
    }

    return 0;
}
