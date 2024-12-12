#include<stdio.h>
void entre(int a , int tab[]) {
for(int i =0; i <a;i++) {
printf("entre la valeur de taille : ");
    scanf("%d",&tab[i]);
         }
}
void sort(int a, int tab[]) {
    for (int j =0;j<a;j++) {
        printf("tab[%d] = %d\n",j ,tab[j]);
    }
}
int main () {
    int a;
    int tab[a];
    int q=1;
    while(q==1) {
        do {
            printf("donner la taille du tableau :");
            scanf("%d",&a);
            if (a <= 0) {
                printf("taille invalide.\n");
            }
        }while (a<=0);
        entre(a , tab);
        sort(a,tab);
        printf("\n voulez-vous redemarer le programme ? \n");
        printf("tapez 1 pour redemarer ou 0 pour quitter : ");
        scanf("%d",&q);

        if ((q!=1) && (q!=0)) {
            printf("erreur !  entrer (1 pour redemarer ou 0 pour quitter) \n");
        }
    }
    return 0;
}





