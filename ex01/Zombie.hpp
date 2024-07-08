/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:41:00 by kali              #+#    #+#             */
/*   Updated: 2024/07/08 15:18:46 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie
{
private:
    std::string name;
    
public:
    void announce(void);
    Zombie(std::string name);
    Zombie();
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif