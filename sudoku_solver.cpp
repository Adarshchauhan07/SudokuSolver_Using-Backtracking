#include <bits/stdc++.h>
using namespace std;
class FOURxFOUR
{
public:
    vector<vector<int>> vtr{
        {1, 2, 3, 0},
        {0, 4, 0, 0},
        {0, 1, 4, 0},
        {4, 3, 0, 0}};
};

class NINExNINE
{
public:
    vector<vector<int>> vtr{
        {1, 0, 0, 4, 0, 6, 0, 8, 0},
        {7, 0, 9, 1, 2, 3, 4, 5, 6},
        {4, 0, 0, 0, 0, 9, 1, 0, 3},
        {0, 0, 0, 8, 0, 5, 0, 6, 0},
        {0, 9, 0, 3, 0, 2, 8, 0, 5},
        {8, 4, 5, 0, 9, 0, 3, 1, 2},
        {0, 3, 1, 5, 7, 4, 6, 9, 8},
        {9, 0, 8, 0, 3, 0, 5, 0, 4},
        {0, 7, 0, 9, 0, 8, 0, 3, 0}};
};

class SIXTEENxSIXTEEN
{
public:
    vector<vector<int>> vtr{
        {0, 0, 2, 0, 4, 6, 0, 8, 9, 0, 11, 0, 13, 0, 0, 0},
        {0, 0, 0, 12, 0, 1, 2, 0, 13, 0, 15, 0, 0, 0, 0, 0},
        {0, 6, 0, 8, 13, 0, 15, 0, 5, 0, 2, 0, 9, 0, 11, 12},
        {13, 14, 0, 16, 0, 0, 11, 0, 4, 0, 0, 0, 0, 1, 2, 3},
        {2, 0, 3, 0, 0, 4, 0, 6, 0, 9, 0, 10, 15, 0, 16, 13},
        {11, 9, 14, 10, 2, 5, 3, 0, 0, 0, 0, 0, 0, 4, 8, 6},
        {7, 4, 0, 6, 0, 0, 16, 0, 2, 5, 3, 1, 11, 9, 14, 10},
        {0, 12, 0, 13, 0, 9, 0, 0, 7, 4, 8, 0, 2, 0, 3, 1},
        {1, 3, 0, 2, 0, 8, 0, 7, 0, 0, 9, 0, 0, 0, 13, 14},
        {10, 0, 9, 0, 1, 3, 0, 2, 0, 16, 0, 0, 6, 0, 4, 7},
        {0, 0, 0, 7, 12, 0, 13, 14, 1, 0, 5, 2, 0, 15, 9, 11},
        {0, 0, 0, 14, 10, 0, 9, 11, 0, 8, 0, 7, 0, 0, 0, 2},
        {3, 2, 0, 0, 0, 0, 6, 4, 0, 11, 10, 0, 0, 0, 12, 15},
        {14, 0, 0, 0, 3, 2, 1, 0, 16, 0, 12, 0, 8, 0, 6, 4},
        {0, 0, 0, 4, 0, 13, 0, 15, 0, 2, 0, 5, 0, 11, 10, 9},
        {0, 0, 0, 0, 0, 11, 0, 9, 0, 7,0, 4, 0, 0, 1, 0}
    };
};

