class Fractales:

    def sierpinski(self, n):
        if n == 0:
            return 1
        else:
            return 3 * self.sierpinski(n - 1)

    def cantor(self, n):
        if n == 0:
            return 1
        else:
            return 2 * self.cantor(n - 1)

    def menu(self):
        print("1. Triangulo de Sierpinski")
        print("2. Polvo de Cantor")
        opcion = int(input("Selecciona una opcion: "))
        nivel = int(input("Ingresa el nivel del fractal: "))

        if opcion == 1:
            print("Numero de triangulos:", self.sierpinski(nivel))
        elif opcion == 2:
            print("Numero de segmentos:", self.cantor(nivel))
        else:
            print("Opcion no valida")


f = Fractales()
f.menu()