"""
Basic In-Memory Bank System
Author: @lovispravakar
"""

class BankSystem:
    def __init__(self):
        self.accounts = {}

    def create_account(self, account_number, name):
        if account_number in self.accounts:
            return "Account already exists."
        self.accounts[account_number] = {"name": name, "balance": 0.0}
        return f"Account {account_number} created for {name}."

    def deposit(self, account_number, amount):
        if account_number not in self.accounts:
            return "Account not found."
        if amount <= 0:
            return "Deposit amount must be positive."
        self.accounts[account_number]["balance"] += amount
        return f"Deposited {amount} to account {account_number}."

    def withdraw(self, account_number, amount):
        if account_number not in self.accounts:
            return "Account not found."
        if amount <= 0:
            return "Withdrawal amount must be positive."
        if self.accounts[account_number]["balance"] < amount:
            return "Insufficient funds."
        self.accounts[account_number]["balance"] -= amount
        return f"Withdrew {amount} from account {account_number}."

    def get_balance(self, account_number):
        if account_number not in self.accounts:
            return "Account not found."
        balance = self.accounts[account_number]["balance"]
        return f"Balance for account {account_number}: {balance}"

if __name__ == "__main__":
    bank = BankSystem()
    print(bank.create_account("1001", "Alice"))
    print(bank.deposit("1001", 500))
    print(bank.withdraw("1001", 200))
    print(bank.get_balance("1001"))
    print(bank.create_account("1002", "Bob"))
    print(bank.deposit("1002", 1000))
    print(bank.get_balance("1002"))
