/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:19:21 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/12 09:40:16 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

bool	ft_replace(std::string filename, std::string text, std::string s1, std::string s2)
{
	std::ofstream outfile(filename + ".replace");
	size_t pos;
	// outfile.open(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cerr << "outfile could not be opened :(" << std::endl;
		return(false);
	}
	pos = text.find(s1);
	while(pos != std::string::npos)
	{
		text.erase(pos, s1.length());
		text.insert(pos, s2);
		pos = text.find(s1);
	}
	outfile << text;
	return(true);
}

std::string ft_read(std::string filename)
{
	std::ifstream infile(filename);
	std::string line;
	std::string text;

	if(!infile.is_open())
	{
		std::cerr << "infile could not be opened" << std::endl;
		return("");
	}
	while (std::getline(infile, line))
	{
		text.append(line + "\n");
	}
	infile.close();
	return (text);
}

int main(int argc, char **argv)
{
	std::string text;
	std::string filename;
	std::string s1;
	std::string s2;
	if(!(argc == 4))
	{
		std::cerr << "Bad arguments :(" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	text = ft_read(filename);
	if(text.empty())
		return(1);
	// ft_replace(filename,text, s1, s2);
	if (ft_replace(filename,text, s1, s2) == false)
		return(1);
	return(0);
}

// int main(int argc, char **argv)
// {
// 	std::string text;
// 	std::string filename = argv[1];
// 	std::string s1 = argv[2];
// 	std::string s2 = argv[3];
// 	if(!(argc == 4 && !(s1.empty() && s2.empty() && filename.empty())))
// 	{
// 		std::cerr << "Bad arguments :(" << std::endl;
// 		return (1);
// 	}
// 	text = ft_read(filename);
// 	if(text.empty())
// 		return(1);
// 	ft_replace(filename,text, s1, s2);
// 	return(0);
// }
