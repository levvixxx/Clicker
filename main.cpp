#include <iostream>
#include <cstdlib>

using namespace std;

long coins = 0;
int coinsClick = 1;
int upgradeCost = 10;
string keyToClick;

void MenuPrint(){
    system("cls");
    cout << "=== CLICKER ===" << endl;
    cout << "MONEY : " << coins << endl;
    cout << "PerClick : " << coinsClick << endl;
    cout << "For upgrade : " << upgradeCost << endl; 
    cout << "PRESS U for upgrade" << endl; 
    cout << "PRESS " << keyToClick << " to click" << endl; 
}

int main() { 
    while (true){
        keyToClick = to_string(rand() % 10);
        MenuPrint();
        char ch = _getwch(); 
        if(ch == keyToClick[0]){
            coins += coinsClick;
        }
        if(ch == 'u' || ch == 'U'){
            if(coins >= upgradeCost){
                coins = coins - upgradeCost;
                upgradeCost *= 2;
                coinsClick += 1;
            }
        }
        if(ch == 'q' || ch == 'Q'){
            exit(0);
        }
    }
    return 0;
}
