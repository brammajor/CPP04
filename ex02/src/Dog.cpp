/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:28:08 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 12:25:45 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &ref)
{
    std::cout << "Dog copied with new brain." << std::endl;
    *this = ref;
    this->brain = new Brain();
}

Dog &Dog::operator=(const Dog &ref)
{
    if (this != &ref)
    {
        this->type = ref.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain();
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destroyed." << std::endl;
    delete this->brain;
}

void    Dog::makeSound() const
{
    std::cout << "Woef." << std::endl;
}
