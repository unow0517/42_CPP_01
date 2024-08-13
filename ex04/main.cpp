/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:48:49 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/13 12:13:39 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int findandrpl(char **argv, std::string str)
{
	std::ofstream outfile;
	int strlen;
	int pos;

	outfile.open((std::string(argv[1]))+".replace");
	strlen = std::string(argv[2]).size();	
	for (int i = 0; i< (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += strlen - 1;
		} else
			outfile << str[i];
		std::cout << i << std::endl;
	}
	outfile.close();
	return (0);
}
int main(int argc, char **argv) 
{
	char c;
	std::string str;

	if (argc != 4)
	{
		std::cout << "3 parameters are required: filename, string1, string2" <<std::endl;
		return (1);
	}
	//input file stream
	std::ifstream inputFile(argv[1]);
	if(!inputFile)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	while(!inputFile.eof() && inputFile >> std::noskipws >> c)
		str += c;	
	inputFile.close();
	return (findandrpl(argv, str));
}
