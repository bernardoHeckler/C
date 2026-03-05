# 📚 Fundamentos de Programação em C - Guia Completo de Aprendizado

## 🎯 Introdução

Este documento funciona como um **reforço de estudo** e uma **base sólida de fundamentos** sobre linguagem C, organizando todos os conceitos aprendidos de forma progressiva e didática.

---

## 1️⃣ Fundamentos Básicos

### 1.1 O que é C?
C é uma linguagem de programação **compilada**, **procedural** e **de baixo nível** que permite controle direto sobre a memória. É fundamental para entender como os computadores funcionam e a base para muitas linguagens modernas.

### 1.2 Estrutura Básica de um Programa em C

```c
#include <stdio.h>    // Inclusão de bibliotecas

int main() {          // Função principal
    // Seu código aqui
    return 0;         // Encerra o programa
}
```

**Explicação:**
- `#include <stdio.h>` - Importa a biblioteca padrão de entrada/saída
- `int main()` - Função principal onde o programa começa
- `return 0;` - Indica que o programa terminou com sucesso

### 1.3 Variáveis e Tipos de Dados

Variáveis são "caixas" que armazenam informações. Em C, você precisa **declarar o tipo** antes de usar:

```c
int idade = 25;           // Número inteiro
float altura = 1.75;      // Número decimal
char inicial = 'J';       // Um caractere
```

**Tipos principais:**
| Tipo | Tamanho | Descrição |
|------|---------|-----------|
| `int` | 4 bytes | Números inteiros (-2 bilhões a 2 bilhões) |
| `float` | 4 bytes | Números decimais (6-7 dígitos de precisão) |
| `double` | 8 bytes | Números decimais (15-16 dígitos de precisão) |
| `char` | 1 byte | Um caractere (letra, número, símbolo) |

---

## 2️⃣ Entrada e Saída de Dados

### 2.1 Exibindo Mensagens - `printf()`

```c
#include <stdio.h>

int main() {
    int score = 10;
    printf("Seu score é %d\n", score);
    return 0;
}
```

**Especificadores de formato:**
- `%d` - Inteiro (int)
- `%f` - Número decimal (float/double)
- `%c` - Caractere (char)
- `%s` - String/texto

**Caracteres especiais:**
- `\n` - Quebra de linha (nova linha)
- `\t` - Tabulação (espaço)

### 2.2 Recebendo Dados do Usuário - `scanf()`

```c
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);  // O & indica o endereço da variável
    printf("Sua idade é: %d\n", idade);
    return 0;
}
```

**⚠️ Importante:** Usar `&` antes do nome da variável em `scanf()` para passar o endereço de memória onde armazenar o valor.

---

## 3️⃣ Estruturas de Decisão (if/else)

### 3.1 Tomando Decisões com `if` e `else`

Permite executar diferentes blocos de código baseado em condições:

```c
#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }
    else {
        printf("Você é menor de idade.\n");
    }
    return 0;
}
```

### 3.2 Operadores de Comparação

| Operador | Significado |
|----------|------------|
| `==` | Igual a |
| `!=` | Diferente de |
| `>` | Maior que |
| `<` | Menor que |
| `>=` | Maior ou igual |
| `<=` | Menor ou igual |

### 3.3 Operadores Lógicos

```c
// AND (E) - ambas as condições devem ser verdadeiras
if (idade >= 18 && idade <= 65) {
    printf("Você está na idade ativa.\n");
}

// OR (OU) - apenas uma condição precisa ser verdadeira
if (sexo == 'M' || sexo == 'F') {
    printf("Sexo válido.\n");
}

// NOT (NÃO) - inverte a condição
if (!(idade < 18)) {
    printf("Não é menor de idade.\n");
}
```

### 3.4 Estrutura if/else if/else

```c
if (nota >= 9) {
    printf("Excelente!\n");
}
else if (nota >= 7) {
    printf("Bom!\n");
}
else if (nota >= 5) {
    printf("Aceitável!\n");
}
else {
    printf("Reprovado.\n");
}
```

### 3.5 Estrutura Switch Case - Múltiplas Escolhas

O `switch case` é uma forma **mais elegante e eficiente** de lidar com **múltiplas opções** comparadas a usar vários `if/else`.

**Sintaxe:**
```c
switch(variável) {
    case valor1:
        // Código se variável == valor1
        break;
    case valor2:
        // Código se variável == valor2
        break;
    default:
        // Código se nenhum case corresponder
}
```

**Pontos importantes:**
- `case` - Verifica se a variável é igual a este valor
- `break;` - **Importante!** Para a execução do switch
- `default` - Executado se nenhum case corresponder (como um `else`)

### 3.6 Exemplo Prático: Calculadora com Switch Case

```c
#include <stdio.h>

int main() {
    int operacao;
    float num1, num2, resultado;
    
    // Menu
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    
    printf("Escolha a operação (1-4): ");
    scanf("%d", &operacao);
    
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);
    
    // Switch case
    switch(operacao) {
        case 1:
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Não é possível dividir por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }
    
    return 0;
}
```

