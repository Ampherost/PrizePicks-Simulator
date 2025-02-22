#include "simulator.h"

// Getters
std::string Simulator::getMode() const {
    return mode;
}

float Simulator::getPayoutRatio() const {
    return payoutRatio;
}

int Simulator::getNumPicks() const {
    return numPicks;
}

float Simulator::getLineupOdds() const {
    return lineupOdds;
}



// Setters
void Simulator::setMode(std::string s) {
    mode = s;
}

void Simulator::setPayoutRatio(float f) {
    payoutRatio = f;
}

void Simulator::setNumPicks(int n) {
    numPicks = n;
}

void Simulator::setLineupOdds(float f) {
    lineupOdds = f;
}



// Display Values
void Simulator::printMode() const {
    std::cout << mode << std::endl;
}

void Simulator::printPayoutRatio() const {
    std::cout << payoutRatio << std::endl;
}

void Simulator::printNumPicks() const {
    std::cout << numPicks << std::endl;
}

void Simulator::printLineupOdds() const {
    std::cout << lineupOdds << std::endl;
}