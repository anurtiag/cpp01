/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:59:40 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/11 10:14:37 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon w("patata");
    HumanA a("bob", w);
    HumanB b("Jim");
    b.setWeapon(&w);
    a.attack();
    b.attack();
    return(0);
}