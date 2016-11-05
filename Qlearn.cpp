#include "Qlearn.h"

Qlearner::Qlearner(int gridsize){
    std::vector<double> zeros(4,0.0); //zeros is variable name and arg is for constructor 
    for(int x = 0; x<gridsize; x++){
        for(int y = 0; y<gridsize; y++){
            qtable[State(x,y)] = zeros; //4 values for 4 actions
            //adding to dictionary
        }    
    }
//
//    for(auto s: qtable){  //iterator for C++11
//    //s.first gives state, s.second give vector
//        std::cout << s.first.x << '\t' << s.first.y << '\t';
//        for(auto q: s.second){
//            std::cout << q << '\t';
//        }
//        std::cout << '\n';
//    }
//
}

int main(){
    Qlearner model(MAX_GRID); // MAX_GRID comes from mdp-simulation.h
    return 0;
}
