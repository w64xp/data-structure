

class Stack:
    def __init__(self):
        self.data = []
    
    #Add to Stack
    def push(self, item):   
        self.data.append(item)

    #choice
    def pop(self):
        if self.is_empty():
            raise IndexError("Pop form Stack is Null")
        return self.data.pop()
    
    def peek(self):
        if self.is_empty():
            raise IndexError("Peek form Stack is Null")
        return self.data[-1]
    
    def size(self):
        return len(self.data)
    
    #/choice

    def is_empty(self):
        return len(self.data) == 0
    
    def __repr__(self):
        return f"Stack is ({self.data})"

##################################################

class Menu:
    def __init__(self):
        self.stack = Stack()
        
    
    def menu(self):
        while True:
            print("<<Please Selete menu>>")
            print("Q = Quit, A = Push, D = Pop, M = Peek, S = Size")
            choice = input("input choice : ").strip().upper()
            if(choice == "Q"):
                print("Bye....")
                break
            self.check_menu(choice)
            self.display()

    def check_menu(self, choice):
        if choice == "A":
            self.push()
        elif choice == "D":
            self.pop()
        elif choice == "M":
            self.peek()
        elif choice == "S":
            self.Check_size()
        else:
            print("Invalid choice. Try again.")


    def push(self):
        item = input("Input item to push: ")
        self.stack.push(item)
        print(f"Pushed : {item}")

    def pop(self):
        try:
            item = self.stack.pop()
            print(f"Popped: {item}")
        except IndexError as e:
            print(e)

    def peek(self):
        try:
            print(f"Top item: {self.stack.peek()}")
        except IndexError as e:
            print(e)

    def Check_size(self):
            print(f"Size: {self.stack.size()}")

    def display(self):
        print("Current:", self.stack)

if __name__ == "__main__":
    Menu().menu()