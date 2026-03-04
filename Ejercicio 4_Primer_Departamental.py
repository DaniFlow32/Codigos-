class calculadora:
    def suma(self,a ,b, c):
        return a + b + c
    def resta(self,a ,b, c):
        return a - b - c
    def multi(self,a ,b, c):
        return a * b * c
    def div(self,a ,b, c):
        if b&c == 0:
            return "error"
        else:
            return a / b / c


a = int(input("Ingresa el primer numero "))
b = int(input("Ingresa el segundo numero "))
c = int(input("Ingresa el tercer numero "))
calcular=calculadora()
print("Suma:")
print(calcular.suma(a, b, c))
print("Resta:")
print(calcular.resta(a, b, c))
print("Multiplicacion:")
print(calcular.multi(a, b, c))
print("Division:")
print(calcular.div(a, b, c))