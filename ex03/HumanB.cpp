/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:31:21 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/17 11:19:23 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their " << "nykeilla" << std::endl;
}

HumanB::HumanB(const std::string name)
	: _name(name){
		_weapon = nullptr;
	}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

HumanB::~HumanB() {}