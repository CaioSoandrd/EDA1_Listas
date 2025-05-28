// Função auxiliar recursiva que verifica se todos os pares internos somam o mesmo valor
int pa_aux(int *v, int primeiro, int ultimo, int soma) {
    if (primeiro > ultimo) {
        return 1;
    }
    if (v[primeiro] + v[ultimo] != soma) {
        return 0;
    }
    return pa_aux(v, primeiro + 1, ultimo - 1, soma);
}

int pa_recursiva(int *v, int primeiro, int ultimo) {
    int soma = v[primeiro] + v[ultimo];
    return pa_aux(v, primeiro + 1, ultimo - 1, soma);
}
