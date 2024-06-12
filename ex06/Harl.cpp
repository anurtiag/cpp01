/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:10:55 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/12 13:42:39 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt putenough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    auto key = map.find(level);
    if(key == map.end())
    {
        std::cerr << ERROR_MSG << std::endl;
        return ;
    }
    std::cout << "[" << key->first << "]" << std::endl;
    for(; key != map.end(); ++key)
        (this->*key->second)();
}

Harl::Harl()
{
    this->map["DEBUG"] = &Harl::debug;
    this->map["INFO"] = &Harl::info;
    this->map["WARNING"] = &Harl::warning;
    this->map["ERROR"] = &Harl::error;
}