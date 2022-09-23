/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:27 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:24:35 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j; //should not create a leak
		delete i;
	}
	
    std::cout << " " <<  std::endl;

    {
        Dog basic;
        {
            Dog tmp = basic;
        }
    }

    std::cout << " " << std::endl;

    {
        Dog a;
        Dog b;

        std::cout << "a: " << a.getIdea(0) << " " << a.getIdea(1) << std::endl;
        a.setIdea(0, "Eat");
        std::cout << "a: " << a.getIdea(0) << " " << a.getIdea(1) << std::endl;
        b = a;
        std::cout << "b: " << b.getIdea(0) << " " << b.getIdea(1) << std::endl;
        a.setIdea(1, "Sleep");
        std::cout << "a: " << a.getIdea(0) << " " << a.getIdea(1) << std::endl;
        std::cout << "b: " << b.getIdea(0) << " " << b.getIdea(1) << std::endl;
    }

    std::cout << " " << std::endl;

    Animal *a[10];

    for (int i = 0; i < 6; i++)
	{
        if (i % 2 == 0)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }

    std::cout << " " << std::endl;

    for (int i = 0; i < 6; ++i)
        delete a[i];
		
    return 0;
}
