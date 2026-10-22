Instruções para a prática

Membro 1 da dupla

1. Executar o "fork" do repositório
2. Clonar o repositório na sua máquina localmente (git clone <link>)
3. Adicione a sua dupla como colaborador no repositório (Settings -> Collaborators -> Add People)
4. Criar um repositório com o nome da dupla no diretório "duplas/"
5. Copiar arquivos fib.h, fat.h e modelo.c para o diretório da dupla
6. Subir as alterações para a main (git add . na raiz, git commit e git push)
7. Criar uma branch com o nome feat/nome-fib ou feat/nome-fat com git checkout -b <nome_da_branch> (dependendo de qual função for implementar)
8. Implementar a função, uma por membro da dupla
9. Commitar implementação com git commit -m "Mensagem"
10. Rodar git push --set-upstream origin <sua_branch>
11. Dar o checkout para a main e puxar as modificações da sua branch local com git merge <nome_da_branch>
12. Dar o push para subir para a branch main com git push
    
Membro 2 da dupla (começar depois do passo 6 do membro 1)

1. Clonar o repositório da sua dupla na sua máquina localmente (git clone <link>)
2. Criar uma branch com o nome feat/nome-fib ou feat/nome-fat com git checkout -b <nome_da_branch> (dependendo de qual função for implementar)
3. Implementar a função, uma por membro da dupla 
4. Commitar implementação com git commit -m "Mensagem" (aguardar até o Membro 1 fazer o passo 12)
5. Dar um git checkout para a branch main
6. Puxar as modificações do Membro 1
7. Puxar as modificações da sua branch local com git merge <nome_da_branch>
8. Rodar um git pull --rebase para puxar as modificações do Membro 1
9. Gerar o pull request (para o repositório principal)