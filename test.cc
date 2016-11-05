#include "mdp-simulation.h"
#include <iostream>
using namespace std;

char const* greet()
{
  State nextState = my_next_state(State(0, 0), N);
  cout << "From 0, 0 to " << nextState.x << ", " << nextState.y << endl;
  Reward reward = my_reward(State(1, 1));
  cout << "Receiving reward " << reward << endl;
  return 0;
}

#include <boost/python.hpp>
 
BOOST_PYTHON_MODULE(hello_ext)
{
    using namespace boost::python;
    def("greet", greet);
}
