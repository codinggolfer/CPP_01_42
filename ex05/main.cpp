/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:32 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 18:14:16 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
	Harl level;

	level.complain("debug");
	level.complain("info");
	level.complain("error");
	level.complain("warning");

	std::cout << std::endl;
	std::cout << "REVERSED WAY ============================ REVERSED WAY" << std::endl << std::endl;

	level.complain("warning");
	level.complain("error");
	level.complain("info");
	level.complain("debug");

	return 0;
}