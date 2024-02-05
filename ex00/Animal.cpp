/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:05:55 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:24:46 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal constructed." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(const Animal &ref)
{
    std::cout << "Animal copied." << std::endl;
    *this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << "Generic animal sound." << std::endl;
}