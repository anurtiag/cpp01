/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:14 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 05:18:48 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : 
name("defaultForm"), signGrade(1), execGrade(1), isSigned(false)
{
    
}

Form::Form(const std::string name, const int signGrade, const int execGrade) :
name(name), signGrade(signGrade), execGrade(execGrade), isSigned(false)
{
    this->VeryfyForm();
}

Form::Form(const Form& source) :
name(source.name), signGrade(source.signGrade), execGrade(source.execGrade), isSigned(source.isSigned)
{
    this->VeryfyForm();
}

Form& Form::operator=(const Form& source)
{
    this->isSigned = source.isSigned;
    return(*this);
}

Form::~Form()
{
    
}

int Form::GetSignGrade() const
{
    return(this->signGrade);
}

int Form::GetExecGrade() const
{
    return(this->execGrade);
}

std::string Form::GetName() const
{
    return(this->name);
}

void Form::GradeTooLowException()
{
    throw std::invalid_argument("The form grade is too low");
}

void Form::GradeTooHighException()
{
    throw std::invalid_argument("The form grade is too high");
}

void Form::VeryfyForm()
{
    if (this->signGrade < MAX_GRADE || this->execGrade < MAX_GRADE)
        this->GradeTooHighException();
    else if (this->signGrade > MIN_GRADE || this->execGrade > MIN_GRADE)
        this->GradeTooLowException();
}

void Form::beSigned(Bureaucrat& obj)
{
    if (obj.GetGrade() <= this->signGrade)
        this->isSigned = true;
    else
        this->GradeTooLowException();
}

bool Form::GetIsIsgned() const
{
    return(this->isSigned);
}

std::ostream& operator<<(std::ostream& output, Form& obj)
{
    output << obj.GetName() << ", form signGrade " << obj.GetSignGrade() << ", form execGrade " << obj.GetExecGrade();
    if (obj.GetIsIsgned() == true)
        output << ", is signed\n";
    else
        output << ", is not signed\n";
    return (output);
}