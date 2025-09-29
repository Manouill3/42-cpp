/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:22:14 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/25 13:50:44 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
    std::cout << "DEBUG : Here is some context !" << std::endl;
}

void Harl::info(void) {
    std::cout << "INFO : This message inform you !" << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING : This message warn you !" << std::endl;
}

void Harl::error(void) {
    std::cout << "ERROR : This is an error !" << std::endl;
}

void Harl::complain(std::string level) {
    int index;
    
    index = 4;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++) {
        if (levels[i] == level)
            index = i;
    }
    
    switch (index) {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default :
            std::cout << "Probably an insignifiant problem" << std::endl;
    }
}
