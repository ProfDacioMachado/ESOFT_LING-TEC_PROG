

Este documento orienta a entrega da documentação inicial do projeto (valendo 3,0 pontos). Vocês devem utilizar um arquivo `.md` (Markdown) no repositório do GitHub (recomendamos nomeá-lo como `README.md` ou `DOCUMENTACAO.md`) para descrever o sistema a ser construído.

Abaixo, apresentamos um modelo de como esse documento deve ser estruturado.

---
---

# Título do Projeto: Sistema de Gerenciamento de Biblioteca Universitária

## 1. Descrição do Sistema
*Apresente nesta seção uma breve descrição do sistema proposto.*

**Exemplo:**
O projeto consiste em um sistema de gerenciamento para uma biblioteca universitária desenvolvido em linguagem C. O sistema permitirá o controle do acervo de livros e o registro de empréstimos feitos pelos alunos. O programa utilizará arquivos binários para persistência de dados, garantindo que as informações de livros cadastrados e alunos não sejam perdidas ao fechar a aplicação. 

O foco principal é resolver a problemática de controle manual de empréstimos, automatizando a busca por livros disponíveis e registrando quem está com qual exemplar.

---

## 2. Fluxo de Utilização Esperado para o Sistema
*Descreva como o usuário interage com o programa.*

**Exemplo:**
1. Ao iniciar o programa, o usuário visualizará um menu principal com as opções:
   - `1. Cadastrar Livro`
   - `2. Cadastrar Aluno`
   - `3. Realizar Empréstimo`
   - `4. Devolver Livro`
   - `5. Listar Livros Disponíveis`
   - `6. Sair`
2. Caso o usuário escolha `1`, o sistema solicitará Título, Autor, ISBN e Quantidade. Em seguida, salvará a *struct* no arquivo `livros.dat`.
3. Se escolher `3`, o sistema pedirá o RA do aluno e o ISBN do livro. O programa validará se o livro possui quantidade > 0 e, em caso positivo, registrará o empréstimo no arquivo `emprestimos.dat`, decrementando a quantidade no arquivo de livros.
4. As operações de erro (ex: livro não encontrado, aluno não cadastrado) exibirão mensagens claras e retornarão o usuário ao menu principal.

---

## 3. Fluxograma da Lógica do Sistema
*Insira a representação gráfica do funcionamento do seu código. Em Markdown, você pode inserir imagens da seguinte forma:*

![Fluxograma Principal](link_para_a_imagem_no_seu_repositorio.png)

*(Vocês podem utilizar ferramentas gratuitas como Draw.io, Lucidchart ou Miro para desenhar o fluxograma, exportar como PNG e fazer o upload na pasta do projeto no GitHub).*

---

## 4. Estrutura de Dados
*Apresente nesta parte a estrutura de dados (structs) do projeto. Mostre como os dados serão organizados na memória.*

**Exemplo:**
O sistema utilizará as seguintes estruturas heterogêneas para gerenciar as informações:

```c
// Estrutura para armazenamento dos Livros
typedef struct {
    char isbn[20];
    char titulo[100];
    char autor[100];
    int quantidade_disponivel;
    int ativo; // 1 para ativo, 0 para removido (exclusão lógica)
} Livro;

// Estrutura para armazenamento dos Alunos
typedef struct {
    int ra;
    char nome[100];
    char curso[50];
} Aluno;

// Estrutura para o controle de Empréstimos
typedef struct {
    int id_emprestimo;
    int ra_aluno;
    char isbn_livro[20];
    char data_emprestimo[11]; // formato DD/MM/AAAA
    char data_devolucao[11];
    int status; // 1 para Emprestado, 0 para Devolvido
} Emprestimo;
