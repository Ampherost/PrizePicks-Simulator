#include "simulator.h"

using namespace std;

int main() {
    Simulator simulator;
    srand(static_cast<unsigned int>(time(0)));  // Seed random generator

    int betAmount;
    string mode;
    int numPicks;
    
    cout << "Enter a betting amount" << endl;
    cin >> betAmount;

    cout << "Enter a mode to play, Power or Flex" << endl;
    cin >> mode;

    cout << "Enter the number of picks in your lineup" << endl;
    cin >> numPicks;

    simulator.setBettingAmount(betAmount);
    simulator.setMode(mode);
    simulator.setNumPicks(numPicks);
    simulator.setsinglehitOdds(0.6);

    cout << "You have Won: " << simulator.calculatePower() << " Congratulations" << endl;





    return 0;
}