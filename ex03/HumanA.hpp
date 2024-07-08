/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:48:24 by anurtiag          #+#    #+#             */
/*   Updated: 2024/07/08 16:51:08 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
    public:
        Weapon *w;
        HumanA(std::string name, Weapon &weapon);
        void attack();
        ~HumanA();
};

#endif