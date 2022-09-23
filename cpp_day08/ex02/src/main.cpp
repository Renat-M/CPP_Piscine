/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:54:45 by meourea           #+#    #+#             */
/*   Updated: 2022/05/27 21:57:17 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "" << std::endl;

    MutantStack<int> copy(mstack);
    MutantStack<int> copy2 = copy;

    std::stack<int> s(mstack);

    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << "" << std::endl;

    MutantStack<int>::iterator itCopy = copy.begin();
    MutantStack<int>::iterator iteCopy = copy.end();

    ++itCopy;
    --itCopy;
    while (itCopy != iteCopy)
    {
        std::cout << *itCopy << std::endl;
        ++itCopy;
    }

    std::cout << "" << std::endl;

    MutantStack<int>::iterator itCopy2 = copy2.begin();
    MutantStack<int>::iterator iteCopy2 = copy2.end();

    ++itCopy2;
    --itCopy2;
    while (itCopy2 != iteCopy2)
    {
        std::cout << *itCopy2 << std::endl;
        ++itCopy2;
    }

    std::cout << "" << std::endl;

    {
        std::list<int> mstack;

        mstack.push_back(5);
        mstack.push_back(17);

        std::cout << mstack.back() << std::endl;

        mstack.pop_back();

        std::cout << mstack.size() << std::endl;

        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
//[...]
        mstack.push_back(0);

        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    return 0;
}
