/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:04:33 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:12:49 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        std::string getType();
        void setType(std::string type);
        Weapon(std::string type);
};

#endif