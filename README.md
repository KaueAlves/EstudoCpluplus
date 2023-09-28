# Estudo C++

## Livro de estudo
- C++: Como Programar 5a Ediçao - https://www.amazon.com.br/como-programar-H-M-Deitel/dp/8576050560/ref=cm_cr_arp_d_product_top?ie=UTF8

### Passo a passo para executar o projeto.

1.   Instale VSCode
2.   Instale os plugins do VSCode `( "C/++", "C/C++ Extension Pack")`
3.   Instale MINGW-X64 - https://code.visualstudio.com/docs/languages/cpp#_example-install-mingwx64-on-windows
4.   Configure variaveis de ambiente `C:\msys64\mingw64` e `C:\msys64\ucrt64\bin`
5.  Crie ou altere o arquivo na raiz do projeto `.vscode/tasks.json`
    <details>
    <summary>.vscode/tasks.json</summary>

        {
            "tasks": [
                {
                    "type": "cppbuild",
                    "label": "C/C++: g++.exe build active file",
                    "command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
                    "args": [
                        "-fdiagnostics-color=always",
                        "-g",
                        "*.cpp",
                        "-o",
                        "${fileDirname}\\${fileBasenameNoExtension}.exe",
                        "-std=c++20"
                    ],
                    "options": {
                        "cwd": "${fileDirname}"
                    },
                    "problemMatcher": [
                        "$gcc"
                    ],
                    "group": {
                        "kind": "build",
                        "isDefault": true
                    },
                    "detail": "Task generated by Debugger."
                }
            ],
            "version": "2.0.0"
        }
        
    </details>
6. Configure uma hotkey para executar o "C/C++: Run C/C++ File", em Ctrl + K, Ctrl + S.
7. Execute o projeto

### Problemas

    1. Problema em rodar utilizando o Developer command prompt, o programa só executava arquivos na raiz e gerada muito lixo.
    2. Só executa 1 arquivo de cada vez
    3. Build não sendo executado ao apertar f5
    4. Não sei buildar um projeto com muitas pastas e arquivos .cpp dentro das subpastas


### Soluções ou Contornos

    1. Instalado o Mingw-x64 windows - https://code.visualstudio.com/docs/languages/cpp#_example-install-mingwx64-on-windows (Instalação e adição do C:\msys64\mingw64 e C:\msys64\ucrt64\bin )
    2. Alterado o tasks.json, trocando o nome do arquivo por *.cpp
    3. Existe um comando especifico para executar programas em c++, adicionei a hotkey Ctrl+f6 para executar o projeto.

#### Observações

- Pulei os exercicios de repetidores( For, do_While) 

---

    v1.0.8
    - Adição de Ponteiros
    - Ponteiros de função
    - Ponteiros de 

---

    v1.0.8
    - Adição de Vetores, faltando novos testes e comentários.

---

    v1.0.7
    - Adição Livros e Guias

---

    v1.0.6
    - Adição de função recursiva

---

    v1.0.5
    - Adição de valor padrão nos parametros de uma função

---

    v1.0.4
    - Adição de testes de referência

---

    v1.0.3
    - Adição dos testes de escopoo, variaveis globais, locais e estáticas

---

    v1.0.2
    - Adição do Jogo de Azar

---

    v1.0.1
    - Adição dos randomizadores
    - Arquivo de dicas e resumos

---

    v1.0.0
    - Bloqueio na branch main.
    - Primeiros exemplos de codificação
    - Início da padronização nos commits
