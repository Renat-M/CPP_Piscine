/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:13:27 by meourea           #+#    #+#             */
/*   Updated: 2022/05/25 20:14:55 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Serial.hpp"

int main()
{
	Data *ptr = new Data;
	ptr->num = 777;

	uintptr_t raw = serialize(ptr);
	Data *tmp = deserialize(raw);

	std::cout << ptr->num << " ptr data" << std::endl;
	std::cout << tmp->num << " tmp data" << std::endl;
	std::cout << &(ptr) << std::endl;
	std::cout << &(tmp) << std::endl;

	tmp->num = 1;

	std::cout << ptr->num << " ptr data" << std::endl;
	std::cout << tmp->num << " tmp data" << std::endl;
	std::cout << &(ptr) << std::endl;
	std::cout << &(tmp) << std::endl;
	
	delete ptr;
	return (0);
}