/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:26:56 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 17:05:38 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name << " " << zindex << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie* z = NULL;
	
	z = z->zombieHorde(nbZOMBIES, "harold");
	
	for (int i = 0; i < nbZOMBIES; i++)
		z[i].announce();
		
	delete[] z;
}
