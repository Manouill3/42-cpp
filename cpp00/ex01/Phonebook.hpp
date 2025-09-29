/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:53:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/29 14:36:48 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {

private :
    
    Contact book[8];
    int oldest;

public :
    
    Phonebook();
    ~Phonebook();

    void    set_oldest(int old);
    int     get_oldest(void);
    
    void    add_contact(void);
    bool    search_contact(void);
    int get_booksize(Contact book[]);
};

void    print_all(Contact contact);
void    print_header(void);
int look_for_char(std::string index);

#endif //CONTACT_HPP
