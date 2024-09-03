
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
char livre[2][100];
char l[2][100];
float Prix;
int stock;
char newT[4];
for(int i=0;i<2;i++){
 printf("enter Titre du livre\t");
    scanf("%99s",livre[i]);
    
    printf("enter nom du livre\t");
    scanf("%99s",l[i]);
   
    printf("enter Prix du livre\t");
    scanf("%f",&Prix);
  printf("enter  du livre\t");
    scanf("%d",&stock);
}  
for(int i=0;i<2;i++){
     printf("\le livre :\n");
    printf("Titre : %s\n", livre[i]);
    printf("Nom de l'auteur : %s\n", l[i]);
    printf("Prix : %.2f\n", Prix);
    printf("Stock : %d\n", stock);
}
    return 0;
}
