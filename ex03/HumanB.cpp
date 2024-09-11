/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:31:21 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/11 11:07:41 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string name)
	: _name(name){
		_weapon = 0;
	}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

HumanB::~HumanB() {}