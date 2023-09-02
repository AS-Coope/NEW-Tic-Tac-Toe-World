# NEW Tic Tac Toe: World

## Overview
This project is a recreation of an already existing project, Tic-Tac-Toe: World. That project is still in progress, 
but going about refactoring it has been quite troublesome. Originally that project was started 4 years ago, since then,
I have learned a lot more about software development, computer science and best practices in programming. As such, I've decided
to rebuild the entire game from scratch with this knowledge and experience.  
It is also my intention to add new features to the project, like local multiplayer, which would be a bit more difficult to add 
to the original project in its current state, least without something breaking. And last, but not least, it will help me to 
get a lot more hands on experience with C.

## Usage  
To use this project:
1. Clone the repository.
2. The structure of the project includes an obj directory, a bin directory and a data directory. Perform the following operations from the root directory of the project.
3. To compile all the files without linking them and creating the executable, run the following code in your terminal:
`gcc -c src/{file_name}.c -o obj/{file_name}.o` for each .c file in the src directory, substituting the `{file_name}` with the actual file name. (A batch script, and when brought to Linux, a bash script, will be created in the future to automate the compiling of all src files at once).
4. Next, run the following code to create the executable game from main.o: `gcc obj/main.o -o bin/tttw_game`.
5. Command to run the game: `bin/tttw_game`

NOTE: A direct compilation then linking process was avoided so that the compiled .o files could be put in a separate directory than the executable file. However, a direct compilation then linking can be done. However, whatever directory you specify, the .o and executable files would both end up there.

## Objectives/ Deliverables
For v1.0:
- [ ] Implement story mode, where the player can face up to 5 AI bosses of increasing difficulty.
- [ ] Implement (local [single PC - one process]) tournament mode, where up to 16 players can face off and be ranked at the end of the tournament.
- [ ] Allow the user to change their desired theme (font colour).
- [ ] Allow the user to change their player name.