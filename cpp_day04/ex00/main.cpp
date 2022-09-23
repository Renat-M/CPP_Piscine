/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:27 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 18:17:31 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;
	
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the cat sound! 
	meta2->makeSound();
	
	delete meta2;
	delete i2;
	
	return 0;
}