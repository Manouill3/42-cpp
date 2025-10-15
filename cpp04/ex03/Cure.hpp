/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:24 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 14:28:48 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria, public Character {

public :

    Cure(std::string name);
    Cure(const Cure &obj);
    Cure &operator=(const Cure &obj);
    ~Cure();

    void use(ICharacter& target);
    Cure *clone();
};

#endif