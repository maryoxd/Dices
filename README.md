# 🎲 Dice Game – C++ Dice Rolling Competition  

**Dice Game** is a **C++ console-based simulation** where players compete by rolling dice over multiple rounds. The highest roll wins each round, but if two players roll the same number, the dice's priority is used as a tiebreaker. The game runs for 10 rounds, and at the end, the player with the most wins is declared the champion.  

## 🏆 How the Game Works  
1. **Four players** are added to the game, each assigned a randomly colored dice.  
2. Each round, players **roll their dice**, generating a number between **0 and 6**.  
3. **The highest roll wins** the round. If there’s a tie, the **dice's priority** determines the winner.  
4. After **10 rounds**, the total number of wins for each player is displayed.  

## 📌 Features  
- **Turn-based dice rolling** – Players roll dice each round.  
- **Automatic tie resolution** – Dice priority determines winners in case of equal rolls.  
- **Random dice assignment** – Players get different dice colors with unique priorities.  
- **Tracking system** – The game records the number of rounds won by each player.  

## 🛠️ Technologies Used  
- **C++ (Standard Library & Object-Oriented Programming)**  
- **Random Number Generation (srand, time-based seed)**  
- **Console-based Simulation with Structured Output**  

## 🚀 How to Install & Run  
1. **Clone the repository:**  
   ```bash
   git clone https://github.com/maryoxd/DiceGame.git  
   cd DiceGame
2. **Compile and run the game:**
   ```bash
   g++ -o dice_game main.cpp Hrac.cpp Kocka.cpp Hra.cpp  
   ./dice_game  
