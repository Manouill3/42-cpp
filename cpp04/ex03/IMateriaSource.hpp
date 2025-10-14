/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:10:15 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/14 14:00:14 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

public :

    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *obj) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif