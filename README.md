# 💳 C-Language ATM Simulation

A simple ATM system built in the C programming language that supports secure PIN authentication, balance inquiry, money deposits, withdrawals, and a mini-statement log of recent transactions.

---

## 🚀 Features

- 🔐 **PIN Authentication** (with 3 attempts)
- 💰 **Balance Check**
- 📥 **Deposit Money**
- 📤 **Withdraw Money**
- 🧾 **Mini Statement** (Last 5 transactions logged)
- 🧭 **Menu-driven interface** for easy navigation
- ❌ **Input validation** to prevent invalid operations

---

## 🛠️ Technologies Used

- **Language**: C
- **Compiler**: GCC / any standard C compiler
- **Environment**: Command Line / Terminal

---

## 📁 File Structure

ATM-Simulator/ ├── atm.c # Main C source code ├── README.md # Project description (this file)

yaml
Copy
Edit

---

## 🧑‍💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/atm-simulator.git
   cd atm-simulator
Compile the code:

bash
Copy
Edit
gcc atm.c -o atm
Run the executable:

bash
Copy
Edit
./atm
🔍 Preview
text
Copy
Edit
******** Welcome to C-Language ATM ********
Enter your 4-digit PIN: 1234
✅ PIN Verified Successfully!

======= ATM Menu =======
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. View Mini Statement
5. Exit
📌 Default Settings
PIN: 1234

Initial Balance: ₹10,000

Max Transactions Stored: 5

✅ Sample Output (Mini Statement)
text
Copy
Edit
🧾 Mini Statement (Last 5 Transactions):
 1. Deposited ₹500.00
 2. Withdrew ₹200.00
 3. Checked balance
 4. Withdrew ₹1000.00
 5. Deposited ₹250.00
🔒 Security Note
This is a basic simulation and does not use encrypted storage or multi-user authentication. Intended for educational/demonstration purposes only.

🧠 Concepts Used
Arrays and Strings

Control Flow (if, switch-case, loops)

User Input Validation

Modular Programming (Functions)

Console-based User Interface

