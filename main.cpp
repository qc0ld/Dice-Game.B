#include <iostream>
#include "handle.h"
#include "dice.h"
#include "dialog.h"

using namespace std;

void menu() {
    cout << "1. Insert dice" << endl;
    cout << "2. Remove dice" << endl;
    cout << "3. Display dices" << endl;
    cout << "4. Throw dices" << endl;
    cout << "5. Find dice" << endl;
    cout << "6. Sum all dices" << endl;
    cout << "7. Check for coincidences" << endl;
    cout << "8. Remove all dices" << endl;
    cout << "9. Add a dice with value" << endl;
    cout << "10. Test operators" << endl;
    cout << "0. Exit" << endl;
}

using namespace Dialog;

int main() {
    DiceSpace::Dice_vector dice_vector(MAX_SIZE);

    void (*foo[])(DiceSpace::Dice_vector &) = {nullptr, insert_dice, remove_dice, display_dice, throw_dice, find_dice,
                                               sum_all_dices, check_for_coincidences, remove_all_dices,
                                               insert_with_value, test_operators};
    while (1) {
        menu();
        int number = read_menu_int(">");
        if (number == 0) {
            break;
        }
        foo[number](dice_vector);
    }
    return 0;
}