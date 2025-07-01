/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:14:04 by mbany             #+#    #+#             */
/*   Updated: 2025/07/01 13:39:02 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int execGrade;
public:
	Form(const std::string &name, int signGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string &getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif