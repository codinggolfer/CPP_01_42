/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:28:43 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 14:19:07 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
	name = zombieName;
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is shot in the head" << std::endl;
}
