class Stack:
    def __init__(self):
        self.data = []
    
    def push(self, item):   
        self.data.append(item)

    def pop(self):
        if self.is_empty():
            raise IndexError("Pop from Stack is Null")
        return self.data.pop()
    
    def peek(self):
        if self.is_empty():
            raise IndexError("Peek from Stack is Null")
        return self.data[-1]
    
    def size(self):
        return len(self.data)
    
    def is_empty(self):
        return len(self.data) == 0
    
    def __repr__(self):
        return f"Stack is ({self.data})"


class Menu:
    def __init__(self):
        self.stack = Stack()

    def show(self):
        while True:
            print("\nPlease Select Menu:")
            print("Q = Quit, A = Push, D = Pop, M = Peek, S = Size, L = List")
            
            choice = input("Enter choice: ").strip().upper()
            
            if choice == "A":   # Push
                item = input("Enter item to push: ")
                self.stack.push(item)
                print(f"Pushed {item} to stack.")

            elif choice == "D": # Pop
                try:
                    item = self.stack.pop()
                    print(f"Popped {item} from stack.")
                except IndexError as e:
                    print(e)

            elif choice == "M": # Peek
                try:
                    print("Top item:", self.stack.peek())
                except IndexError as e:
                    print(e)

            elif choice == "S": # Size
                print("Stack size:", self.stack.size())

            elif choice == "L": # List
                print(self.stack)

            elif choice == "Q": # Quit
                print("Exiting program...")
                break

            else:
                print("Invalid choice, try again.")


if __name__ == "__main__":
    menu = Menu()
    menu.show()
