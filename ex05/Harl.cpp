/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:47 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 18:11:21 by eagbomei         ###   ########.fr       */
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
	std::string lvls[4] = {"debug", "info", "warning", "error"};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (!(level.compare(lvls[i]))){ 	
			switch (i)
			{
			case 0:
				(this->*fptr[i])(); break;
			case 1:
				(this->*fptr[i])(); break;
			case 2:
				(this->*fptr[i])(); break;
			case 3:
				(this->*fptr[i])(); break;
			default:
				return ;
			}
		}
	}
	return ;
	
}
Harl::Harl() {}

Harl::~Harl() {}