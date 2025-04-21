# 💳 Secure ATM Simulation (C Language)

A simple console-based ATM simulation system written in **C**, demonstrating core banking functionalities like authentication, balance check, withdrawal, and deposit.

---

## 📋 Table of Contents

- [📦 Features](#-features)
- [🛠️ Requirements](#️-requirements)
- [🚀 How to Run](#-how-to-run)
- [🔍 Code Structure](#-code-structure)
- [🖼️ Sample Output](#-sample-output)
- [📌 Notes](#-notes)
- [📃 License](#-license)

---

## 📦 Features

- 🔐 **PIN authentication** with a max of 3 attempts
- 💰 **Balance inquiry**
- 💸 **Money withdrawal** (with insufficient funds check)
- 💵 **Money deposit**
- 📊 **Transaction counter**
- 🧾 **Simple and clear console UI**

---

## 🛠️ Requirements

- GCC compiler or any C language compiler

---

## 🚀 How to Run

### 🔧 Compile the program

```bash
gcc atm.c -o atm
▶️ Run the executable
bash
Copy
Edit
./atm
💡 If you're on Windows, run the .exe file:

Copy
Edit
atm.exe
🔍 Code Structure
Global Variables

float balance = 5000.0: Initial user balance

int transactionCount = 0: Tracks number of successful transactions

Functions

authenticateUser() - PIN authentication logic

showMenu() - Displays ATM options

checkBalance() - Displays current balance

withdrawMoney() - Withdraws money if sufficient balance

depositMoney() - Deposits money into account

🖼️ Sample Output
text
Copy
Edit
----- Welcome to Secure ATM -----
Enter your 4-digit PIN: 1234
PIN verified successfully!

-------- ATM MENU --------
1. Check Balance
2. Withdraw Money
3. Deposit Money
4. Exit
--------------------------
Enter your choice: 1
Your current balance is: ₹5000.00
📌 Notes
The PIN is hardcoded as 1234 for demo purposes.

You are allowed maximum 3 attempts for PIN verification.

This is a demo simulation, not connected to any real bank system or database.

