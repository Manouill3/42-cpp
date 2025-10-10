/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:29:48 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 10:32:34 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    
protected :

    std::string type;

public :

    WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator=(const WrongAnimal &obj);
    ~WrongAnimal();

    void setType(std::string type);
    std::string getType() const;
    
    void makeSound() const;
};


#endif