class figura():
    def ladoA(self, ladoA):
        return ladoA
    def ladoB(self, ladoB):
        return ladoB
    def ladoC(self, ladoC):
        return ladoC

ladoA = int(input("Ingresa tu primer lado"))
ladoB = int(input("Ingresa tu segundo lado"))
ladoC = int(input("Ingresa tu tercer lado"))

if ladoA == ladoB == ladoC:
    print("Su triangulo es un equilatero")
elif(ladoA != ladoB and ladoA != ladoC and ladoB == ladoC) or \
    (ladoB != ladoA and ladoB != ladoC and ladoA == ladoC) or \
    (ladoC != ladoA and ladoC != ladoB and ladoA == ladoB):
    print("Su triangulo es isóceles")

if ladoA != ladoB and ladoB != ladoC and ladoC != ladoA:
    print("Su triangulo es un Escaleno")