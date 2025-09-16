/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:26:30 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/16 12:58:45 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string Contact::get_first_name(void) {return (first_name);}
std::string Contact::get_last_name(void) {return (last_name);}
std::string Contact::get_nickname(void) {return (nickname);}
std::string Contact::get_number(void) {return (number);}
std::string Contact::get_secret(void) {return (secret);}

void Contact::set_first_name(std::string a) {first_name = a;}
void Contact::set_last_name(std::string a) {last_name = a;}
void Contact::set_nickname(std::string a) {nickname = a;}
void Contact::set_number(std::string a) {number = a;}
void Contact::set_secret(std::string a) {secret = a;}

void    Contact::new_contact(void) {
    set_first_name(get_input("First name : "));
    set_last_name(get_input("Last name : "));
    set_nickname(get_input("Nickname : "));
    set_number(get_input("Phone number : "));
    set_secret(get_input("Darkest secret : "));
}

std::string get_input(std::string msg) {
    std::string input;
    
    while (1) {
        std::cout << msg;
        std::cin >> input;
        if (!input.empty())
            break;
    }
    return (input);
}
