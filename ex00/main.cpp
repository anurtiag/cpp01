/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:06 by kali              #+#    #+#             */
/*   Updated: 2024/07/22 05:19:24 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& output, Bureaucrat& obj)
{
    output << obj.GetName() << ", bureaucrat grade " << obj.GetGrade() << ".\n";
    return (output);
}

void    validOperations()
{
    std::cout << "\n\n\nvalid operations\n\n\n";
    try
    {
        {
            Bureaucrat a("chickpea", 42);
            std::cout << a;
            a.DecrementGrade(5);
            std::cout << a;
            a.IncrementGrade(10);
            std::cout << a;
        }
        {
            Bureaucrat b;
            std::cout << b;
            b.DecrementGrade(10);
            std::cout << b;
            b.IncrementGrade(5);
            std::cout << b;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    invalidConstructor()
{
    std::cout << "\n\n\ninvalid constructor\n\n\n";
    try
    {
        Bureaucrat a("chickpea", -5);
        std::cout << a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("potato", 500);
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    invalidOperations()
{
    std::cout << "\n\n\ninvalid operations\n\n\n";
    try
    {
        Bureaucrat a;
        std::cout << a;
        a.IncrementGrade(5);
        std::cout << a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("chickpea", 150);
        std::cout << b;
        b.DecrementGrade(50);
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    validOperations();
    invalidConstructor();
    invalidOperations();
    return(0);
}