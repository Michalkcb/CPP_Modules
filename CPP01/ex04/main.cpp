/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/06/04 10:12:11 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 04: Sed is for losers
Exercise : 04
Sed is for losers
Turn-in directory : ex04/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : std::string::replace
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.
*/
#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(const std::string& line, const std::string& s1, const std::string& s2)
{
    // if (s1.empty()) // Obsługa przypadku, gdy s1 jest pusty
    //     return line;

    std::string result = line;
    size_t pos = 0;

    while ((pos = result.find(s1, pos)) != std::string::npos)
    {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos += s2.length();
    }
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;	
	}

	// Check if the first argument is a valid filename
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	// Open the input file
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return 1;
	}
	
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Could not create file " << std::endl;
		return 1;
	}
	
	// Read the content of the file into a string
	std::string line;
	
	while (std::getline(inputFile, line))
		outputFile << replaceString(line, s1, s2) << std::endl;

	inputFile.close();
	outputFile.close();
	return 0;
}