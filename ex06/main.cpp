/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:11:52 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/12 13:42:28 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl Karen;
    std::string value;

    if (argc != 2)
    {
        std::cerr << "Bad arguments :(" << std::endl;
        return (1);
    }
    value = argv[1];
    Karen.complain(value);
    return (0);
}