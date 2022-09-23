/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:07:31 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 18:08:37 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	
		WrongCat();
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat();
		void makeSound() const;
		
	private:
	
};

std::ostream &operator<<(std::ostream &out, const WrongCat &rhs);
