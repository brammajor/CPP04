/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:43:34 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:27:12 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal constructed." << std::endl;
}

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
    std::cout << "WrongAnimal copied." << std::endl;
    *this = ref;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &ref)
{
    std::cout << "WrongCat copied." << std::endl;
    *this = ref;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WRONG animal sound." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WRONG miauw." << std::endl;
}