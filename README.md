# Banking Management System (C)

## Overview

This is a simple **Banking Management System** developed in the C programming language.
The application runs in a **menu-driven console interface** and allows users to perform basic banking operations like account creation, deposits, withdrawals, and balance checking.

---------------------------------------------------------------------------------------------

##  Features

*  Create new bank accounts
*  Deposit money into an account
*  Withdraw money with balance validation
*  Check account balance
*  Display all account details

-------------------------------------------------------------------------------------------------

##  Technologies Used

* **C Programming Language**
* Standard Libraries:

  * `stdio.h`
  * `string.h`

-----------------------------------------------------------------------------------------------------

##  Project Structure

* `main.c` → Contains the complete banking system implementation
   Source Code: 

------------------------------------------------------------------------------------------------------

##  How It Works

The program uses:

* A **structure (`struct Account`)** to store:

  * Account Number
  * Name
  * Balance
* An **array of structures** to manage multiple accounts
* A **menu-driven loop** for user interaction

------------------------------------------------------------------------------------------------------

##  How to Run

### Step 1: Compile the Code

```bash
gcc main.c -o bank
```

### Step 2: Run the Program

```bash
./bank
```

---

##  Sample Menu

```
===== BANKING SYSTEM =====
1. Create Account
2. Deposit
3. Withdraw
4. Check Balance
5. Display All Accounts
0. Exit
```

--------------------------------------------------------------------------------------------------------

##  Limitations

* Data is stored only in memory (no file/database storage)
* Maximum of 100 accounts
* No password/security system
* No input validation for incorrect formats

-------------------------------------------------------------------

##  Future Improvements

* Add file handling for permanent data storage
* Implement login authentication
* Add transaction history
* Improve UI (GUI or web-based interface)
* Add error handling and validation

-----------------------------------------------------------------------
