#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>    

class Simulator {
private:
std::string mode;       // include power and flex plays
float payoutRatio;      // how much you will get paid 
int numPicks;           // how many picks you have in your lineup
float singlehitOdds;    // The probability of a single hit
float lineupHit;        // The probability of the whole lineup hitting
float bettingAmount;    // Amount of money you put down


public:
// Getters
std::string getMode() const;
float getPayoutRatio() const;
int getNumPicks() const;
float getsinglehitOdds() const;
float getBettingAmount() const;


// Setters
void setMode(std::string s);
void setPayoutRatio(float f);
void setNumPicks(int n);
void setsinglehitOdds(float f);
void setBettingAmount(float f);


// Display values
void printMode() const;
void printPayoutRatio() const;
void printNumPicks() const;
void printsinglehitOdds() const;
void printBettingAmount() const;

// Calculate numbers
float powerOdds() const;
float flexOdds() const;
float calculatePower() const;
float calculateFlex() const;
bool determineWin() const;




};


#endif