/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:00:14 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/22 14:02:17 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :

    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    ~FragTrap();

    void attack(const std::string &target);
    void highFivesGuys();
};

#endif