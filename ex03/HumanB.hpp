/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:54:56 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:49:40 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
    public:
        Weapon *w;
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &new_weapon);
        ~HumanB();
};

#endif