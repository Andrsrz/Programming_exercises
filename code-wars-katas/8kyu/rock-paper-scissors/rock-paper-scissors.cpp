/*
 * Code Wars - Kata : Rock Paper Scissors!
*/

#include <iostream>
#include <string>

const std::string P1W = "Player 1 won!";
const std::string P2W = "Player 2 won!";
const std::string DRAW = "Draw!";
const std::string ROCK = "rock";
const std::string SCISSORS = "scissors";
const std::string PAPER = "paper";

// Function declaration
std::string rps(std::string, std::string);

int main(){
	std::cout << "Player 1 : " << ROCK << std::endl;
	std::cout << "Player 2 : " << PAPER << std::endl;
	std::cout << rps(ROCK, PAPER) << std::endl;

	return 0;
}

// Function implementation
std::string rps(std::string p1, std::string p2){
    if( p1 == p2 ){
		return DRAW; // If strings are equal then it's a draw
    }else{
		if( ((p1 == ROCK) && (p2 == SCISSORS)) ||
			((p1 == SCISSORS) && (p2 == PAPER)) ||
			((p1 == PAPER) && (p2 == ROCK)) ){
			return P1W; // Conditions to player 1 to win!
		}else if( ((p1 == SCISSORS) && (p2 == ROCK)) ||
			((p1 == PAPER) && (p2 == SCISSORS)) ||
			((p1 == ROCK) && (p2 == PAPER)) ){
			return P2W; // Conditions to player 2 to win!
		}
	}
    
	return "";
}
