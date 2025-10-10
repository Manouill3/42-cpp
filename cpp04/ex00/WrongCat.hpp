/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:27:54 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 10:28:49 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public :

    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat &obj);
    ~WrongCat();

    void makeSound() const;
};

#endif