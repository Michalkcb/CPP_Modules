/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:42:43 by mbany             #+#    #+#             */
/*   Updated: 2025/06/30 18:10:01 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat 
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	int incrementGrade();	
	int decrementGrade();

	std::string getName() const;
	int getGrade() const;
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too high!"; }
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too low!"; }
	};
		
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_HPP
