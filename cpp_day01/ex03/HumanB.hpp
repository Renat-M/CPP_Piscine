/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:28:42 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 14:03:03 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
		
	private:
		std::string _name;
		Weapon *_weapon;	
};