### 3.7 Switch Case vs If/Else

**Quando usar Switch Case:**
- ✅ Comparação com múltiplos valores fixos
- ✅ Menus de opções
- ✅ Código mais legível com muitas opções

**Quando usar If/Else:**
- ✅ Condições complexas
- ✅ Ranges de valores (entre X e Y)
- ✅ Operadores lógicos (AND, OR)

---

## 4️⃣ Laços de Repetição (Loops)

### 4.1 Laço `for` - Repetição com Controle

Usado quando você **sabe** quantas vezes vai repetir:

```c
#include <stdio.h>

int main() {
    for(int i = 0; i < 10; i++) {
        printf("%d\n", i);  // Imprime 0 até 9
    }
    return 0;
}
```

**Estrutura do `for`:**
```
for(inicialização; condição; incremento)
```

1. **Inicialização** (`i = 0`) - Começa aqui
2. **Condição** (`i < 10`) - Continua enquanto verdadeira
3. **Incremento** (`i++`) - Aumenta a cada iteração

### 4.2 Exemplos Práticos com `for`

**Números pares:**
```c
for(int i = 0; i <= 20; i += 2) {
    printf("%d ", i);  // 0 2 4 6 8 10 12 14 16 18 20
}
```

**Números ímpares:**
```c
for(int i = 1; i <= 20; i += 2) {
    printf("%d ", i);  // 1 3 5 7 9 11 13 15 17 19
}
```

**Tabuada:**
```c
int numero = 5;
for(int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}
```

### 4.3 Laço `while` - Repetição Condicional

Usado quando você **não sabe** quantas vezes vai repetir:

```c
int i = 0;
while(i < 10) {
    printf("%d\n", i);
    i++;
}
```

### 4.4 Laço `do while` - Executa Primeiro, Verifica Depois

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while(i < 10);
```

A diferença: `do while` sempre executa **pelo menos uma vez**, mesmo que a condição seja falsa.

---

## 5️⃣ Funções

### 5.1 O que são Funções?

Funções são **blocos reutilizáveis de código** que realizam uma tarefa específica. Elas ajudam a:
- Organizar o código
- Evitar repetição
- Facilitar a manutenção
- Reutilizar código

### 5.2 Estrutura Básica de uma Função

```c
#include <stdio.h>

// Declaração da função
int soma(int a, int b) {
    return a + b;  // Retorna o resultado
}

int main() {
    int num1 = 5, num2 = 3;
    int resultado = soma(num1, num2);  // Chamando a função
    printf("5 + 3 = %d\n", resultado);  // Saída: 5 + 3 = 8
    return 0;
}
```

### 5.3 Componentes de uma Função

```
tipo_retorno   nome_funcao    (parâmetros)
    ↓              ↓                ↓
    int            soma           (int a, int b) {
                                       ↑
                                  Argumentos
    
    return a + b;                  ← Retorno
}
```

**Explicação:**
- **Tipo de Retorno** (`int`) - Que tipo de dado a função devolve
- **Nome** (`soma`) - Como você chama a função
- **Parâmetros** (`a, b`) - Dados que a função recebe
- **Body** - O código que executa
- **Return** - O valor que a função devolve

### 5.4 Funções sem Retorno - `void`

```c
void saudacao() {
    printf("Olá, bem-vindo!\n");
}

int main() {
    saudacao();  // Executa, mas não retorna nada
    return 0;
}
```

### 5.5 Exemplos de Funções Práticas

**Função que encontra o menor número:**
```c
int menor(int a, int b) {
    if(a > b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    int resultado = menor(num1, num2);
    printf("Menor número é %d!\n", resultado);
    return 0;
}
```

**Função que calcula IMC:**
```c
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    printf("Digite peso (kg) e altura (m): ");
    scanf("%f %f", &peso, &altura);
    
    float imc = calcularIMC(peso, altura);
    printf("Seu IMC é: %.2f\n", imc);
    return 0;
}
```

---

## 6️⃣ Vetores (Arrays)

### 6.1 O que é um Vetor?

Um vetor é uma **coleção de variáveis do mesmo tipo** armazenadas em posições sequenciais de memória.

```c
int numeros[5];  // Vetor com espaço para 5 inteiros
```

**Visualização:**
```
Índice:  0    1    2    3    4
         [ ][ ][ ][ ][ ]
         
Memória: 0x100 0x104 0x108 0x10C 0x110
```

### 6.2 Inicializando Vetores

```c
// Jeito 1: Atribuindo valores individuais
int numeros[5];
numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;

// Jeito 2: Inicializando na declaração
int numeros[5] = {10, 20, 30, 40, 50};

// Jeito 3: Sem especificar tamanho
int numeros[] = {10, 20, 30};  // Tamanho 3
```

### 6.3 Acessando Elementos

```c
#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    
    printf("Primeiro elemento: %d\n", numeros[0]);   // 10
    printf("Terceiro elemento: %d\n", numeros[2]);   // 30
    printf("Último elemento: %d\n", numeros[4]);     // 50
    
    return 0;
}
```

### 6.4 Iterando sobre Vetores

```c
int numeros[] = {10, 20, 30, 40, 50};

