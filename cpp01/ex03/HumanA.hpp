/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:59 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:36:06 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    
private :

    std::string name;
    Weapon &weapon;
    
public :

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void attack(void);
};

#endif