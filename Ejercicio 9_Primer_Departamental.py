class Operaciones:

    def __init__(self):
        self.numeros = []

    def ingresar_numeros(self):
        self.numeros = list(map(float, input("Ingresa 5 numeros separados por espacio: ").split()))

    def calcular(self):
        suma = sum(self.numeros)
        media = suma / len(self.numeros)
        maximo = max(self.numeros)
        minimo = min(self.numeros)

        print("Numeros ingresados:", self.numeros)
        print("Suma:", suma)
        print("Media:", media)
        print("Maximo:", maximo)
        print("Minimo:", minimo)


op = Operaciones()
op.ingresar_numeros()
op.calcular()