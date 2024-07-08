/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:48:15 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:51:25 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << w->getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
    this->w = &weapon;
    this->name = name;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}