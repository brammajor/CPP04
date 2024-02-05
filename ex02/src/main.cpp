/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:06:01 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 12:29:15 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    Animal* animals[8];
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << std::endl;
        animals[i] = new Dog();
        std::cout << i + 4 << std::endl;
        animals[i + 4] = new Cat();
    }
    for (int i = 0; i < 8; i++)
    {
        std::cout << i << std::endl;
        delete animals[i];
    }

    return 0;
}