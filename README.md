# Lem-in

Welcome to **Lem-in**.

Inspired by the magical, self-building computer Hex from the Discworld series.

In this project, you'll simulate a "Hex" calculation unit using an anthill model, focusing on finding the most efficient path for ants to traverse from entrance to exit.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** lem_in

## Project Overview 🔎

The goal of `Lem-in` is to efficiently route a given number of ants through an anthill, represented as a network of rooms and tunnels.

Each room can only hold one ant at a time (except for the entrance and exit), and your program must find the shortest path for all ants to reach the exit with the least number of moves.

### Usage

`./lem_in < anthill_description_file`

#### DESCRIPTION
- The program reads the anthill description from the standard input or a file. The description includes the number of ants, rooms with their positions, and the tunnels connecting the rooms.

### Anthill Description Example

```
∼> cat anthill
3
##start
0 1 0
##end
1 13 0 #bedroom
2 5 0
# The next room is the kitchen
3 9 0
0-2
2-3
3-1
```

- **start** and **end** indicate the entrance and exit of the anthill, respectively.
- Rooms are defined by their names and coordinates.
- Tunnels are defined by the rooms they connect.

### Output Format

The output will display the number of ants, the rooms, the tunnels, and then, for each move, a series of `Pn-r` where `n` is the ant number, and `r` is the room it moves into.

```
~> ./lem_in < anthill
#number_of_ants
3
#rooms
##start
0 1 0
##end
1 13 0
2 5 0
3 9 0
#tunnels
0-2
2-3
3-1
#moves
P1-2
P1-3 P2-2
P1-1 P2-3 P3-2
P2-1 P3-3
P3-1
```

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Run the program: `./lem_in < anthill_description_file`.
4. For detailed guidelines, refer to `lemin.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.
