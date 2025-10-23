/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:54:38 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/23 15:41:40 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        stock[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
    for (int i = 0; i < 4; i++)
        stock[i] = obj.stock[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    if (this != &obj) {
        for (int i = 0; i < 4; i++)
            stock[i] = obj.stock[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (stock[i] != NULL) {
            delete stock[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria *obj) {
    if (!obj)
        return ;
    for (int i = 0; i < 4; i++) {
        if (stock[i] == NULL) {
            stock[i] = obj;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    if (type == "cure") {
        for (int i = 0; i < 4; i++) {
            if (stock[i]->getType() == "cure")
                return (stock[i]->clone());
        }
    }
    if (type == "ice") {
        for (int i = 0; i < 4; i++) {
            if (stock[i]->getType() == "ice")
                return (stock[i]->clone());
        }
    }
    return 0;
}
