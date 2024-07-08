/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:42:33 by kali              #+#    #+#             */
/*   Updated: 2024/07/08 15:22:10 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    Zombie *zombie;
    int nbr;
    std::cout << "Please introduce a name: " << std::endl;
    std::cin >> name;
    std::cout << "Please introduce a number: " << std::endl;
    std::cin >> nbr;
    if ( nbr < 0)
    {
        std::cout << "invalid argument" << std::endl;
        return(1);
    }
    zombie = zombieHorde(nbr, name);
    for(int i = 0; i < nbr; i++)
    {
        std::cout << i << ": ";
        zombie[i].announce();
    }
    delete[] zombie;
    return(0);
}