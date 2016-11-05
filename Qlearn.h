//constructing unordered_maps
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "mdp-simulation.h" 

namespace std{ //just so i don't have to write std::
    template<>
    struct hash<State>{
        //inline declares and defines function together | size_t is return type which is an int or something | overloading the parentheses 'operator' which is operator() | pass an argument of type state and & is the address of where that value is | const inside says the value passed cant change | const outside says where this function was called from, anything in larger scope cannot be changed
        inline std::size_t operator()(const State & s) const{
            return s.x*23413584+s.y;
        }
    };
}

class Qlearner{
    std::unordered_map<State, std::vector<double>> qtable;
    
    public:
        Qlearner(int gridsize);


};
