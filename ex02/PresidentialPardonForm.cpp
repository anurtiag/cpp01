/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 04:11:21 by kali              #+#    #+#             */
/*   Updated: 2024/07/23 09:15:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, false), target(target)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (this->GetIsIsgned() == false)
        this->NotSignedException();
    if (executor.GetGrade() > this->GetExecGrade())
        this->GradeTooLowException();
    this->action();
}

void PresidentialPardonForm::action()
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}