class TWENTYFIVExTWENTYFIVE
{
public:
    vector<vector<int>> vtr{
        {0 ,1, 2, 3, 4, 5, 6, 7, 8, 24, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23},
        {9, 24, 10, 11, 12, 25, 13, 20, 19, 23, 15, 17, 16, 18, 22, 5, 6, 7, 8, 21, 1, 2, 3, 4, 14},
        {17, 16, 18, 22, 19, 1, 2, 3, 4, 9, 25, 14, 20, 21, 24, 10, 11, 12, 13, 23, 5, 6, 7, 8, 15},
        {5, 6, 7, 8, 13, 14, 15, 17, 18, 21, 1, 2, 3, 4, 23, 25, 19, 22, 20, 24, 9, 10, 11, 12, 16},
        {14, 15, 20, 23, 21, 10, 11, 12, 16, 22, 5, 6, 7, 8, 19, 1, 2, 3, 4, 9, 25, 13, 17, 18, 24},
        {4, 8, 19, 12, 5, 18, 25, 2, 21, 1, 16, 15, 22, 20, 10, 3, 14, 11, 23, 6, 24, 7, 9, 17, 13},
        {24, 3, 1, 18, 11, 13, 14, 9, 23, 15, 7, 25, 19, 6, 8, 20, 16, 17, 10, 12, 4, 21, 22, 2, 5},
        {2, 25, 17, 10, 15, 8, 22, 5, 24, 20, 23, 21, 12, 14, 1, 4, 7, 9, 18, 13, 3, 11, 16, 19, 6},
        {7, 14, 16, 6, 9, 3, 4, 19, 10, 17, 24, 11, 13, 2, 5, 21, 25, 15, 22, 1, 18, 12, 23, 20, 8},
        {20, 13, 22, 21, 23, 7, 12, 11, 6, 16, 3, 4, 17, 9, 18, 24, 8, 19, 2, 5, 10, 25, 14, 15, 1},
        {21, 5, 25, 1, 3, 15, 16, 23, 13, 2, 14, 20, 8, 11, 7, 17, 18, 10, 19, 4, 22, 24, 6, 9, 12},
        {23, 12, 24, 2, 6, 21, 19, 25, 7, 5, 22, 16, 10, 15, 17, 9, 1, 14, 3, 8, 20, 18, 13, 11, 4},
        {15, 9, 14, 4, 7, 24, 17, 6, 20, 11, 18, 19, 25, 23, 2, 22, 12, 13, 5, 16, 21, 1, 8, 3, 10},
        {16, 10, 11, 17, 8, 4, 1, 22, 3, 18, 21, 24, 9, 13, 12, 23, 20, 25, 6, 2, 14, 15, 5, 7, 19},
        {22, 18, 13, 19, 20, 9, 8, 10, 12, 14, 4, 1, 5, 3, 6, 15, 24, 21, 7, 11, 17, 16, 25, 23, 2},
        {3, 7, 4, 25, 1, 6, 23, 13, 11, 12, 19, 8, 15, 10, 21, 16, 22, 20, 9, 14, 2, 17, 24, 5, 18},
        {18, 17, 5, 24, 2, 16, 9, 15, 25, 10, 20, 7, 23, 22, 3, 6, 4, 1, 21, 19, 13, 8, 12, 14, 11},
        {19, 21, 8, 13, 10, 22, 24, 18, 17, 3, 6, 12, 14, 25, 9, 2, 23, 5, 11, 15, 7, 4, 1, 16, 20},
        {12, 20, 23, 14, 22, 2, 7, 1, 5, 4, 17, 13, 24, 16, 11, 8, 10, 18, 25, 3, 6, 19, 15, 21, 9},
        {6, 11, 15, 9, 16, 20, 21, 8, 14, 19, 2, 18, 1, 5, 4, 7, 13, 24, 12, 17, 23, 22, 10, 25, 3},
        {1, 2, 3, 5, 25, 11, 10, 4, 9, 13, 8, 22, 6, 17, 15, 18, 21, 23, 16, 20, 12, 14, 19, 24, 7},
        {8, 4, 12, 7, 24, 17, 3, 14, 22, 25, 13, 23, 18, 19, 16, 11, 5, 2, 1, 10, 15, 9, 20, 6, 21},
        {11, 19, 21, 20, 14, 12, 5, 24, 2, 6, 10, 3, 4, 7, 25, 13, 9, 8, 15, 22, 16, 23, 18, 1, 17},
        {13, 23, 6, 15, 17, 19, 18, 16, 1, 7, 11, 9, 21, 24, 20, 12, 3, 4, 14, 25, 8, 5, 2, 10, 22},
        {10, 22, 9, 16, 18, 23, 20, 21, 15, 8, 12, 5, 2, 1, 14, 19, 17, 6, 24, 7, 11, 3, 4, 13, 25}

    };
};

