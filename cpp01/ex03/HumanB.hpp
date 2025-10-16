/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:36:29 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB {
    
private :

    std::string name;
    Weapon *weapon;
    
public :

    HumanB(std::string name);
    ~HumanB(void);

    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif