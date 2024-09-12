/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Write.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:15:53 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 14:39:07 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Write.hpp"

Write::Write(const std::string& sP, const std::string& s1, const std::string& s2)
	: _sourcePath(sP), _sourceStr(s1), _replaceStr(s2) {
		setPath("output.replace");
	}

void Write::replacer(std::string& content)
{
	size_t pos = 0;
	
	while  ((pos = content.find(_sourceStr, pos)) != std::string::npos)
	{
		content.erase(pos, _sourceStr.length());
		content.insert(pos, _replaceStr);
		pos = _replaceStr.length(); 
	}
}
 
void Write::copyFiles()
{
	std::ifstream sourceFile(_sourcePath);
	if (!sourceFile.is_open()){
		std::cout << "Invalid sourcePath, can't open file " << getPathFile() << std::endl;
		return ;
	}

	std::string content((std::istreambuf_iterator<char>(sourceFile)), std::istreambuf_iterator<char>());
	
	replacer(content); 
	
	std::ofstream replaceFile(_destPath);
	if (!replaceFile.is_open()){
		std::cout << "Invalid Destination Path, can't open file " << getDestFile() << std::endl;
		return ;
	}
	
	sourceFile.close();
	
	replaceFile << content;
	replaceFile.close();
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

Write::~Write(){}