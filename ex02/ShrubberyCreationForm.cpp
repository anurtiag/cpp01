/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 04:11:21 by kali              #+#    #+#             */
/*   Updated: 2024/07/23 09:15:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, false), target(target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->GetIsIsgned() == false)
        this->NotSignedException();
    if (executor.GetGrade() > this->GetExecGrade())
        this->GradeTooLowException();
    this->action();
}

void ShrubberyCreationForm::action()
{
    std::string filename = this->target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if(!outfile.is_open())
    {
        std::cerr << "garbanzo\n";
        return ;
    }
    outfile << "     *     \n"
            << "    ***    \n"
            << "   *****   \n"
            << "  *******  \n"
            << " ********* \n"
            << "***********\n"
            << "     *     \n"
            << "     *     \n"
            << "     *     \n";
    outfile.close();
}