## Esolang Transpiler

A simple transpiler to convert code written in super-stack to IITK-Traveller esolang.

### About the Language

IITK - Traveller is an esoteric language designed by Programming Club,IIT Kanpur. Started as a fun winter project, the construct of the language is partially inspired by esolangs 3var and Taxi, and its major goal is to introduce IITK peeps to esolangs and provide them with a relatable, challenging and creative construct, in case they have been bored using the similar language constructs like C/C++,Java,Python etc.

### Instructions to Run
1. `g++ my_compiler.cpp bitwise.cpp -o bin`
2. `.\bin input.superstk`
> Assuming the source code (SuperStack Code) that has to transpiled is present in the file "input.superstk"

The above commands when executed produces the target code (IITK Traveller Code) in the file `output.iitktv`