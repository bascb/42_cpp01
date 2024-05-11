/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:34:42 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/11 14:42:21 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::ifstream& fin, std::ofstream& fout, std::string s1, std::string s2);

int	main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <string to be replaced> <substitute string>" << std::endl;
		return 0;
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "String to be replaced cannot be empty!" << std::endl;
		return (1);
	}
	fin.open(argv[1], std::ifstream::in);
	if (!fin.is_open())
	{
    	std::cerr << "Error opening file " << argv[1] << std::endl;
    	return (1);
    }
	std::string out_filename = argv[1];
	out_filename += ".replace";
	fout.open(out_filename.c_str(), std::ofstream::out);
	if (!fout.is_open())
	{
    	std::cerr << "Error opening file " << out_filename << std::endl;
		fin.close();
    	return (1);
    }
	replace(fin, fout, s1, s2);
	fin.close();
	fout.close();
	return (0);
}

void	replace(std::ifstream& fin, std::ofstream& fout, std::string s1, std::string s2)
{
	std::size_t found_pos = 0;
	std::size_t s1_len = s1.size();
	std::size_t s2_len = s2.size();
	std::string text((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
	while ((found_pos = text.find(s1, found_pos)) != std::string::npos)
	{
		text.erase(found_pos, s1_len);
		text.insert(found_pos, s2);
		found_pos += s2_len;
	}
	fout << text;
}