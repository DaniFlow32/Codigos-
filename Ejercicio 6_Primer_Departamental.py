class Calculadora:
    def multiplicar(self, a, b):
        return a * b

    def dividir(self, a, b):
        if b == 0:
            return "No se puede dividir entre cero"
        return a / b

    def potencia(self, a, b):
        return a ** b


class CalculadoraNueva(Calculadora):

    # Multiplicación por sumas sucesivas
    def multiplicar(self, a, b):
        resultado = 0
        negativo = False

        if b < 0:
            b = -b
            negativo = True

        for i in range(b):
            resultado += a

        if negativo:
            resultado = -resultado

        return resultado

    # División por restas sucesivas
    def dividir(self, a, b):
        if b == 0:
            return "No se puede dividir entre cero"

        contador = 0
        negativo = False

        if a < 0:
            a = -a
            negativo = not negativo

        if b < 0:
            b = -b
            negativo = not negativo

        while a >= b:
            a -= b
            contador += 1

        if negativo:
            contador = -contador

        return contador

    # Potencia por multiplicaciones sucesivas
    def potencia(self, a, b):
        if b < 0:
            return "No se permiten exponentes negativos"

        resultado = 1

        for i in range(b):
            resultado = self.multiplicar(resultado, a)

        return resultado


# Prueba
calc = CalculadoraNueva()

print("Multiplicación:", calc.multiplicar(4, 3))
print("División:", calc.dividir(10, 2))
print("Potencia:", calc.potencia(2, 3))