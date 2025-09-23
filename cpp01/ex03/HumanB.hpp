/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/23 11:07:36 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
