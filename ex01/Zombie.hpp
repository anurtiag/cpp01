/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:41:00 by kali              #+#    #+#             */
/*   Updated: 2024/06/08 06:31:22 by kali             ###   ########.fr       */
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
    Zombie();
};

//functions
Zombie *zombieHorde(int N, std::string name);

#endif