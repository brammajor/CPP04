/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:28:08 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:26:07 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &ref)
{
    std::cout << "Dog copied." << std::endl;
    *this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destroyed." << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woef." << std::endl;
}