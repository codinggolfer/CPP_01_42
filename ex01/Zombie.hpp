/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:25:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 17:05:11 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <functional>

# define nbZOMBIES 8

class Zombie
{
private:
	std::string name; //zombie name
	static int _nZ; //number of created zombies.
	int zindex; //zombie index
public:
	void createZombie(std::string zombieName); //constructor where name is set
	Zombie(); //default constructor
	void announce();
	Zombie* zombieHorde(int N, std::string name);
	~Zombie();
};

#endif