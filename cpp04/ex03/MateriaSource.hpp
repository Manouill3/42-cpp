/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:57 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/21 10:27:00 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

protected :

    AMateria *tmp[4];
    
public :

    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator=(const MateriaSource &obj);
    ~MateriaSource();

    void learnMateria(AMateria *obj);
    AMateria *createMateria(std::string const &type);
};

#endif