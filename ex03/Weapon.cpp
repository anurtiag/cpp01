/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:04:30 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/10 11:11:42 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    const std::string &typeref = type;
    return(typeref);
}

void Weapon::setType(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}