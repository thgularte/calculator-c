# 🧮 Calculadora em C

Uma calculadora simples desenvolvida em C com o objetivo de praticar conceitos fundamentais da linguagem, como:

- Structs
- Ponteiros de função
- Controle de fluxo
- Manipulação de entrada (`fgets` e `sscanf`)
- Implementação manual de operações (sem uso de `*` e `/`)

---

## 🚀 Funcionalidades

- Soma (`+`)
- Subtração (`-`)
- Multiplicação (via soma acumulada)
- Divisão (via subtração repetida)
- Suporte a números negativos
- Tratamento de divisão por zero
- Entrada interativa via terminal
- Comando para sair (`s`)

---

## 🧠 Conceitos aplicados

Este projeto explora:

- Uso de `struct` para mapear operações
- Ponteiros de função para execução dinâmica
- Parsing de entrada com `fgets` + `sscanf`
- Separação entre lógica e fluxo principal (`main`)
- Implementação manual de operações matemáticas

---

## 📦 Como executar

### 1. Compilar

​```bash
gcc main.c -o calculadora
​```

### 2. Executar

​```bash
main.exe
​```

### 3. Exemplo de uso

​```
Digite a operacao (ex: 5 + 3) ou 's' para sair:
> 5 + 3
Resultado: 8

> -4 * -2
Resultado: 8

> 10 / 3
Resultado: 3

> s
Saindo da calculadora. Obrigado por usar!
​```

---

## 📁 Estrutura

​```
.
├── main.c
├── README.md
└── .gitignore
​```

---

## 🛠️ Observações

- A multiplicação é feita sem usar `*`
- A divisão é feita sem usar `/`
- O projeto foca em aprendizado e prática de lógica

---

## 📚 Possíveis melhorias

- Suporte a números decimais
- Retorno de resto na divisão
- Histórico de operações
- Interface mais amigável
- Melhor tratamento de erros

---

## 👨‍💻 Autor

Desenvolvido por Theodor 🚀