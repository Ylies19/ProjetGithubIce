#include <stdio.h>
#include <unistd.h>  // pour la fonction usleep
#define MAX 30       // Taille maximale de la suite de Fibonacci

// Fonction pour afficher une animation de chargement
void loading_effect() {
    const char *spinner = "|/-\\";
    for (int i = 0; i < 20; ++i) {
        printf("\rCalcul en cours... %c", spinner[i % 4]);
        fflush(stdout);  // Vide le buffer pour afficher immédiatement
        usleep(100000);  // Pause de 100 millisecondes
    }
    printf("\n");
}

// Fonction pour calculer la suite de Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Suite de Fibonacci jusqu'à %d termes :\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        usleep(200000);  // Pause de 200 millisecondes entre les affichages
    }
    printf("\n");
}

int main() {
    int terms = MAX;

    // Lancement de l'animation de chargement
    loading_effect();

    // Calcul et affichage de la suite de Fibonacci
    fibonacci(terms);

    return 0;
}
