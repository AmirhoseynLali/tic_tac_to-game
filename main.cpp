#include <iostream>

using namespace std;

int find_winer(int data[3][3])
{
    int winer ;
    winer = data[0][0] == data[1][1] && data[1][1] == data[2][2] ? data[0][0] : -1;

    if (winer == -1)
        winer = data[0][2] == data[1][1] && data[1][1] == data[2][0] ? data[0][2] : -1;
    if (winer == -1)
    {
        for (int index = 0; index < 3; index++)
        {
            if (data[index][0] == data[index][1] && data[index][1] == data[index][2])
            {
                winer = data[index][0];
                break;
            }
            if (data[0][index] == data[1][index] && data[1][index] == data[2][index])
            {
                winer = data[0][index];
                break;
            }

        }
    }
    return winer;
}

void make_game_borad(int data[3][3])
{
    for (int index = 0; index < 3; index++)
    {
        for (int index_2 = 0; index_2 < 3; index_2++)
            data[index][index_2] = 0;
    }
}

bool player_move(int data[3][3], int player_mark, int row, int column)
{
    if (data[row][column] == 0)
    {
        data[row][column] = player_mark;
        return true;
    }
    else
        return false;
}

void show_bord(int data[3][3], char player_one, char player_tow)
{
    string space = "      ";
    for (int index=0; index<3; index++)
    {
        cout << space << space <<"|";
        for (int index_2 = 0; index_2 < 3; index_2 ++)
        {

            if (data[index][index_2] == 0)
            {
                cout << space <<
            }
        }
    }
}

void brain()
{
    int table[3][3];
    make_game_borad(table);

}

int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}
