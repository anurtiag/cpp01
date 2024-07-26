/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:06 by kali              #+#    #+#             */
/*   Updated: 2024/07/23 06:11:10 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

// void    validOperations()
// {
//     std::cout << "\n\n\nvalid operations\n\n\n";
//     try
//     {
//         {
//             Bureaucrat a("chickpea", 42);
//             std::cout << a;
//             a.DecrementGrade(5);
//             std::cout << a;
//             a.IncrementGrade(10);
//             std::cout << a;
//         }
//         {
//             Bureaucrat b;
//             std::cout << b;
//             b.DecrementGrade(10);
//             std::cout << b;
//             b.IncrementGrade(5);
//             std::cout << b;
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

// void    invalidConstructor()
// {
//     std::cout << "\n\n\ninvalid constructor\n\n\n";
//     try
//     {
//         Bureaucrat a("chickpea", -5);
//         std::cout << a;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         Bureaucrat b("potato", 500);
//         std::cout << b;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

// void    invalidOperations()
// {
//     std::cout << "\n\n\ninvalid operations\n\n\n";
//     try
//     {
//         Bureaucrat a;
//         std::cout << a;
//         a.IncrementGrade(5);
//         std::cout << a;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         Bureaucrat b("chickpea", 150);
//         std::cout << b;
//         b.DecrementGrade(50);
//         std::cout << b;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

// void sign()
// {
//     std::cout << "\n\n\nsign\n\n\n";
//     Form f;
//     Bureaucrat a;
//     std::cout << a << f;
//     a.signForm(f);
//     std::cout << a << f;
//     Form form("chickpea", 42, 42);
//     Bureaucrat b("potato", 77);
//     b.signForm(form);
// }

int main()
{
    // validOperations();
    // invalidConstructor();
    // invalidOperations();
    // sign();
    ShrubberyCreationForm a("chickpea");
    a.action();
    return(0);
}