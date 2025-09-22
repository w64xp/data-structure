# -----------------------------
# ส่วนที่ A: Factorial
# -----------------------------
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

print("ส่วนที่ A: Factorial")
print("5! =", factorial(5))  # ผลลัพธ์ควรเป็น 120
print("-" * 40)


# -----------------------------
# ส่วนที่ B: Fibonacci
# -----------------------------
def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

print("ส่วนที่ B: Fibonacci")
print("F(0) =", fibonacci(0))   # ผลลัพธ์ควรเป็น 0
print("F(10) =", fibonacci(10)) # ผลลัพธ์ควรเป็น 55
print("-" * 40)


# -----------------------------
# ส่วนที่ C: Tower of Hanoi
# -----------------------------
def hanoi(n, source, target, auxiliary):
    if n == 1:
        print(f"Move disk 1 from {source} to {target}")
        return
    hanoi(n - 1, source, auxiliary, target)
    print(f"Move disk {n} from {source} to {target}")
    hanoi(n - 1, auxiliary, target, source)

print("ส่วนที่ C: Tower of Hanoi")
hanoi(3, 'A', 'C', 'B')  # ย้ายจานจาก A ไป C เ
