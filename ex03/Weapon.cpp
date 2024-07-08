/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:04:30 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:12:41 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}