/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:53:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/16 12:54:50 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook {

private :
    
    Contact book[8];

public :
    
    Phonebook();
    ~Phonebook();

    void    add_contact(void);
    // void    Phonebook::SEARCH();
};
