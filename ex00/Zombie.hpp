/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:21:58 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 14:10:55 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string zombieName);
	void announce();
	Zombie* newZombie(const std::string name);
	void randomChump(std::string name);
	~Zombie();
};

// Zombie::Zombie()
// {
// }

// Zombie::~Zombie()
// {
// }



#endif