class Recursion:
    def factorial(n):
        if n == 0:
            return 1
        else:
            return n * Recursion.factorial(n - 1)

    # -------------------------end factorial-------------------------#

    def fibonacci(n):
        if n == 0:
            return 0
        if n == 1:
            return 1

        return Recursion.fibonacci(n - 1) + Recursion.fibonacci(n - 2)

    # -------------------------end fibonacci-------------------------#

    def hanoi(n, from_rod, to_rod, aux_rod):
        if n == 1:
            print(f"movedisk 1 from {from_rod} to {to_rod}")
            return

        Recursion.hanoi(n - 1, from_rod, aux_rod, to_rod)
        print(f"movedisk {n} from {from_rod} ไป {to_rod}")

        Recursion.hanoi(n - 1, aux_rod, to_rod, from_rod)

    # -------------------------end hanoi-------------------------#

if __name__ == "__main__":
    # factorial
    print("5! =", Recursion.factorial(5))
    print("-----------------------------")

    # fibonacci
    print("Fibonacci sequence (0-9):")
    for i in range(10):
        print(Recursion.fibonacci(i), end=" ")
    print("\n-----------------------------")

    # hanoi
    n = 3
    print(f"Tower of Hanoi with {n} disks:")
    Recursion.hanoi(n, "A", "B", "C")