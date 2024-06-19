#include "SquarePeg.h"
#include "SquarePegAdapter.h"
#include "RoundPeg.h"
#include "RoundHole.h"

#include <iostream>
#include <string>

int main(){

    RoundHole* hole = new RoundHole(5);


    RoundPeg* rpeg_small = new RoundPeg(4);
    RoundPeg* rpeg_big = new RoundPeg(6);

    SquarePeg* speg_small = new SquarePeg(4);
    SquarePeg* speg_big = new SquarePeg (6);

    SquarePegAdapter* speg_adapter_small = new SquarePegAdapter(speg_small);
    SquarePegAdapter* speg_adapter_big = new SquarePegAdapter(speg_big);

    std::cout << "rpeg small fits: " << std::to_string(hole->fits(*rpeg_small)) << std::endl;
    std::cout << "rpeg big fits: " << std::to_string(hole->fits(*rpeg_big)) << std::endl;

    //std::cout << "speg small fits: " << std::to_string(hole->fits(*speg_small));
    //std::cout << "speg big fits: " << std::to_string(hole->fits(*speg_big));

    std::cout << "speg adapter small fits: " << std::to_string(hole->fits(*speg_adapter_small)) << std::endl;
    std::cout << "speg adapter big fits: " << std::to_string(hole->fits(*speg_adapter_big)) << std::endl;

    return 0;
}