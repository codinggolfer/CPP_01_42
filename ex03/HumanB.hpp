/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:31:13 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 18:04:51 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class HumanA
{
private:
	Weapon _type;
	std::string name;
public:
	HumanA(std::string name);
	void attack();
	~HumanA();
};

#endif