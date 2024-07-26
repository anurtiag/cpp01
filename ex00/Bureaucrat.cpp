/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:14 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 06:55:17 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(1)
{
    
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name), grade(grade)
{
    this->VeryfyGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& source) : name(source.name), grade(source.grade)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& source)
{
    this->grade = source.grade;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

int Bureaucrat::GetGrade() const
{
    return(this->grade);
}

std::string Bureaucrat::GetName() const
{
    return(this->name);
}

void Bureaucrat::IncrementGrade(const int increment)
{
    if ((this->grade - increment) < MAX_GRADE)
        this->GradeTooHighException();
    this->grade -= increment;
}

void Bureaucrat::DecrementGrade(const int decrement)
{
    if ((this->grade + decrement) > MIN_GRADE)
        this->GradeTooLowException();
    this->grade += decrement;
}

void Bureaucrat::GradeTooLowException()
{
    throw std::invalid_argument("The grade is too low");
}

void Bureaucrat::GradeTooHighException()
{
    throw std::invalid_argument("The grade is too high");
}

void Bureaucrat::VeryfyGrade()
{
    if (this->grade < MAX_GRADE)
        this->GradeTooHighException();
    else if (this->grade > MIN_GRADE)
        this->GradeTooLowException();
}
