/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:11:54 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/11 17:14:10 by eagbomei         ###   ########.fr       */
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
	
	writer.fileToString();
	
	//fileToString(sourceStr, replaceStr, newFile);
	
	std::ofstream resFile("resFile.txt");
	if (!resFile.is_open()){
		std::cout << "Invalid resFile, can't open" << std::endl;
		return 1;
	}
	
	resFile << newFile;
	resFile.close();
		
	return 0;
}




// void Write::writeToFile(const std::string& str1, const std::string& str2, const std::string& newFile)
// {
// 	int pos = 0;
	
// 	while  ((pos == newFile.find(str1, pos) != std::string::npos))
// 	{
// 		newFile.erase(pos, str1.length());
// 		newFile.insert(pos, str2);
// 		pos += str2.length(); 
// 	}
// }




// void fileToString(const std::string& sourcePath, const std::string& sourceStr,const std::string& replaceStr, const std::string& newFile)
// {
// 	std::ifstream sourceFile(sourcePath);
// 	if (!sourceFile.is_open()){
// 		std::cout << "Invalid sourcePath, can't open" << std::endl;
// 		return ;
// 	}

// 	std::string content((std::istreambuf_iterator<char>(sourceFile), std::istreambuf_iterator<char>()));

// 	sourceFile.close();

// 	newFile = content;
	
// 	writeToFile(sourceStr, replaceStr, newFile);
// }

//std::string content((std::istreambuf_iterator<char>(sourceFile), std::istreambuf_iterator<char>()));