bool isSafe(int row, int col, vector<vector<int>> &sudoku, int val, int size)
{
    size = sqrt(size);
    for (int i = 0; i < sudoku[0].size(); i++)
    {
        if (sudoku[row][i] == val)
            return false;
        if (sudoku[i][col] == val)
            return false;
        if (sudoku[size * (row / size) + i / size][size * (col / size) + i % size] == val)
        {
            return false;
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>> &sudoku, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sudoku[i][j] == 0)
            {
                for (int val = 1; val <= size; val++)
                {
                    if (isSafe(i, j, sudoku, val, size))
                    {
                        sudoku[i][j] = val;
                        bool next = solveSudoku(sudoku, size);
                        if (next)
                        {
                            return true;
                        }
                        else
                        {
                            sudoku[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int size;
    vector<vector<int>> sudoku;
    cout << "========================================================================="
         << endl;

    cout << "------------------------------|| MINI PROJECT ||-------------------------"
         << endl;

    cout << "========================================================================="
         << endl
         << endl;

    cout << "                                                            ADARSH (CS_1)"
         << endl;

    cout << "                                                       ARYAN GUPTA (CS_1)"
         << endl;

    cout << "                                                    RISHABH SANGAL (CS_2)"
         << endl
         << endl;
    ;
    cout << "================================|| SUDOKU ||============================="
         << endl;
    char check;
    cout << "DO YOU WANT TO SOLVE SUDOKU" << endl;

    cout << "press Y (TO YES...)" << endl;

    cout << "press N (TO NO...)" << endl;

    cin >> check;

    if (check == 'y')
    {
        int input;
        cout << "PRESS 1 FOR CUSTOM INPUT"
             << endl;
        cout << "PRESS 2 FOR USER INPUT"
             << endl;
        cin >> input;

        if (input == 1)
        {
            cout << "TELL ME SIZE OF CUSTOM SUDOKU"
                 << endl;
            cout << "\tSUCH AS  4 -> 4 X 4 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  9 -> 9 X 9 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  16 -> 16 X 16 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  25 -> 25 X 25 SUDOKU"
                 << endl;
            cin >> size;
            if (size == 4)
            {
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 4X4 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                FOURxFOUR var;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }

                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 9)
            {
                NINExNINE var;
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 9X9 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] <<" ";
                    }
                    cout << endl;
                }
                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 16)
            {
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 16X16 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                SIXTEENxSIXTEEN var;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }
                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 25)
            {
                TWENTYFIVExTWENTYFIVE var;
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 25X25 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }

                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else
            {
                cout << "INVALID INPUT!!!!";
            }
        }
        else if (input == 2)
        {
            cout << "SIZE OF SUDOKU";
            cin >> size;
            cout << "INPUT SUDOKU VALUES"
                 << endl;
            for (int i = 0; i < size * size; i++)
            {
                vector<int> vtr;
                for (int i = 0; i < size * size; i++)
                {
                    int val;
                    cin >> val;
                    vtr.push_back(val);
                }
                sudoku.push_back(vtr);
            }
            if (solveSudoku(sudoku, size))
            {
                cout << "========================================================================="
                     << endl;
                cout << endl
                     << "SOLUTION OF SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < sudoku.size(); i++)
                {
                    for (int j = 0; j < sudoku[i].size(); j++)
                    {
                        cout << sudoku[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "NO SOLUTION!!!" << endl;
            }
        }
    }
    else if (check == 'n')
    {
        cout << "\n\n\nTHANKYOU......HAVE A NICE DAY :) " << endl;
        return 0;
    }
    return 0;
}