/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:30:26 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/11 10:41:30 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
	setType(Weapon);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string& Weapon::getType() const
{
	return type;
}

Weapon::~Weapon(){}