/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:32:02 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/07 15:53:19 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    Zombie *zombie;
    std::cout << "Please introduce a name: " << std::endl;
    std::cin >> name;
    zombie = newZombie(name);
    zombie->announce();
    std::cout << "Please introduce another name: " << std::endl;
    std::cin >> name;
    randomChump(name);
    return(0);
}