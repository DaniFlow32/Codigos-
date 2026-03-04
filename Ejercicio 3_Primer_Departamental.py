class calculadora:
    def suma(self,a ,b):
        return a + b
    def resta(self,a ,b):
        return a - b
    def multi(self,a ,b):
        return a * b
    def div(self,a ,b):
        if b == 0:
            return "error"
        else:
            return a / b


a = int(input("Ingresa el primer numero "))
b = int(input("Ingresa el segundo numero "))
calcular=calculadora()
print("Suma:")
print(calcular.suma(a, b))
print("Resta:")
print(calcular.resta(a, b))
print("Multiplicacion:")
print(calcular.multi(a, b))
print("Division:")
print(calcular.div(a, b))