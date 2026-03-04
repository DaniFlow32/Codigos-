class Calculadora:

    def factorial(self, n):
        if n == 0 or n == 1:
            return 1
        else:
            return n * self.factorial(n - 1)

    def fibonacci(self, n):
        if n == 0:
            return 0
        elif n == 1:
            return 1
        else:
            return self.fibonacci(n - 1) + self.fibonacci(n - 2)

    def menu(self):
        print("1. Factorial")
        print("2. Fibonacci")
        opcion = int(input("Selecciona una opcion: "))
        numero = int(input("Ingresa un numero: "))

        if opcion == 1:
            print("Factorial:", self.factorial(numero))
        elif opcion == 2:
            print("Fibonacci:", self.fibonacci(numero))
        else:
            print("Opcion no valida")


calc = Calculadora()
calc.menu()