/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:42:33 by kali              #+#    #+#             */
/*   Updated: 2024/06/08 06:32:54 by kali             ###   ########.fr       */
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
    zombie = zombieHorde(nbr, name);
    for(size_t i = 0; i < nbr; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
    return(0);
}