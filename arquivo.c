#include <stdio.h>
#include <string.h>
#include "arquivo.h"
#include "analise.h"   /* para recalcular GC apos carregar */

/* ===================================================================
 * arquivo.c
 * Implementacao das funcoes de salvar/carregar arquivo.
 * =================================================================== */

/* ---------- TODO: implementar salvarArquivo ----------
 *
 * Passos:
 *   1) Abra o arquivo ARQUIVO_PADRAO com fopen no modo "w".
 *   2) Verifique se a abertura funcionou (NULL = erro).
 *   3) Para cada sequencia (loop de 0 ate total-1), use fprintf
 *      para gravar duas linhas:
 *          fprintf(arq, "%s\n", banco[i].nome);
 *          fprintf(arq, "%s\n", banco[i].dna);
 *   4) Feche o arquivo com fclose.
 *   5) Imprima mensagem informando quantas foram salvas.
 *
 * Atencao: nunca esqueca de testar se fopen retornou NULL,
 * porque acessar um ponteiro NULL trava o programa!
 * ------------------------------------------------------- */
void salvarArquivo(Sequencia *banco, int total) {
    /* TODO: implementar */
    (void)banco;
    (void)total;
    printf(">> [TODO] salvarArquivo ainda nao implementada.\n");
}

/* ---------- TODO: implementar carregarArquivo ----------
 *
 * Passos:
 *   1) Abra o arquivo ARQUIVO_PADRAO com fopen no modo "r".
 *   2) Verifique se a abertura funcionou (se NULL, mensagem
 *      "Arquivo nao encontrado" e retorna).
 *   3) Zere o contador *total (sobrescreve o banco atual).
 *   4) Em um laco while, leia duas linhas por vez (uma com o nome
 *      e outra com o DNA) usando fgets:
 *
 *          while (*total < MAX_SEQ &&
 *                 fgets(banco[*total].nome, TAM_NOME, arq) != NULL &&
 *                 fgets(banco[*total].dna,  TAM_DNA,  arq) != NULL) {
 *              // remove o '\n' do final de cada linha
 *              banco[*total].nome[strcspn(banco[*total].nome, "\n")] = '\0';
 *              banco[*total].dna [strcspn(banco[*total].dna,  "\n")] = '\0';
 *              // atualiza tamanho e GC
 *              banco[*total].tamanho = strlen(banco[*total].dna);
 *              banco[*total].gc = calcularGC(banco[*total].dna,
 *                                            banco[*total].tamanho);
 *              (*total)++;
 *          }
 *
 *   5) Feche o arquivo.
 *   6) Imprima quantas sequencias foram carregadas.
 * ------------------------------------------------------- */
void carregarArquivo(Sequencia *banco, int *total) {
    /* TODO: implementar */
    (void)banco;
    (void)total;
    printf(">> [TODO] carregarArquivo ainda nao implementada.\n");
}
