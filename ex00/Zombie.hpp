/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:56:56 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/07 15:51:01 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


//class
class Zombie
{
private:
    std::string name;
    
public:
    void announce(void);
    Zombie(std::string name);
};

//functions
void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif