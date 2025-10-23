/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:49:08 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/22 13:21:41 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap one("one");
    ClapTrap two("two");

    std::cout << std::endl;
    one.attack("two");
    two.takeDamage(10);
    two.beRepaired(10);
    one.takeDamage(9);
    one.beRepaired(10);
    std::cout << std::endl;
}