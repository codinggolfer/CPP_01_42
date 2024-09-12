/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Write.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:13:28 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/12 14:31:12 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>

class Write
{
private:
	std::string _sourcePath;
	const std::string _sourceStr;
	const std::string _replaceStr;
	std::string _destPath;
public:

	Write(const std::string& sP, const std::string& s1, const std::string& s2);
	
	void replacer(std::string& content);
	void copyFiles();
	
	std::string getDestFile();
	std::string getPathFile();

	
	
	void setPath(std::string name);
	~Write();
};

