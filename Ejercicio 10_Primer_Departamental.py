class Operaciones:

    def __init__(self):
        self.numeros = []

    def ingresar_numeros(self):
        i = 0
        while i < 5:
            num = float(input("Ingresa un numero: "))
            self.numeros.append(num)
            i += 1

    def calcular(self):
        suma = 0
        for n in self.numeros:
            suma += n

        media = suma / len(self.numeros)
        maximo = self.numeros[0]
        minimo = self.numeros[0]

        for n in self.numeros:
            if n > maximo:
                maximo = n
            if n < minimo:
                minimo = n

        print("Numeros ingresados:", self.numeros)
        print("Suma:", suma)
        print("Media:", media)
        print("Maximo:", maximo)
        print("Minimo:", minimo)


op = Operaciones()
op.ingresar_numeros()
op.calcular()