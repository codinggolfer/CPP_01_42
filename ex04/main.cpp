/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:11:54 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 15:07:27 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Write.hpp"

int main(int ac, char* av[])
{
	if (ac != 4){
		std::cout << "invalid amount of arguments" << std::endl;
		return 1;
	}
	
	Write writer(av[1], av[2], av[3]);
	
	writer.copyFiles();
	
	return 0;
}