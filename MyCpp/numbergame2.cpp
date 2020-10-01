#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
bool valid = false;
int A, B;
void correctRangeInput(char ch) ;
void correctValidInput(int test1, int test2);

int main () {
    // all's assignment :
    int all[5040][4];
    int t = 0, i, j, k, l;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            for (k = 0; k < 9; k++) {
                for (l = 0; l < 9; l++) {
                    if (i != j && i != k && i != l && j != k && j != l && k != l) {
                        all[t][0] = i;
                        all[t][1] = j;
                        all[t][2] = k;
                        all[t][3] = l;
                        t++;
                    }
                }
            }
        }
    }
    // possibleAns's assignment :
    bool possibleAns[5040];
    for (i = 0; i < 5040; i++) {
        possibleAns[i] = true ;
    }
    // generate the first guess number :
    int guess[4];
    srand( time (NULL) );
    int random;
    random = rand() % 5040;
    for (i = 0; i < 4; i++) {
        guess[i] = all[random][i];
        cout << guess[i];
    }
    cout << endl;

    bool again = true;
    label :                             // When input is 4A0B, it will goto this mark.
    while ( again == 1 ) {
        while ( true ) {
            // input for player :
            correctRangeInput('A');
            if (A > 4 || A < 0) {
                cout << "You have a wrong input." << endl;
                correctRangeInput('A');
            }
            correctRangeInput('B');
            if (B > 4 || B < 0) {
                cout << "You have a wrong input." << endl;
                correctRangeInput('B');
            }
            correctValidInput(A, B);
            if (valid == 1){
                break;
            }
        }

        // Whether win or not! Break the whole while.
        if (A == 4 && B == 0){
            again = false;
            goto label;
        }

        //delete impossible answers
        // for A :
        int tempA = A;
        for (i = 0; i < 5040; i++) {
            for (j = 0; j < 4; j++) {
                if (all[i][j] - guess[j] == 0) {
                    tempA--;
                }
            }
            if (tempA != 0) {
                possibleAns[i] = false;
            }
            tempA = A;
        }
        // for B :
        int tempB = B;
        for (i = 0; i < 5040; i++) {
            for (j = 0; j < 4; j++) {
                for (k = 0; k < 4; k++) {
                    if ((possibleAns[i] == 1) && (all[i][j] == guess[k]) && (j != k)) {
                        tempB--;
                    }
                }
            }
            if (tempB != 0) {
                possibleAns[i] = false;
            }
            tempB = B;
        }

        // output for next guess
        for (i = 0; i < 5040; i++) {
            if ((i == 5039) && (possibleAns[i] == 0)){
                cout << "You might not know the rule because there is no possible answer." << endl;
                again = false;
            }
            if (possibleAns[i] == 1) {
                for (j = 0; j < 4; j++) {
                    guess[j] = all[i][j];
                    cout << guess[j];
                }
                cout << endl;
                break;
            }
        }
    }
    cout << "HA! HA!"<< endl;
    cout << "How amazing I am.";
    return 0;
}

//function :

void correctRangeInput(char ch) {
    cout << ch << ": " << endl;
    int test;
    cin >> test;
    if (ch == 'A') {
        A = test;
    } else {
        B = test;
    }
    if (test > 4 || test < 0) {
        cout << "You have a wrong input." << endl;
        correctRangeInput(ch);
    }
}
void correctValidInput(int test1, int test2){
    if ((test1 + test2 )> 4 || (test1 + test2 < 0)){
        cout << "Are you kidding me ?" << endl;
        cout << "You have a wrong input." << endl;
        valid = false;
    }else{
        valid = true;
    }
}
