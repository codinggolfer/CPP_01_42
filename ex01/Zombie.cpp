/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:34:28 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 17:03:30 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::_nZ = 0;
Zombie::Zombie(){
	
}

void Zombie::createZombie(std::string zombieName)
{
	name = zombieName;
	++_nZ;
	zindex = _nZ;
	std::cout << name << " " << zindex <<" created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " " << zindex << " is shot in the head" << std::endl;
}