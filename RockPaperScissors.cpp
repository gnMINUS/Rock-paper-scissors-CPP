#include <iostream>
#include <random>
using namespace std;

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(1, 3);

    // 1 = rock, 2 = paper, 3 = scissors
    int opponent = distribution(gen);
    int x;
    cout << "Please type 1 for rock, 2 for paper, or 3 for scissors. \n 2 beats 1 \n 3 beats 2 \n 1 beats 3\n";
    cin >> x;
    string x_string = to_string(x);
    string op_string = to_string(opponent);

    if (x > 3)
    {
        cout << "Stop it.";
        return 0;
    }

    if (opponent == x)
    {
        cout << "Draw!";
        return 0;
    }
    if ((opponent == 1 && x == 2) or (opponent == 2 && x == 3) or (opponent == 3 && x == 1))
    {

        cout << "Victory! \n You picked: " + x_string + "\n PC picked: " + op_string;
        return 0;
    }
    else
    {
        cout << "Defeat. \n You picked: " + x_string + "\n PC picked: " + op_string;
        return 0;
    }
}