// Percorrendo com for
for(int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
// Saída: 10 20 30 40 50
```

### 6.5 Exemplo Prático: Encontrando Pares e Ímpares

```c
#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Pares: ");
    for(int i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {  // resto de divisão por 2 é 0
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
    
    printf("Ímpares: ");
    for(int i = 0; i < 10; i++) {
        if(numeros[i] % 2 != 0) {  // resto de divisão por 2 não é 0
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
    
    return 0;
}
```

---

## 7️⃣ Operadores Importantes

### 7.1 Operadores Aritméticos

```c
int a = 10, b = 3;

printf("%d\n", a + b);  // 13 (Adição)
printf("%d\n", a - b);  // 7  (Subtração)
printf("%d\n", a * b);  // 30 (Multiplicação)
printf("%d\n", a / b);  // 3  (Divisão inteira)
printf("%d\n", a % b);  // 1  (Resto/Módulo)
```

### 7.2 Operadores de Incremento/Decremento

```c
int x = 5;

x++;        // x = 6 (incrementa em 1)
x--;        // x = 5 (decrementa em 1)
x += 5;     // x = 10 (adiciona 5)
x -= 3;     // x = 7 (subtrai 3)
x *= 2;     // x = 14 (multiplica por 2)
x /= 7;     // x = 2 (divide por 7)
```

---

## 8️⃣ Boas Práticas e Padrões

### 8.1 Nomeação de Variáveis

```c
// ✅ BOM - Nomes claros
int idade;
float altura;
int velocidadeMedia;

// ❌ RUIM - Nomes confusos
int x;
float a;
int v;
```

### 8.2 Comentários

```c
// Comentário de uma linha

/*
    Comentário de
    múltiplas linhas
*/
```

### 8.3 Indentação

```c
// ✅ Código bem indentado
if (idade >= 18) {
    printf("Maior de idade\n");
}

// ❌ Código mal indentado (difícil de ler)
if (idade >= 18) {
printf("Maior de idade\n");
}
```

---

## 9️⃣ Resumo de Conceitos por Projeto

### Projeto 01 - Fundamentos Básicos
- ✅ Variáveis e tipos de dados
- ✅ Entrada/Saída (`printf`, `scanf`)
- ✅ Estruturas de decisão (`if/else`)

**Exemplos:** `Futebol.c`, `idade.c`, `nota.c`

### Projeto 02 - Controle de Fluxo
- ✅ Laços de repetição (`for`, `while`)
- ✅ Vetores/Arrays
- ✅ Aplicações práticas (pares, ímpares, cálculos)

**Exemplos:** `lacosFor.c`, `pares.c`, `impares.c`, `vetores.c`

### Projeto 03 - Funções e Estruturas de Controle Avançadas
- ✅ Definição e chamada de funções
- ✅ Parâmetros e retorno
- ✅ Switch Case para múltiplas opções
- ✅ Reutilização de código

**Exemplos:** `funcoes.c`, `comparacao.c`, `QuadradoDeUmNumero.c`, **`CalculadorComSwitchCase.c`**

---

## 🔟 Exercícios de Reforço

### Nível 1 - Fácil
1. Criar um programa que pede 2 números e exibe a soma
2. Verificar se um número é positivo ou negativo
3. Imprimir números de 1 a 20 com um laço `for`

### Nível 2 - Intermediário
1. Criar uma função que calcula a potência de um número
2. Contar quantos pares e ímpares existem em um vetor
3. Encontrar o maior número em um array
4. Criar uma calculadora com switch case

### Nível 3 - Avançado
1. Calcular o fatorial de um número com função recursiva
2. Ordenar um vetor em ordem crescente
3. Criar um menu de sistema com várias operações

---

## 📋 Checklist de Aprendizado

- [x] Compreendo a estrutura básica de um programa em C
- [x] Sei declarar e usar variáveis
- [x] Domino entrada/saída de dados
- [x] Entendo estruturas de decisão (if/else)
- [x] Entendo switch case
- [x] Consigo usar laços de repetição
- [x] Sei criar e chamar funções
- [x] Compreendo vetores e arrays
- [ ] Pronto para aprender Ponteiros
- [ ] Pronto para aprender Strings
- [ ] Pronto para aprender Structs

---

## 📚 Próximos Passos

Após dominar estes fundamentos, você está pronto para:

1. **Ponteiros** - Trabalhar com endereços de memória
2. **Strings** - Manipular texto
3. **Structs** - Criar tipos de dados complexos
4. **Alocação Dinâmica** - Alocar memória em tempo de execução
5. **Arquivos** - Ler e escrever em arquivos
6. **Recursão** - Funções que chamam a si mesmas

---

## 💡 Dica Final

A programação é como aprender um idioma novo. Quanto mais você **pratica**, mais fácil fica. Não tenha medo de errar - os erros são as melhores oportunidades de aprendizado!

**Mantra do Programador:** "Código limpo, mente limpa."
