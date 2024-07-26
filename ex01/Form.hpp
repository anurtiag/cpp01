/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:10 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 09:40:52 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

# define MIN_GRADE 150
# define MAX_GRADE 1

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int signGrade;
        const int execGrade;
        bool isSigned;
    public:
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form& source);
        Form& operator=(const Form& source);
        ~Form();
        int GetSignGrade() const;
        int GetExecGrade() const;
        bool GetIsIsgned() const;
        std::string GetName() const;
        void IncrementGrade(const int increment);
        void DecrementGrade(const int decrement);
        void GradeTooHighException();
        void GradeTooLowException();
        void VeryfyForm();
        void beSigned(Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& output, Form& obj);

#endif