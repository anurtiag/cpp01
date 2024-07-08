/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:39:42 by kali              #+#    #+#             */
/*   Updated: 2024/07/08 15:18:40 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    name = "default";
    std::cout << "zombie default constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie constructor called for " << name << " zombie" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie destructor called" << std::endl;
}
