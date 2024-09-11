/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:31:13 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/11 11:03:39 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	HumanB();
	void attack();
	void setWeapon(Weapon& weapon);
	~HumanB();
};

#endif