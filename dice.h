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

        Dice_vector(Dice_vector &vector);

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

        Dice_vector operator+(const Dice_vector &vector) ;

        int operator[](int value);

        int operator*();

        Dice_vector &operator+=(int value);

    };
}

std::istream &operator>>(std::istream &istream, DiceSpace::Dice_vector &vector);

std::ostream &operator<<(std::ostream &ostream, const DiceSpace::Dice_vector &vector);


#endif //DICE_H
