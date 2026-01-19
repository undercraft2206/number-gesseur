[![GitHub stars](https://img.shields.io/github/stars/undercraft2206/number-gesseur?style=for-the-badge)](https://github.com/undercraft2206/number-gesseur/stargazers)

[![GitHub forks](https://img.shields.io/github/forks/undercraft2206/number-gesseur?style=for-the-badge)](https://github.com/undercraft2206/number-gesseur/network)

[![GitHub issues](https://img.shields.io/github/issues/undercraft2206/number-gesseur?style=for-the-badge)](https://github.com/undercraft2206/number-gesseur/issues)

**An interactive command-line game where you guess a secret number!**

</div>

## 📖 Overview

"Number Guesseur" is a classic, simple yet engaging command-line application developed in C. The objective of the game is for the player to guess a randomly generated secret number within a certain range. After each guess, the game provides feedback, indicating whether the guess was too high or too low, guiding the player towards the correct answer. It's a perfect project for demonstrating basic C programming concepts, including input/output, random number generation, conditional logic, and loops.

## ✨ Features

-   **Interactive Gameplay:** Engage in a simple number guessing game directly from your terminal.
-   **Random Secret Number:** A new secret number is generated at the start of each game, ensuring replayability.
-   **Intelligent Feedback:** Receive hints (e.g., "Too high!", "Too low!") after each guess to help narrow down the possibilities.
-   **Guess Counter:** Tracks the number of attempts taken to guess the correct number.

## 🛠️ Tech Stack

**Language:**

![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)

**Build Tool:**

![GCC](https://img.shields.io/badge/GCC-0C4381?style=for-the-badge&logo=gnu-compiler-collection&logoColor=white) (or any standard C compiler)

## 🚀 Quick Start

### Prerequisites
-   A C compiler (e.g., GCC, Clang) installed on your system.

### Installation & Execution

1.  **Clone the repository**
    ```bash
    git clone https://github.com/undercraft2206/number-gesseur.git
    cd number-gesseur
    ```

2.  **Navigate to the source directory**
    ```bash
    cd number_gess
    ```

3.  **Compile the source code**
    Assuming the main source file is `number_gess.c` inside the `number_gess` directory:
    ```bash
    gcc -o number_gess number_gess.c -std=c99
    ```
    *Note: The `-std=c99` flag ensures compatibility with C99 standards, which might be necessary for certain functions like `for` loop initializations or `long long` types if used.*

4.  **Run the game**
    ```bash
    ./number_gess
    ```
    Follow the on-screen prompts to play!

## 📁 Project Structure

```
number-gesseur/
├── number_gess/        # Contains the C source code for the game
│   └── number_gess.c   # Expected main source file (TODO: Confirm filename)
└── README.md           # Project documentation
```

### Development Setup for Contributors
Ensure you have a C compiler installed (e.g., GCC) and follow the compilation steps outlined in the [Installation](#installation--execution) section.

## 🙏 Acknowledgments

-   To the open-source community for providing robust C compilers like GCC.

---

<div align="center">

**⭐ Star this repo if you find it helpful or enjoy the game!**

Made with ❤️ by [undercraft2206](https://github.com/undercraft2206)

Readme with https://readmestudio.zenui.net/editor
</div>

