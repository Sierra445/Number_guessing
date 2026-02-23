# Guess the Number 🎯

A simple and fun **C++ console game** where the player tries to guess a randomly generated number between 1 and 100.

---

## Features

* Randomly selects a number between 1 and 100.
* Provides feedback if the guess is **too high** or **too low**.
* Counts the number of attempts.
* Simple and friendly console interface with dividers and a welcome title.

---

## How to Play

1. Compile the program using a C++ compiler:

   ```bash
   g++ -o guess_the_number main.cpp
   ```
2. Run the program:

   ```bash
   ./guess_the_number
   ```
3. The program will choose a random number between 1 and 100.
4. Enter your guesses when prompted.
5. The game will tell you if your guess is too high, too low, or correct.
6. Keep guessing until you find the correct number!
7. Celebrate your success with a congratulatory message showing the number of attempts. 🎉

---

## Example Output

```
==============================
  WELCOME TO GUESS THE NUMBER
==============================

I have chosen a number between 1 and 100.
------------------------------
Enter your guess: 50
Too low! Try again.
------------------------------
Enter your guess: 75
Too high! Try again.
------------------------------
Enter your guess: 63
🎉 Congratulations! You guessed it in 3 attempts. 🎉
------------------------------
Thanks for playing!
```

---

## Requirements

* A C++ compiler supporting C++11 or higher (e.g., **g++**, **clang++**).

---

## Code Overview

* `printTitle()` – Prints the game title.
* `printDivider()` – Prints a divider line for clarity.
* `main()` – Handles the game logic, random number generation, user input, and feedback.

---

## Future Improvements

* Add a **difficulty level** (easy, medium, hard) to limit attempts.
* Track **high scores**.
* Allow the player to **play again** without restarting the program.
* Add **input validation** to handle non-numeric guesses.
