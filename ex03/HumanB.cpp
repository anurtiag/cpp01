/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:10:59 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/10 16:17:27 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << w.getType() << std::endl; 
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}