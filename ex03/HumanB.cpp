/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:10:59 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/11 12:09:07 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << w->getType() << std::endl; 
}

HumanB::HumanB(std::string name) : w(nullptr)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon *new_Weapon)
{
    w = new_Weapon;
}