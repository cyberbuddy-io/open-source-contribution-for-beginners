import random

class NumberGuessingApp:
    def __init__(self, minimum, maximum, difficulty):
        self.minimum = minimum
        self.maximum = maximum
        self.random_number = None
        if difficulty == "easy":
            self.diff = [0, 5]
        elif difficulty == "medium":
            self.diff = [2, 7]
        elif difficulty == "hard":
            self.diff = [0, 10]

    def randomize_number(self):
        self.random_number = random.randint(self.minimum, self.maximum)
        self.number_range_hint = [self.random_number - random.randint(self.diff[0], self.diff[1]),
                            self.random_number + random.randint(self.diff[0], self.diff[1])]
        # number range hint sometimes goes beyond the guess range so
        if self.number_range_hint[0] < self.minimum:
            self.number_range_hint[0] = self.minimum
        if self.number_range_hint[1] > self.maximum:
            self.number_range_hint[1] = self.maximum

    def guess_number(self):
        game_running = True
        attempt = 5 # starts with 5 attempts
        while game_running and attempt > 0:
            print("------------------------------------------------------")
            while True: # asks the user to guess and input numbers
                try: 
                    input_number = int(input(f"Guess a number (between {self.minimum} and {self.maximum}): "))
                    break
                except ValueError:
                    print("Error: please input a numeric value")

            if input_number == self.random_number:
                print("------------------------------------------------------")
                print("Correct!")
                restart = input('Do you want to restart? [Y/N]: ')
                if restart == "Y":
                    self.initiate_program()

                else:
                    game_running = False

            else: # if incorrect
                attempt -= 1
                if input_number > self.random_number:
                    print("------------------------------------------------------")
                    print("Too high!")

                elif input_number < self.random_number:
                    print("------------------------------------------------------")
                    print("Too low!")

                print(f"{attempt} attempts left!")
                if attempt == 2:
                    print(f"Hint: between {self.number_range_hint[0]} and {self.number_range_hint[1]}")

                if attempt == 0:
                    print("------------------------------------------------------")
                    print(f"You ran out of attempts. The correct answer was {self.random_number}.")
                    restart = input('Do you want to restart? [Y/N]: ')
                    if restart == "Y":
                        self.initiate_program()

                    else:
                        game_running = False
        if game_running == False: 
            print("------------------------------------------------------")
            print("See you next time!")
            print("------------------------------------------------------")
            

    def initiate_program(self):
        self.randomize_number()
        self.guess_number()

hard_mode = NumberGuessingApp(0, 20, "normal") # easy, normal, hard
hard_mode.initiate_program()
