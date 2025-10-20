/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:24 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 14:56:41 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {

public :

    Cure(std::string name);
    Cure(const Cure &obj);
    Cure &operator=(const Cure &obj);
    ~Cure();

    AMateria *clone() const;
    void use(ICharacter& target);
};

#endif