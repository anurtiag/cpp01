/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 07:23:56 by kali              #+#    #+#             */
/*   Updated: 2024/06/08 07:35:46 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "str dir: " << &str << " ptr dir: " << stringPTR << " ref dir: " << &stringREF << std::endl;
    std::cout << "str content: " << str << " ptr content: " << *stringPTR << " ref content: " << stringREF << std::endl;
    return(0);
}
