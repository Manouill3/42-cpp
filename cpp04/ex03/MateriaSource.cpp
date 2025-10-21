/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:54:38 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/21 15:05:41 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i; i < 4; i++)
        tmp[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
    for (int i = 0; i < 4; i++)
        tmp[i] = obj.tmp[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    if (this != &obj) {
        for (int i = 0; i < 4; i++)
            tmp[i] = obj.tmp[i];
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    delete[] tmp;
}

void MateriaSource::learnMateria(AMateria *obj) {
    int i;
    
    i = 0;
    while (tmp[i] && tmp[i] != NULL)
        i++;
    if (i < 4)
        tmp[i] = obj->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    if (type == "cure") {
        for (int i = 0; i < 4; i++) {
            if (tmp[i]->getType() == "cure")
                return (tmp[i]->clone());
        }
    }
    if (type == "ice") {
        for (int i = 0; i < 4; i++) {
            if (tmp[i]->getType() == "ice")
                return (tmp[i]->clone());
        }
    }
    if (type != "cure" && type != "ice")
        return 0;
}
