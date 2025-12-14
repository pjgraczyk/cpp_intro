#include "guessing_game.h"

int main() {
    int random_number = get_random_number();
    int guessed_number;
    do {
        prompt_for_number();
        guessed_number = get_number_from_stdin();

        if (guessed_number > random_number) {
            print_too_high_guess();
        } else if (guessed_number < random_number) {
            print_too_low_guess();
        }
    } while (guessed_number != random_number);
    print_good_guess();
    return 0;
}
