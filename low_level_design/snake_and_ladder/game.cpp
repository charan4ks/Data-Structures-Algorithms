
//Classes : Board, Player, Dice, Snakes, Ladders

#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>
#include <unordered_map>
using namespace std;

class Dice {
private:
    int number;
public:

    int rollDice(){
        return (rand() % 6) + 1;
    }

};

class Player {
private:
    int userId;
    int position;
    
public:

    int getPosition(){
        return position;
    }

    int getUserId(){
        return userId;
    }

    int move(int val, int size){
        if(val<=size) 
        position = val;
        return position;
    }

    Player(int u){
        userId = u;
        position = 0;
    }
};

class Snakes{
private:
    unordered_map<int, int> snake;

public:

    void addSnake(int start_position, int end_position){
        snake[start_position] = end_position;
        return;
    }

    int checkSnake(int position){
        if(snake.find(position) == snake.end()) return position;
        
        return snake[position];
    }

};

class Ladders{

private:
    unordered_map<int, int> ladder;

public:

    void addLadder(int start_position, int end_position){
        ladder[start_position] = end_position;
        return;
    }

    int checkLadder(int position){
        if(ladder.find(position) == ladder.end()) return position;
        
        return ladder[position];
    }

};



class Board {

private:
    

public:
    vector<Player> players;
    Dice dice;
    int curr_player;
    Snakes snakesInBoard;
    Ladders laddersInBoard;
    int size;

    void addPlayer(Player player){
        players.push_back(player);
        return ;
    }

    int checkTurn(){
        return curr_player;
    }

    int rollDice(){
       // Player* player = players[curr_player];
       cout<<"Player No: " <<curr_player;
        int position = players[curr_player].getPosition();
        cout<<" Existing Position: "<<position<<' ';
        int dice_val = dice.rollDice();
        cout<<"Dice Value: "<<dice_val;
        position += dice_val;
        position = players[curr_player].move(position, 100);
        position =  snakesInBoard.checkSnake(position);
        position =  laddersInBoard.checkLadder(position);
        cout<<" Moved to : "<<' '<<position<<endl;
        position = players[curr_player].move(position, 100);
        curr_player = (curr_player+1)%2;

        return dice_val;
    }

    Board(){
        size = 100;
        curr_player =0;
    }

    Board(int val){
        size = val;
        curr_player =0;
    }
};


int main() {
Board game;
Player p1(1);
Player p2(2);
game.addPlayer(p1);
game.addPlayer(p2);
game.snakesInBoard.addSnake(10, 5);
game.snakesInBoard.addSnake(35, 20);
game.laddersInBoard.addLadder(6, 16);
game.laddersInBoard.addLadder(15, 30);
game.laddersInBoard.addLadder(45, 60);

int input;
cin>>input;
for(int i=0; i<input; i++) game.rollDice();

cout << game.checkTurn()<<endl;
cout <<"Player 0 : "<< game.players[0].getPosition()<<endl;
cout <<"Player 1 : "<< game.players[1].getPosition()<<endl;

    return 0;
}
