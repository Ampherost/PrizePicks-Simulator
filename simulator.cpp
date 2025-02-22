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

float Simulator::getsinglehitOdds() const {
    return singlehitOdds;
}

float Simulator::getBettingAmount() const {
    return bettingAmount;
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

void Simulator::setsinglehitOdds(float f) {
    singlehitOdds = f;
}

void Simulator::setBettingAmount(float f) {
    bettingAmount = f;
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

void Simulator::printsinglehitOdds() const {
    std::cout << singlehitOdds << std::endl;
}



// Calculate Numbers
float Simulator::powerOdds() const {
    return pow(singlehitOdds, numPicks);
}




float Simulator::calculatePower() const {
    if (numPicks == 2) {
        if (determineWin) {
            return bettingAmount * 3;
        }
        else {
            return 0;
        }
    }
    else if (numPicks ==3) {
        if (determineWin) {
            return bettingAmount * 5;
        }
        else {
            return 0;
        }
    }
    else if (numPicks == 4) {
        if (determineWin) {
            return bettingAmount * 10;
        }
        else {
            return 0;
        }
    }
    else if (numPicks == 5) {
        if (determineWin) {
            return bettingAmount * 20;
        }
        else {
            return 0;
        }
    }
    else if (numPicks == 6) {
        if (determineWin) {
            return bettingAmount * 37.5;
        }
        else {
            return 0;
        }
    }
}

float Simulator::calculateFlex() const {
    
}

bool Simulator::determineWin() const {
    float lineupHitOdds = powerOdds();
    float randomValue = static_cast<float>(rand()) / RAND_MAX;  // Generate a random number between 0-1
    return randomValue < lineupHitOdds;
}