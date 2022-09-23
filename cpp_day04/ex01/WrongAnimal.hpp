/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:04:27 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 18:06:01 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	public:
		
		WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		~WrongAnimal();
		
		void makeSound() const;
		
		const std::string &getType() const;
		
	protected:
		std::string _type;
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &rhs);