/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:10 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 09:12:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

# define MIN_GRADE 150
# define MAX_GRADE 1

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat& source);
        Bureaucrat& operator=(const Bureaucrat& source);
        ~Bureaucrat();
        int GetGrade() const;
        std::string GetName() const;
        void IncrementGrade(const int increment);
        void DecrementGrade(const int decrement);
        void GradeTooHighException();
        void GradeTooLowException();
        void VeryfyGrade();
        void signForm(Form& Form);
};

std::ostream& operator<<(std::ostream& output, Bureaucrat& obj);

#endif