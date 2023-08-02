# Estrutura de dados Pilha e Lista na linguagem C.
<p>Saudações, gostaria de apresentar para vocês alguns exemplos bem como a definição desses dois tipos de estruturas!</p>

<h1>O que são essas estruturas?</h1>

<h2>Pilha</h2>
  
<p>As pilhas são estruturas de dados do tipo LIFO (last-in first-out), onde o último elemento a ser inserido, será o primeiro a ser retirado. 
Assim, uma pilha permite acesso a apenas um item de dados - o último inserido. Para processar o penúltimo item inserido, deve-se remover o último.</p>

<h2>Funcionamento de uma Pilha de dados</h2>

<p>Todas as operações em uma pilha podem ser imaginadas como as que ocorre numa pilha de pratos em um restaurante ou como num jogo com as cartas de um baralho:</p>

<ul>
  <li>Criação da pilha (informar a capacidade no caso de implementação sequencial - vetor);</li>
  <li>Empilhar (push) - o elemento é o parâmetro nesta operação;</li>
  <li>Desempilhar (pop);</li>
  <li>Mostrar o topo;</li>
  <li>Verificar se a pilha está vazia (isEmpty);</li>
  <li>Verificar se a pilha está cheia (isFull - implementação sequencial - vetor).</li>
</ul>
<p>A imagem a seguir vai ilustrar bem tanto a adição de um elemento, bem como a remoção do mesmo:</p>

![exemplopilhas](https://github.com/caua-3301/estrutura-de-dados-pilha-e-fila-em-c/assets/134548536/2a4b09e4-d724-407e-aaf8-aa8a0b650ea8")

<h2>Filas</h2>
  
<p>Fila são estruturas de dados bastante utilizadas na computação, onde o primeiro elemento a ser inserido, será também o primeiro a ser retirado. 
Desta forma, serão adicionados elementos no fim e removê-los pelo início.A estrutura de dados fila segue um padrão conhecido como FIFO (first-in first-out), 
onde o primeiro a entrar é o primeiro a sair.</p>

<h2>Funcionamento de uma Fila de dados</h2>

<p>Imagine uma fila de um banco. Ao iniciar o atendimento, o primeiro usuário que chegar à fila se posicionará em seu início. A partir daí, todos os usuários 
que chegarem à fila serão posicionados ao final dela. Sempre que um usuário for chamado para ser atendido, este é removido da fila e o usuário que estava na próxima 
posição passará a ser o início da fila.</p>


<p>Entenda a dição de um elemento na imagem a seguir:</p>

![adicaofila](https://github.com/caua-3301/estrutura-de-dados-pilha-e-fila-em-c/assets/134548536/60828ebd-f090-434d-bda8-8b0a496482bf)

<p>Referência/Créditos:</p> 
<ul>
  <li>https://www.cos.ufrj.br/~rfarias/cos121/pilhas</li>
  <li>https://www.cos.ufrj.br/~rfarias/cos121/filas</li>
</ul>
