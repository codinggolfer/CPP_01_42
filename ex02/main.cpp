/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:09:52 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/10 17:27:22 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout 	<< "address of the string: " << &str << std::endl
				<< "adress held by ptr: " << ptr << std::endl
				<< "adress held by ref: " << &ref << std::endl;
	
	std::cout	<< "value of the string: " << str << std::endl
				<< "value pointed by ptr: " << *ptr << std::endl
				<< "value pointed by ref: " << ref << std::endl;
	
	return 0;
}