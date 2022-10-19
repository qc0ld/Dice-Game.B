#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <vector>
#include <ctime>

#define MAX_SIZE 10

using namespace std;



namespace DiceSpace {
    class Dice_vector {
    private:
        int max_size;
        int amount;
        int dice_vector[MAX_SIZE];

    public:

        Dice_vector(int n);

        int get_max_size() const;

        int get_value(int number) const;

        int get_amount() const;

        void insert_value(int value);

        void throw_dice();

        void insert_dice();

        void remove_dice(int number);

        void remove_all_dices();

        int find_dice(int number) const;

        int sum_all_dices() const;

        int check_for_coincidences() const;

        int operator[](int value) {
            return dice_vector[value - 1];
        }

        int operator*() {
            return sum_all_dices();
        }

        Dice_vector &operator+=(int value) {
            insert_dice();
            insert_value(value);
            return *this;
        }

        ~Dice_vector();
    };
}


#endif //DICE_H
