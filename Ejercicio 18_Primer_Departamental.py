class OrdenadorMerge:
    def ordenar(self, lista):
        if len(lista) <= 1: return lista
        medio = len(lista) // 2
        izq = self.ordenar(lista[:medio])
        der = self.ordenar(lista[medio:])
        return self._merge(izq, der)

    def _merge(self, izq, der):
        res = []
        i = j = 0
        while i < len(izq) and j < len(der):
            if izq[i] < der[j]:
                res.append(izq[i]); i += 1
            else:
                res.append(der[j]); j += 1
        res.extend(izq[i:]); res.extend(der[j:])
        return res


om = OrdenadorMerge()
print(f"Resultado: {om.ordenar([38, 27, 43, 3, 9, 82, 10])}")