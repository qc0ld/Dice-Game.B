#include "dice.h"
#include <iostream>


namespace DiceSpace {
    Dice_vector::Dice_vector(int n) {
        amount = 0;
        for (int i = 0; i < MAX_SIZE; ++i) {
            dice_vector[i] = 0;
        }
    }

    int Dice_vector::get_max_size() const {
        return MAX_SIZE;
    }

    int Dice_vector::get_value(int number) const {
        return dice_vector[number];
    }

    int Dice_vector::get_amount() const {
        return amount;
    }

    void Dice_vector::throw_dice() {
        srand(time(NULL));
        for (int i = 0; i < amount; ++i) {
            if (dice_vector[i] != 0) {
                dice_vector[i] = rand() % 6 + 1;
            }
        }
    }

    void Dice_vector::insert_dice() {
        srand(time(NULL));
        dice_vector[amount] = rand() % 6 + 1;
        amount++;
    }

    void Dice_vector::remove_dice(int number) {
        int j = 0;
        for (int i = 0; i < MAX_SIZE; i++) {
            if (i == number - 1) {
                i++;
                dice_vector[j] = dice_vector[i];
            } else {
                dice_vector[j] = dice_vector[i];
            }
            j++;
        }
        dice_vector[MAX_SIZE - 1] = 0;
        amount--;
    }

    void Dice_vector::remove_all_dices() {
        amount = 0;
        for (int i = 0; i < MAX_SIZE; ++i) {
            dice_vector[i] = 0;
        }
    }

    int Dice_vector::find_dice(int number) const {
        return dice_vector[number - 1];
    }

    int Dice_vector::sum_all_dices() const {
        int sum = 0;
        for (int i = 0; i < amount; ++i) {
            sum = sum + dice_vector[i];
        }
        return sum;
    }

    int Dice_vector::check_for_coincidences() const {
        for (int i = 0; i < amount; ++i) {
            for (int j = 1; j < amount; ++j) {
                if (i == j) {
                    continue;
                }
                if (dice_vector[j] == dice_vector[i]) {
                    return 0;
                }
            }
        }
        return 1;
    }

}

