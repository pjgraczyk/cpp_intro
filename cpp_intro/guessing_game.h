//
//  guessing_game.h
//  cpp_intro
//
//  Created by Przemysław Graczyk on 14/12/2025.
//
#include <iostream>
#include <random>

void prompt_for_number()
{
    std::cout << "Please guess the number between 0 and 100. Try your luck!\n";
}

int get_number_from_stdin()
{
    int guessed_number;
    std::cin >> guessed_number;
    return guessed_number;
}

void print_guessed_number(int &x)
{
    std::cout << "You have guessed number: " << x << "\n";
}

void print_too_high_guess()
{
    std::cout << "You have choosen the number that is too high!\n";
}

void print_too_low_guess()
{
    std::cout << "You have choosen the number that is too low!\n";
}

void print_good_guess()
{
    std::cout << "You have choosen the correct number! You won!\n";
}


int get_random_number()
{
    std::srand((unsigned int) std::time(0));
    int random_number = std::rand() % 100;
    return random_number;
}
