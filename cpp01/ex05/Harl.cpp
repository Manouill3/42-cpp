/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:09:34 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/24 19:18:54 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
    std::cout << "DEBUG : Here is some context !";
}

void Harl::info(void) {
    std::cout << "INFO : This message inform you !";
}

void Harl::warning(void) {
    std::cout << "WARNING : This message warn you !";
}

void Harl::error(void) {
    std::cout << "ERROR : This is an error !";
}

void Harl::complain(std::string level) {
    Harl *ptr(void) {debug, info, warning, error};
}
