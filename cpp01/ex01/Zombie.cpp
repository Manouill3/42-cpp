/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:28:26 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/22 13:59:37 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "A new zombie named " << name << " has been created" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "The zombie " << name << " has been destructed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
