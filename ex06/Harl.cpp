/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:47 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 18:42:16 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Put brackets here '('" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Brackets in a incorrect place" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "It would be nice to have brackets here, so me as a compiler could do my job" << std::endl;
}

void Harl::error(void)
{
	std::cout << "SeggieFoultie my bruda" << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (!(level.compare(lvls[i]))){ 	
			switch (i)
			{
			case 0:
				(this->*fptr[i])(); i++;
			case 1:
				(this->*fptr[i])(); i++;
			case 2:
				(this->*fptr[i])(); i++;
			case 3:
				(this->*fptr[i])(); return;
			default:
				return ;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
	return ;
	
}
Harl::Harl() {}

Harl::~Harl() {}