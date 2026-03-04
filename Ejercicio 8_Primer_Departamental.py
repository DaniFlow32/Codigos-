class Operaciones:

    def __init__(self):
        self.numeros = []

    def ingresar_numeros(self):
        for i in range(5):
            n = float(input("Ingresa un numero: "))
            self.numeros.append(n)

    def calcular_suma(self):
        return sum(self.numeros)

    def calcular_media(self):
        return self.calcular_suma() / len(self.numeros)

    def calcular_maximo(self):
        return max(self.numeros)

    def calcular_minimo(self):
        return min(self.numeros)

    def mostrar_resultados(self):
        print("Numeros ingresados:", self.numeros)
        print("Suma:", self.calcular_suma())
        print("Media:", self.calcular_media())
        print("Maximo:", self.calcular_maximo())
        print("Minimo:", self.calcular_minimo())


op = Operaciones()
op.ingresar_numeros()
op.mostrar_resultados()