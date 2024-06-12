/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:03:11 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/12 13:42:21 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <map>

# define ERROR_MSG "[ Probably complaining about insignificant problems ]"

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        std::map<std::string, void (Harl::*)(void)> map;
    public:
        void complain(std::string level);
        Harl();
};



#endif