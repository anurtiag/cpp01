/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:48:15 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/10 16:09:38 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << w.getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon w): w(w)
{
    this->name = name;
}
