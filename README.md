# Estudo da Linguagem C
![Linguagem C](img/Lingaugem%20C.png)
## Conteúdo de estudo
### Introdução

## Veja o sumário abaixo:
**É apresentado todo conteúdo que será apresentado desenvolvido**
>Você verá como instalar o seu [**Compilador em C**](https://visualstudio.microsoft.com/pt-br/vs/features/cplusplus/)
>A IDE Vscode da Microsoft para escrever seus códigos
>Também será apresentado a instalação das extensões utilizados

# Sumário
  ## Conteúdo 
  + Instalar o Compilador:
    - No [**Windows**](http://www.codeblocks.org/downloads/binaries/#imagesoswindows48pnglogo-microsoft-windows);
    - No [**Linux**](http://www.codeblocks.org/downloads/binaries/#imagesoswindows48pnglogo-microsoft-windows);
    - No [**Mac**](http://www.codeblocks.org/downloads/binaries/#imagesoswindows48pnglogo-microsoft-windows);
  + Instalar VsCode:
    - No [**Windows**](https://code.visualstudio.com/download);
    - No [**Linux**](https://code.visualstudio.com/download);
    - No [**Mac**](https://code.visualstudio.com/download);
  + Escrevendo o primeiro código
  + Compilando o primeiro código
  + Executado o primeiro código
---
## Intalação do compilador Windows
### Distribuição [Windows 10](https://www.microsoft.com/pt-br/software-download/windows10ISO)
[![Logo Windows](img/windows%2010.png)](https://www.microsoft.com/pt-br/software-download/windows10ISO)

---
## Intalação do compilador Linux
### Distribuição [Ubuntu](https://www.ubuntu.com)
[![Logo Ubuntu](img/Ubuntu%20Linux.png)](https://www.ubuntu.com)

>**Atualização do sistema**
><pre>$<code>sudo apt uptade</code></pre>
><pre>$<code>sudo apt upgrade</code></pre>

---
## Intalação do compilador Mac
### Distribuição [Mac OS X](https://www.apple.com/br/macos/monterey/)
[![Logo Mac Os X](https://freepngimg.com/save/16033-os-x/304x222)](https://www.apple.com/br/macos/monterey/)

---
## Intalação do VisualStudioCode no Windows, Linux e Mac
### Distribuição [Vs code](https://code.visualstudio.com/download)
>O Visual Studio Code (VS Code) é um editor de código de .código aberto desenvolvido pela Microsoft. A saber, ele está disponível para Windows, Mac e Linux. É criado com Electron, ferramenta criada pelo GitHub que permite a criação de softwares Desktop com HTML, CSS, JavaScript e entres outros.

[![Logo VScode](img/Visual%20Studio%20code.png)](https://code.visualstudio.com/download)

---
## Exemplo de um Programa
>Primeiro código
><pre><code>#include <stdio.h>
>int main (){
>printf("Olá mundo!\nHello World!\n");
>return 0;
>}</code></pre>
 - Um programa em C é composto por um conjunto de Funções. A função pela qual o programa começa a ser executado chama-se main.
 - Após cada cada comando em C deve-se colocar um ; (ponto-e-vírgula).
 - Um programa em C deve ser Identado para que possa ser lido com mais facilidade.
---
## Executado o primeiro código
>Executado o código
><pre><code>gcc NomeDoArquivo.c -o NomedoARquivo</code></pre>
><pre><code>./NomeDoArquivo</code></pre>
