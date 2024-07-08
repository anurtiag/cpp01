/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:40:57 by kali              #+#    #+#             */
/*   Updated: 2024/07/08 15:20:34 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
       zombie[i] = Zombie(name);
    return(zombie);
}
