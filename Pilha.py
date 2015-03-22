class Pilha(object):
    def __init__(self):
        self.dados = []
 
    def empilha(self, elemento):
        self.dados.append(elemento)
 
    def desempilha(self):
        if not self.vazia():
            return self.dados.pop(-1)
 
    def vazia(self):
        return len(self.dados) == 0

    def listar(self):
	return self.dados

def main():
	p = Pilha()
	p.empilha(12)
	p.empilha(13)
	p.empilha(14)

	
	print p.listar()
	
	p.desempilha()

	print p.listar()

if __name__ == '__main__':
	main()
