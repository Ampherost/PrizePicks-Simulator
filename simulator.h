#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <iostream>
#include <string>

class Simulator {
private:
std::string mode;       // include power and flex plays
float payoutRatio;      // how much you will get paid 
int numPicks;           // how many picks you have in your lineup
float lineupOdds;       // The probability of a single hit


public:
// Getters
std::string getMode() const;
float getPayoutRatio() const;
int getNumPicks() const;
float getLineupOdds() const;


// Setters
void setMode(std::string s);
void setPayoutRatio(float f);
void setNumPicks(int n);
void setLineupOdds(float f);


// Display values
void printMode() const;
void printPayoutRatio() const;
void printNumPicks() const;
void printLineupOdds() const;

// Calculate numbers
float calculatePower() const;
float calculateFlex() const;




};


#endif