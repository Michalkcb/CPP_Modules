/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:40:22 by mbany             #+#    #+#             */
/*   Updated: 2025/07/01 18:41:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", 72, 45), target(target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other), target(other.target) {}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm() {}
const std::string &RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();

	std::cout << "Drilling noises..." << std::endl;
	if (rand() % 2 == 0) {
		std::cout << target << " has been robotomized successfully!" << std::endl;
	} else {
		std::cout << "Robotomy of " << target << " failed." << std::endl;
	}
}

