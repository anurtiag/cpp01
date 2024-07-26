/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:14 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 05:18:48 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :
name("defaultForm"), signGrade(1), execGrade(1), isSigned(false)
{
    
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade, bool isSigned) :
name(name), signGrade(signGrade), execGrade(execGrade), isSigned(isSigned)
{
    this->VeryfyAForm();
}

AForm::AForm(const AForm& source) :
name(source.name), signGrade(source.signGrade), execGrade(source.execGrade), isSigned(source.isSigned)
{
    this->VeryfyAForm();
}

AForm& AForm::operator=(const AForm& source)
{
    this->isSigned = source.isSigned;
    return(*this);
}

AForm::~AForm()
{
    
}

int AForm::GetSignGrade() const
{
    return(this->signGrade);
}

int AForm::GetExecGrade() const
{
    return(this->execGrade);
}

std::string AForm::GetName() const
{
    return(this->name);
}

void AForm::GradeTooLowException()
{
    throw std::invalid_argument("The grade is too low");
}

void AForm::GradeTooHighException()
{
    throw std::invalid_argument("The grade is too high");
}

void AForm::NotSignedException()
{
    throw std::invalid_argument("The form is not signed");
}

void AForm::VeryfyAForm()
{
    if (this->signGrade < MAX_GRADE || this->execGrade < MAX_GRADE)
        this->GradeTooHighException();
    else if (this->signGrade > MIN_GRADE || this->execGrade > MIN_GRADE)
        this->GradeTooLowException();
}

void AForm::beSigned(Bureaucrat& obj)
{
    if (obj.GetGrade() <= this->signGrade)
        this->isSigned = true;
    else
        this->GradeTooLowException();
}

bool AForm::GetIsIsgned() const
{
    return(this->isSigned);
}

std::ostream& operator<<(std::ostream& output, AForm& obj)
{
    output << obj.GetName() << ", Aform signGrade " << obj.GetSignGrade() << ", Aform execGrade " << obj.GetExecGrade();
    if (obj.GetIsIsgned() == true)
        output << ", is signed\n";
    else
        output << ", is not signed\n";
    return (output);
}