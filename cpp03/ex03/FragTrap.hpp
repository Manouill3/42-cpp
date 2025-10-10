/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:00:14 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/09 14:02:56 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public :

    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    ~FragTrap();

    void attack(const std::string &target);
    void highFivesGuys();

protected :

    static const int def_hit_pts = 100;
    static const int def_atk_damage = 30;
};

#endif