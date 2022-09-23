/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:54 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:43:00 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	public:
		
		AAnimal();
		AAnimal(const AAnimal &rhs);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();
		
		virtual void makeSound() const = 0;
		
		const std::string &getType() const;
		
	protected:
		std::string _type;
};

std::ostream &operator<<(std::ostream &out, const AAnimal &rhs);