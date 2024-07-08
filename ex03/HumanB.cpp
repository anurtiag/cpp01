/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:10:59 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:50:33 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << w->getType() << std::endl; 
}

HumanB::HumanB(std::string name)
{
    std::cout << "HumanB constructor called" << std::endl;
    w = NULL;
    this->name = name;
}

void HumanB::setWeapon(Weapon &new_Weapon)
{
    this->w = &new_Weapon;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called" << std::endl;
}