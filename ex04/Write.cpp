/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Write.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:15:53 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/11 17:32:22 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Write.hpp"

Write::Write(const std::string& sP, const std::string& s1, const std::string& s2)
	: _sourcePath(sP), _sourceStr(s1), _replaceStr(s2) {
		setPath("output.replace");
	}

void Write::replacer(std::string& content)
{
	int pos = 0;
	
	while  ((pos == _sourceStr.find(_sourceStr, pos) != std::string::npos))
	{
		_resPath.erase(pos, str1.length());
		newFile.insert(pos, str2);
		pos += str2.length(); 
	}
}
 
void Write::copyFiles()
{
	std::ifstream sourceFile(_sourcePath);
	if (!sourceFile.is_open()){
		std::cout << "Invalid sourcePath, can't open file " << getFile() << std::endl;
		return ;
	}

	std::string content((std::istreambuf_iterator<char>(sourceFile), std::istreambuf_iterator<char>()));
	
	replacer(content); 
	
	std::ofstream replaceFile(_destPath);
	if (!replaceFile.is_open()){
		std::cout << "Invalid Destination Path, can't open file " << getDestFile() << std::endl;
		return ;
	}
	
	sourceFile.close();
	
	replaceFile << content;
	
}

std::string Write::getPathFile(){
	return _sourcePath;
}

std::string Write::getDestFile(){
	return _destPath;
}

void Write::setPath(std::string name){
	_destPath = name;
}