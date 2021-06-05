#include <stdlib.h>
#include <stdio.h>
#include <string.h>

                                                           //Assia Essarhani   Assia Rissafi

typedef struct DateFinDebut { //date
        int day ;
        int month ;
        int year ;
}date;
typedef struct Voiture {

        int idVoiture;
        char marque[15];
        char nomVoiture[15];
        char couleur[7];
        int nbplaces;
        int prixJour;
        int EnLocation;
} voiture;
typedef struct contratLocation
{
        float numContrat;
        int idVoiture;
        int idClient;
        date debut;
        date fin;
        int cout;
} contrat;
typedef struct Client
{
        int idClient;
        char nom[20];
        char prenom[20];
        int CIN;
        char adresse[15];
        int telephone;
}client;

  //Presentation des Menus    :

int Menu_Principal () {
    int choix;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t    Menu Principal     ");
    printf("\n\t\t\t\t\t\t\t\t    ************** \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");

    printf("\n \t\t\t\t\t\t\t\xba      Location..............1      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Gestion voitures......2      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Gestion clients.......3      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Quitter...............4      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n \t\t\t\t\t\t\t\t  Votre choix  :   " );
                              scanf("%d",&choix);
            return choix;
}
int Gestion_Voiture () {
      int choix;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tGestion des voitures     ");
    printf("\n\t\t\t\t\t\t\t\t******************** \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");

    printf("\n \t\t\t\t\t\t\t\xba      Liste des voitures....1      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Ajouter voiture.......2      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Modifier voiture......3      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Supprimer voiture ....4      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Retour ...............5      \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n \t\t\t\t\t\t\t\t  Votre choix  :   " );
                              scanf("%d",&choix);
            return choix;
}
int Location_voiture () {
    int choix;
     printf("\n\n\n\n\n\t\t\t\t\t\t\t\tLocation d une voitures     ");
    printf("\n\t\t\t\t\t\t\t\t*********************** \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");

    printf("\n \t\t\t\t\t\t\t\xba      Visualiser contrat........1  \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Louer voiture.............2  \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Retourner voiture...... ..3  \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Modifier  contrat ........4  \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Retour ...................5  \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n \t\t\t\t\t\t\t\t  Votre choix  :   " );
                              scanf("%d",&choix);
            return choix;

}
int Gestion_client () {
    int choix;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tGestion des clients    ");
    printf("\n\t\t\t\t\t\t\t\t******************* \n\n");

    printf("\n \t\t\t\t\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");

    printf("\n \t\t\t\t\t\t\t\xba      Liste des clients........1   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Ajouter client...........2   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Modifier client .........3   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Supprimer client ........4   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba      Retour ..................5   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xba                                   \xba");
    printf("\n \t\t\t\t\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n \t\t\t\t\t\t\t\t  Votre choix  :   " );
                              scanf("%d",&choix);
            return choix;

}
           //Gestion des voitures   :
void Liste_voiture() {  //Fonction donner la lister des voiture
            FILE *V = NULL ;voiture voiture;

      V=fopen("Voitures.txt","r");
      if (V==NULL){printf("\n\n\t\t\t Le fichier est introuvable  !");}

      else {
                        printf(" \n\n                                                        Liste des voitures   \n");
           printf("   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
           printf("   \xb3  ID du voiture       \xb3 la Marque           \xb3 le Nom              \xb3 le Coloure            \xb3 Num Place           \xb3 Prix Joure          \xb3 Enlocation          \xb3\n");
           printf("   \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

       while (fscanf(V,"%d %s %s %s %d %d %d",&voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation)!=EOF) {

         int A=nombre_chifre(voiture.idVoiture);
         printf("   \xb3  %d",voiture.idVoiture);print(A);
         A=nombre_chifre(voiture.nbplaces); //il calcule le nombre des chiffre de id Voiture
         A=strlen(voiture.nomVoiture);          printf("%s",voiture.marque);          print(A);//il ajoute des espaces
         A=strlen(voiture.couleur);             printf("%s",voiture.nomVoiture);      print(A);
         A=strlen(voiture.nbplaces);            printf("%s",voiture.couleur);         print(A);
         A=nombre_chifre(voiture.nbplaces);    printf("%d",voiture.nbplaces);        print(A);
         A=nombre_chifre(voiture.prixJour);    printf("%d DH",voiture.prixJour);        print(A+3);
         A=nombre_chifre(voiture.EnLocation);  printf("%d",voiture.EnLocation);      print(A);
         printf("\n");
         printf("      \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
       }

      fclose(V);}
}
  void Add_Voiture (){//Fonction pour ajouter une voiture
      voiture voiture;
      FILE *V= NULL ;
      V= fopen("Voitures.txt","a");
      if(V==NULL){printf("\n\n\t\t\t Le fichier est introuvable  !");}
            else {
                   jv:
                printf("\n\n\n                                    Les Information de la voiture a ajouter  :\n\n");
                printf("                                      * * * * *  * * * * * * * * * * * * * * * * * * * * * \n");
                printf("                                      *                       Donner Id du voiture : ");
                scanf("%d",&voiture.idVoiture);
                     if(rech_voi(voiture.idVoiture)!=0) {system("cls");printf("\n\t\t\t\t ID est deja stocke ! tape un autre. ");goto jv;} // Les ID sont défèrents

      else {
          printf("                                            *                         La Marque : ");
           scanf("%s",voiture.marque);
           printf("                                           *                           Le Nom : ");
           scanf("%s",voiture.nomVoiture);
           printf("                                           *                      La Couleur : ");
           scanf("%s",voiture.couleur);
           printf("                                           *                        Num_Place : ");
           scanf("%d",&voiture.nbplaces);
           printf("                                           *                         Le Prix : ");
           scanf("%d",&voiture.prixJour);
           printf("                                           *                       Enlocation: 0");                        //Pa Défaut
           voiture.EnLocation=0;
           printf("\n                                         * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
           printf("\n\n\n                                              La Voitureest Ajouter Avec suuccee \n");
           fprintf(V,"%d %s %s %s %d %d %d\n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);}
           }
           fclose(V);
  }

void Modifier_voiture () {
         FILE *old,*change_voi;      old=fopen("Voitures.txt","r");    change_voi=fopen("new.txt","w");
         int M,i=0 ;
         if (old==NULL){printf("\n\n\n\n\t\t\t\tLe Fichier est Introvable !");}
          voiture voiture;    printf("\n\n\t\t\t\t\t\t   Donnee l'Id du voiture a Modifier : ");scanf("%d",&M);
         while (fscanf(old,"%d %s %s %s %d %d %d\n",&voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation)!=EOF){
         if (M==voiture.idVoiture) {  i=1;

                  printf("\n\n\n                                    Les Nouveux Information de la voiture   :\n\n");         //Id reste le meme
                printf("                                      * * * * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
          printf("                                            *                         La Marque : ");
           scanf("%s",voiture.marque);
           printf("                                           *                           Le Nom : ");
           scanf("%s",voiture.nomVoiture);
           printf("                                           *                      La Couleur : ");
           scanf("%s",voiture.couleur);
           printf("                                           *                        Num Place : ");
           scanf("%s",voiture.nbplaces);
           printf("                                           *                         Le Prix : ");
           scanf("%d",voiture.prixJour);
           printf("                                           *                       EnLocation: %d\n",voiture.EnLocation);   //EnLocation nesra pas changer
           printf("\n                                         * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
           printf("\n\n\n                                              La Voiture est Modifier Avec suuccee \n");
           fprintf(change_voi,"%d %s %s %s %d %d %d\n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                                }
                           else {fprintf(change_voi,"%d %s %s %s %d %d %d\n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);   }
         }

        fclose(old);                 fclose(change_voi);
         remove("Voitures.txt");      rename("new.txt","Voitures.txt");

           if (i==0) {printf("\n\t\t\t\t\t\t\t Id est incorrecte !!!");}
           printf("\n\n\t\t\t\t\t\t Tape 1------------>choisir un autre  Id.\n\t\t\t\t\t\t                      0 --------------->Termine :");     scanf("%d",&i);
           if (i==1) Modifier_voiture ();           system("cls");}

void Supprimer_Voiture(){//function suprim� voiture
            FILE *old,*change_voi;
      old=fopen("Voitures.txt","r");
      change_voi=fopen("new.txt","w");

  if(old==NULL) {printf("\n\n\t\t\t Le fichier est Introuvable !");}

  else {
    voiture voiture;
    int M,i=0;
         printf("\n\n\n\t\t\t\t\t\t Donnee l'Id du voiture qui tu veux la supprimer :");
         scanf("%d",&M);
         while (fscanf(old,"%d %s %s %s %d %d %d",&voiture.idVoiture,voiture.marque,voiture.couleur,voiture.nomVoiture,voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation) !=EOF) {
                   if(M==voiture.idVoiture) {
                                  if(voiture.EnLocation==1) {       printf("\n\t\t\t\t\t\t En ne peut pas supprimer la voiture (il est louer)");
                                                 fprintf(change_voi,"%d %s %s %s %d %d %d\n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                                                                   i++;}

                                          else            {  printf(" \t\t\t\t \t La voiture est Supprimer Avec Succes ");      i++ ;}
                                          }

                                          else
                                          {
                                            fprintf(change_voi,"%d %s %s %s %d %d %d\n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                                          }
         }
                                          fclose(old);        fclose(change_voi);
                                          remove("Voiture.txt");            rename("new.txt","Voiture.txt");

                                          if(i==0) {printf("\n\n\t\t\t\t\t\t L'Id est inncorecte !...");}
                                          printf("\n\n\t\t\t\t\t\t Tape 1 ------------->Choisire Un Autre Id \n\t\t\t\t\t\t\t                     0-------------->Termine  :");
                                          scanf("%d",&i);
                                          if(i==1) Supprimer_Voiture () ;
                                  }
         }

         //Gestion de client :
  void Liste_clients() {  //Fonction donner la lister des clients
            FILE *F = NULL ;client client;

      F=fopen("Clients.txt","r");
      if (F==NULL){printf("\n\n\t\t\t Le fichier est introuvable!");}

      else {
                        printf(" \n\n                                                        Liste des Clients     \n");
           printf("     \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
           printf("     \xb3    ID du Client           \xb3 le Nom             \xb3 le Prenom                   \xb3 le CIN               \xb3 L'Adresse            \xb3 Telephone                       \xb3\n");
           printf("     \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

       while (fscanf(F,"%d %s %s %d %s %d ",&client.idClient,client.nom,client.prenom,&client.CIN,client.adresse,&client.telephone)!=EOF) {



         printf("    \xb3   %d",client.idClient);  int A=nombre_chifre(client.idClient);      // Calcule le nombre des chiffre de Id client  print(A);

         printf("%s",client.nom);                A=strlen(client.nom);   print(A);    // ajoute des espaces
         printf("%s",client.prenom);             A=strlen(client.prenom);  print(A);
         printf("%d",client.CIN);                A=nombre_chifre(client.CIN);  print(A);
         printf("%s",client.adresse);            A=strlen(client.adresse);      print(A);
         printf("+212 %d",client.telephone);     A=nombre_chifre(client.telephone); print(A+5);



         printf("\n    \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
       }
      }
      fclose(F);}

  int Add_Client (){//Fonction pour ajouter une voiture
      client client;
      FILE *F= NULL ;
      F= fopen("Clients.txt","a");
      if(F==NULL){printf("\n\n\t\t\t Le fichier est introuvable  !");}
            else {
                   jc:
                printf("\n\n\n                                    Les Information du client a ajouter  :\n\n");
                printf("                                      * * * * *  * * * * * * * * * * * * * * * * * * * * * \n");
                printf("                                      *                       Donner ID du client : ");
                scanf("%d",&client.idClient);
                     if(rech_cl(client.idClient)!=0) {system("cls");printf("\n\t\t\t\t ID est deja stocke ! tape un autre. ");goto jc;} // Les ID sont défèrents

      else {
          printf("                                            *                          Le Nom : ");
           scanf("%s",client.nom);
           printf("                                           *                        Le Prenom: ");
           scanf("%s",client.prenom);
           printf("                                           *                              CIN: ");
           scanf("%d",&client.CIN);
           printf("                                           *                        L'Adresse: ");
           scanf("%s",client.adresse);
           printf("                                           *                        Telephone: ");
           scanf("%d",&client.telephone);
           printf("                                           * * * * * * * * * * * * * * * * * * * * * * * * * \n");
           printf("\n\n\n                                              La Client est Ajouter Avec suuccee \n");
           fprintf(F,"%d %s %s %d %s %d\n",client.idClient,client.nom,client.prenom,client.CIN,client.adresse,client.telephone);
           }

           fclose(F);return client.idClient;}
  }

void Modifier_Client () {
         FILE *old,*change_cl;      old=fopen("Clients.txt","r");    change_cl=fopen("new.txt","w");
         int M,i=0 ; client client;
         if (old==NULL) {printf("\n\n\t\t\t\t\t\t   Le fichier esi introvable : ");}
         else {
                printf("\n\n\n\n\t\t\t\t Donner L'Id du Client a Modifier : ");
                scanf("%d",&M);
            while(fscanf(old,"%d %s %s %d %s %d\n",&client.idClient,client.nom,client.prenom,&client.CIN,client.adresse,&client.telephone)!=EOF){
                               if(M==client.idClient){
           printf("\n\n\n                                    Les Nouveux Information du clients  :\n\n");         //Id reste le meme
           printf("                                      * * * * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
           printf("                                            *                         Le Nom     : ");
           scanf("%s",client.nom);
           printf("                                           *                           La Prenom : ");
           scanf("%s",client.prenom);
           printf("                                           *                              CIN    : ");
           scanf("%d",&client.CIN);
           printf("                                           *                           L'Adresse : ");
           scanf("%s",client.adresse);
           printf("                                           *                    Telephone   : +212 ");
           scanf("%d",&client.telephone);
           printf("\n                                         * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
           printf("\n\n\n                                              Le client est Modifier Avec suuccee \n");
           fprintf(change_cl,"%d %s %s %d %s %d\n",client.idClient,client.nom,client.prenom,client.CIN,client.adresse,client.telephone);
           i=1;

                                }
                           else {fprintf(change_cl,"%d %s %s %d %s %d\n",client.idClient,client.nom,client.prenom,client.CIN,client.adresse,client.telephone);   }
}
           fclose(old);                            fclose(change_cl);
           remove("Clients.txt");              rename("new.txt","Clients.txt");

           if(i==0) {printf("\n\t\t\t\t\t\t\t Id est incorrecte !!!");}    //verification de Id :
           printf("\n\n\t\t\t\t\t\t Tape 1------------>choisir un autre  Id.\n\t\t\t\t\t\t                      0 --------------->Termine :");
           scanf("%d",&i);
           if (i==1) Modifier_Client (); }          system("cls");
}

void Supprimer_Client(){//fonction pour suprimer client
            FILE *old,*change_cl;
      old=fopen("client.txt","r");
      change_cl=fopen("new.txt","w");

  if(old==NULL) {printf("\n\n\t\t\t Le fichier est Introuvable !");}

  else {
    client client;
    int M,i=0;
         printf("\n\n\n\t\t\t\t\t\t\t\t\t\t Donne l'Id du client qui tu veux la supprimer :");
         scanf("%d",&M);
         while (fscanf(old,"%d %s %s %d %s %d\n",&client.idClient,client.nom,client.prenom,&client.CIN,client.adresse,&client.telephone )!=EOF) {
                   if(M==client.idClient) {

                              printf(" \t\t\t\t \t Le client est Supprimer Avec Succes ");
                                          i=1;
                                          }
                                          else
                                          {
                                            fprintf(change_cl,"%d %s %s %d %s %d\n",client.idClient,client.nom,client.prenom,client.CIN,client.adresse,client.telephone);
                                          }
         }
                                          fclose(old);        fclose(change_cl);
                                          remove("Clients.txt");            rename("new.txt","Clients.txt");

                                          if(i==0) {printf("\n\n\t\t\t\t\t\t L'Id est incorrecte !...");}
                                          printf("\n\n\t\t\t\t\t\t Tape 1 ------------->Choisire Un Autre Id \n\t\t\t\t\t\t\t                     0-------------->Termine  :");
                                          scanf("%d",&i);
                                          if(i==1) {
                                            system("cls");Supprimer_Client () ;}
                                  }
}

int rech_con(int id){//recherche de l'id_contralocation
    FILE *T=NULL; contrat c;
	T=fopen("Contrat.txt","r");
	if(T==NULL){
		printf("\n\n\t\t\t Le fichier est introvable !");
	}
	else{

		while(fscanf(T,"%f %d %d %d %d %d %d %d %d %d\n",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.year,&c.debut.month,&c.debut.day,&c.fin.year,&c.fin.month,&c.fin.day,&c.cout)!=EOF){
			if(c.numContrat==1){
			    fclose(T);
			    return 0;
			}
		}
	}
}

int rech_voi(int id) {//recherche de l'id_voiture
    FILE *V =NULL;
    voiture voiture; int i=0;
    V=fopen("Voitures.txt","r");
    while(fscanf(V,"%d %s %s %s %d %d %d",&voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation)!=EOF){
    	if(id==voiture.idVoiture)i++;
	}
	fclose(V);
	return i ;

 }

int rech_cl(int id){//recherche de l'id_client
    FILE *F = NULL;
	client client;
	 int i=0;
    F=fopen("Clients.txt","r");
    while(fscanf(F,"%d %s %s %d %s %d\n",&client.idClient,client.nom,client.prenom,&client.CIN,client.adresse,&client.telephone)!=EOF){
    	if(id==client.idClient)i++;
	}
	 fclose(F);
	 return i;
}


//contronle des informations de clien et voiture


int VNP (char N[20],char P[20],int *idc){
	FILE *F = NULL;
	F=fopen("Clients.txt","r");
	int i=0;
	client C ;
	while(fscanf(F,"%d %s %s %d %s %d \n",&C.idClient,C.nom,C.prenom,&C.CIN,C.adresse,&C.telephone) !=EOF){
		if(strcmp(N,C.nom)==0 && strcmp(P,C.prenom)==0){
			i++;
			*idc=C.idClient;
		}
	}
	fclose(F);
	return i;
}

int VD (char M[15],char N[15],char C[7],int *e, int *idv,int *prix, int *place){
	FILE* V = NULL;
	int i=0;
	voiture v;
	V=fopen("Voitures.txt","r");
	while(fscanf(V,"%d %s %s %s %d %d %d",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,&v.EnLocation)!=EOF){
		if(strcmp(M,v.marque)==0 && strcmp(N,v.nomVoiture)==0  && strcmp(C,v.couleur)==0){
			i++;
			*e=v.EnLocation;
			*idv=v.idVoiture;
			*prix=v.prixJour;
			*place=v.nbplaces;
		}
	}
	fclose(V);
	return i;
}


//les voiture disponible

void disponible(){
	voiture v;
	FILE *V = NULL ;
	V=fopen("Voitures.txt","r");
	if(V==NULL) {
		printf("\n\n\t\t\t Le fichier et introvable  ! ");
	}
	else{
		        printf("\n\n                                                                           Liste des onibles \n");
		printf("   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
		printf("   \xb3   ID du Voiture       \xb3 La Marque         \xb3 Le Nom         \xb3 Le colore          \xb3 Num place        \xb3 Prix joure         \xb3 Enlocation           \xb3\n");
		printf("   \xd3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");

		while(fscanf(V,"%d %s %s %s %d %d %d",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,&v.EnLocation ) !=EOF){
			if(v.EnLocation==0){
				int a=nombre_chifre(v.idVoiture);
				printf("   \xb3  %d",v.idVoiture); print(a);
				a=nombre_chifre(v.nbplaces);
				a=strlen(v.marque);                   printf("  %s",v.marque);           print(a);
				a=strlen(v.nomVoiture);               printf("  %s",v.nomVoiture);       print(a);
				a=strlen(v.couleur);                  printf("  %s",v.couleur);          print(a);
				a=nombre_chifre(v.nbplaces);          printf("  %d",v.nbplaces);         print(a);
				a=nombre_chifre(v.prixJour);          printf("  %d DH",v.prixJour);      print(a);
				a=nombre_chifre(v.EnLocation);        printf("  %d",v.EnLocation);        print(a);
				printf("\n");
				printf("   \xd3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
			}
		}
		fclose(V);
	}
}


//calcule le cout de la location

int calculer(int anneeF,int moisF,int jourF,int anneeD,int moisD,int jourD,int prix){

	return ((anneeF*365+moisF*30+jourF)-(anneeD*365+moisD*30+jourD))*prix;
}


//Des fonctions pour la bonne présentation

int nombre_chifre(int n){
	int i=0;
	do{
		i++;
		n=n/10;
	}while(n!=0);
}

void print(int a){
	for(a;a<22;a++){
		if(a==20) printf("\xb3");
		else      printf(" ");
	}
}

void fordelay(int j){
	int i,k;
	for(i=0;i<j;i++) k=i;
}



void Visualiser_Contrat() {  // Fonction donner la forme d'une contrat
    FILE *T=NULL ;
    T=fopen("Contrat.txt","r");
    if(T==NULL){
    	printf("\n\n\t\t\t\t Le fichier est introuvable  !");
	}
	else{
		contrat contrat;
		int nm,comp=0;
		printf("Donne le numèro du contrat a vusialise :"); scanf("%d",&nm);
		while(fscanf(T,"%f %d %d %d %d %d %d %d %d %d\n",&contrat.numContrat,&contrat.idVoiture,&contrat.idClient,&contrat.debut.year,&contrat.debut.month,&contrat.debut.day,&contrat.fin.year,&contrat.fin.month,&contrat.fin.day,&contrat.cout)!=EOF){
			if(contrat.numContrat==nm){
				printf("\n\n\t\t\t\t\t\t\t\t       \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
				printf("\t\t\t\t\t\t\t\t        \xb3  ID Contrat : %d       \n",contrat.numContrat);
				printf("\t\t\t\t\t\t\t\t       \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
				printf("\t\t\t\t\t\t\t\t    ID Voiture : %d       \n",contrat.idVoiture);
				printf("\t\t\t\t\t\t\t\t     ID Client : %d       \n",contrat.idClient);
				printf("\t\t\t\t\t\t\t\t    anne debur : %d  %d %d     \n",contrat.debut.year,contrat.debut.month,contrat.debut.day);
				printf("\t\t\t\t\t\t\t\t      anne fin : %d  %d %d     \n",contrat.fin.year,contrat.fin.month,contrat.fin.day);
				printf("\t\t\t\t\t\t\t\t          prix : %d       \n",contrat.cout);
                printf("\t\t\t\t\t\t\t\t       \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
				comp++;
			}
		}
		if(comp==0){
			printf("\n\t\t\t\t\t\t ID est un corecte !...");
			printf("\n\n\t\t\t\t\t\t tape 1-------->choise un autre ID.\n\t\t\t\t\t       0-------->Tirmine :");
			scanf("%d",&comp);
			if(comp==1)Visualiser_Contrat();
		}
	}
	fclose(T);
}

void Louer_Voiture() {  //Fonction pour louer une nouvelle voiture

    contrat l;
    char nom[20],prenom[20],marque[15],nomVoiture[15],couleur[7];
    int i,e,idv,idc,prix,place;
	printf("\n\n\n\t\t\t\t Donne L'Id de votre contrat : ");rept:
    scanf("%d",&l.numContrat);
    if(rech_cl(l.numContrat)==1){
    	system("cls");
    	printf("\n\n\t\t\t\t Id est deja stocke tapun autre ");goto rept;
	}
	//           les info du client             //

	printf("                                                     saiser votre nom:");   scanf("%s",&nom);
	printf("                                                  saiser votre prenom:");   scanf("%s",&prenom);
    if(VNP(nom,prenom,&idc)==0){
    	printf("\n\t\t\t\t Celle vous pellez enregistrer votre propre information");
    	idc=Add_Client();
	}//Vérification de le client et Récupération de id client


	//           les info de levoiture          //

	autre:  //répète
	printf("                        Les information de la voiture souhaite louer \n");
	printf("                                             la marque  :");   scanf("%s",&marque);
    printf("                                                la nom  :");   scanf("%s",&nom);
    printf("                                            la couleur  :");   scanf("%s",&couleur);
    if(VD(marque,nomVoiture,couleur,&e,&idv,&prix,&place)==0){    //Vérification de la voiture et Récupération de id voitur choiséet et sont emplacement
        printf("\n\t\t\t\t la voiture n'est pas disponible. \n\t\t\t\t  tape 1 ----->afficher les voiture disponible. \n\t\t\t\t      0-----> choise une aute :  \n ");
		scanf("%d",&i);
		system("cls");
		if(i==1) Liste_voiture();
		printf(" \t\t\t\t\t  chouise une aute \n");
		goto autre;
	}
	if(e==1){
        printf("\n\t\t\t\t la voiture n'est pas disponible. \n\t\t\t\t  tape 1 ----->afficher les voiture disponible. \n\t\t\t\t      0-----> choise une aute :  \n ");
		scanf("%d",&i);
		system("cls");
		if(i==1) disponible();
		printf(" \t\t\t\t\t  chouise une aute \n");
		goto autre; //Vérifier que la voiture est disponible
	}
	//--------------------------------------la voiture disponible creation de la contrat-------------------//
	else{
		Louer_Voiture(idv,1);     //rendre la variable enlocation on 1

		do{
			printf("date de debut annee : ");       scanf("%d",&l.debut.year);
		}while(l.debut.year <2021);
		do{
			printf("               mois : ");       scanf("%d",&l.debut.month);
		}while(l.debut.month >12 || l.debut.month <1);
		do{
			printf("               jour : ");       scanf("%d",&l.debut.day);
		}while(l.debut.day >31 || l.debut.day <1);


		do{
			printf("date de fin annee : ");       scanf("%d",&l.fin.year);
		}while(l.fin.year<l.debut.year);
		do{
			printf("             mois : ");       scanf("%d",&l.fin.month);
		}while(l.fin.month>12||l.fin.month<1);
		do{
			printf("             jour : ");       scanf("%d",&l.fin.day);
		}while(l.fin.day>31||l.fin.day<1);

		l.idVoiture=idv;
		l.idClient=idc;
	    l.cout=calculer(l.fin.year,l.fin.month,l.fin.day,l.debut.year,l.debut.month,l.debut.day,prix);
		//                                         Enregistre Les info dans le fichier contrat     //
		FILE* T = NULL ;
		T=fopen("Contrat.txt","r");
		if(T==NULL){
			printf("\n\n\t\t\t Le ficher est introuvable !");
		}
		else{
			fprintf(T,"%f %d %d %d %d %d %d %d %d %d\n",&l.numContrat,&l.idVoiture,&l.idClient,&l.debut.year,&l.debut.month,&l.debut.day,&l.fin.year,&l.fin.month,&l.fin.day,&l.cout);
		}
		fclose(T);
		//                                          Affichage du contrat ainsi que la place de la voiture louer       //
		system("cls");
		printf(" \n\n\n                                  \t\t\t\t                     votre contra : \n");
		printf(" \n");
		printf("\t\t\t\t\t\t\t\t       \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
		printf("\t\t\t\t\t\t\t\t       \xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
		printf("\t\t\t\t\t\t\t\t           ID Contrat : %f        \n",l.numContrat);
		printf("\t\t\t\t\t\t\t\t           ID Voiture : %d        \n",l.idVoiture);
		printf("\t\t\t\t\t\t\t\t            ID Client : %d        \n",l.idClient);
		printf("\t\t\t\t\t\t\t\t          annee debut : %d %d %d       \n",l.debut.year,l.debut.month,l.debut.day);
		printf("\t\t\t\t\t\t\t\t            annee fin : %d %d %d       \n",l.fin.year,l.fin.month,l.fin.day);
		printf("\t\t\t\t\t\t\t\t                 prix : %d HD       \n",l.cout);
        printf("\t\t\t\t\t\t\t\t       \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n\n\n\n");


		//                    la place du voiture              //
		printf("                                                       la place de votr voiture est : %d ",place);

	}
}

void Retourner_louer_Voiture(int id,int i){
	FILE *V, *change_voi;
	V=fopen("Voiture.txt","r");
	change_voi=fopen("new.txt","w");
	if(V==NULL){
		printf("\n\n\t\t\t le ficher est introuvable ! ");
	}
	else{
		voiture v; int a;
		while(fscanf(V,"%d %s %s %s %d %d %d",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,&v.EnLocation ) !=EOF){
			if(id==v.idVoiture){
				if(i==0){printf("\t\t\t\t \t La Voiture est Render  !");
				v.EnLocation=0;
				a=v.idVoiture;
				}
				if(i==1){ v.EnLocation=1;}
				fprintf(change_voi,"%d %s %s %s %d %d %d \n",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,&v.EnLocation);
			}
			else{
				fprintf(change_voi,"%d %s %s %s %d %d %d",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,&v.EnLocation);
			}
		}
		fclose(V);             fclose(change_voi);
		remove("Voitures.txt");   rename("new.txt","Voitures.txt");

		if(i==0) Supprimer_Contrat(a);
	}
}

void Modifier_Contrat(){
	FILE *T,*newrec;
	T=fopen("Contrat.txt","r");
	newrec=fopen("new.txt","w");
	int n;
	if(T==NULL){
		printf("\n\n\t\t\t le ficher est introuvable ! ");
	}
	else{
		printf("donne nume de la contrat a modifier  :");
		scanf("%d",&n);
		contrat c;
		while(fscanf(T,"%f %d %d %d %d %d %d %d %d %d",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.year,&c.debut.month,&c.debut.day,&c.fin.year,&c.fin.month,&c.fin.day,&c.cout)!=EOF){
			if (n==c.numContrat){
				int prix=c.cout/((c.fin.year*365+c.fin.month*30+c.fin.day)-(c.debut.year*365+c.debut.month*30+c.debut.day));  //Calculer la prix de la location de la voiture loure par la client

				    do{
			            printf("date de fin annee : ");       scanf("%d",&c.fin.year);
	            	}while(c.fin.year<c.debut.year);
		            do{
		            	printf("             mois : ");       scanf("%d",&c.fin.month);
		            }while(c.fin.month>12||c.fin.month<1);
		            do{
			            printf("             jour : ");       scanf("%d",&c.fin.day);
		            }while(c.fin.day>31||c.fin.day<1);

		            c.cout=calculer(c.fin.year,c.fin.month,c.fin.day,c.debut.year,c.debut.month,c.debut.day,prix);

		            fprintf(newrec,"%f %d %d %d %d %d %d %d %d %d",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.year,&c.debut.month,&c.debut.day,&c.fin.year,&c.fin.month,&c.fin.day,&c.cout);
			}
			else{
				fprintf(newrec,"%f %d %d %d %d %d %d %d %d %d",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.year,&c.debut.month,&c.debut.day,&c.fin.year,&c.fin.month,&c.fin.day,&c.cout);
			}
		}

		fclose(T);                           fclose(newrec);
		remove("Contrat.txt");               rename("new.txt","Contrat.txt");

	}
}

void Supprimer_Contrat(int m){
	FILE *T , *newrec;
	T = fopen("Contrat.txt","r");
	newrec=fopen("new.txt","w");
	contrat contrat;
	while(fscanf(T,"%f %d %d %d %d %d %d %d %d %d\n",&contrat.numContrat,&contrat.idVoiture,&contrat.idClient,&contrat.debut.year,&contrat.debut.month,&contrat.debut.day,&contrat.fin.year,&contrat.fin.month,&contrat.fin.day,&contrat.cout)!=EOF){
		if(m==contrat.idVoiture){
	    	printf("\t\t\t le contrat est supprime avec sucse ");
    	}
	    else{
		    fprintf(newrec,"%f %d %d %d %d %d %d %d %d %d\n",&contrat.numContrat,&contrat.idVoiture,&contrat.idClient,&contrat.debut.year,&contrat.debut.month,&contrat.debut.day,&contrat.fin.year,&contrat.fin.month,&contrat.fin.day,&contrat.cout);
    	}

	}
	fclose(T);
	fclose(newrec);
	remove("Contrat.txt");
	rename("new.txt","Contrat.txt");
}
void main () {
  system("color E0");
     char pass[10],password[10]="SMI4",ppassword[10]="smi4";
     int i=0;
     repet:
     printf("\n\n\t\tEntrer le mot de passe (code-------->smi4)" );scanf("%s",pass);

     if (strcmp(pass,password)==0 || strcmp(pass,password)==0) {
       printf("\n\nPassword Match!\nChargement");
       for(i=0;i<=6;i++)   {
         fordelay(100000000);
         printf(".");
       }     system("cls");
    }
     else
     {
       printf("\n\nLe mot de passe est incorrect !!\a\a\a");goto repet;}
       int choix=Menu_Principal (),id;
       do {
         switch(choix) {
           case(1):       system("cls");     system("color B0");        choix=Location_voiture () ;
               do {

                      if(choix==1){system("cls");Visualiser_Contrat();choix=Location_voiture();}
                  else if(choix==2){ system("cls"); Louer_Voiture();choix=Location_voiture ();}
                  else if(choix==3){system("cls");printf("\n\n\t\t\t\t\t Donner l'Id de voiture a rendu : ");scanf("%d",&id); Retourner_louer_Voiture(id,0);choix=Location_voiture(); }
                  else if(choix==4){system("cls");Modifier_Contrat();         choix=Location_voiture(); }
                  else if(choix==5){system("cls");printf("\n\n\t\t\t\t\t\t Cette choix est incorrecte :");choix=Location_voiture();}
                      }while (choix!=5);    system("cls");    system("color E0");     choix=Menu_Principal ();break;

           case(2):      system("cls");      system("color C0");       choix=Gestion_Voiture ();
           do {
                       if(choix==1){system("cls");Liste_voiture();choix=Gestion_Voiture();}
                  else if(choix==2){ system("cls"); Add_Voiture();choix=Gestion_Voiture();}
                  else if(choix==3){system("cls");Modifier_voiture ();choix=Gestion_Voiture();}
                  else if(choix==4){system("cls");Supprimer_Voiture();         choix=Gestion_Voiture(); }
                  else if(choix!=5){system("cls");printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Erreur :");choix=Gestion_Voiture();}
                      }while (choix!=5);    system("cls");    system("color E0");     choix=Menu_Principal ();break;

           case(3):      system("cls");      system("color 90");       choix=Gestion_client ();
            do {
                       if(choix==1){system("cls");Liste_clients();choix=Gestion_client();}
                  else if(choix==2){ system("cls"); Add_Client();choix=Gestion_client();}
                  else if(choix==3){system("cls");Modifier_Client ();choix=Gestion_client();}
                  else if(choix==4){system("cls");Supprimer_Client();         choix=Gestion_client(); }
                  else if(choix!=5){system("cls");printf(" Erreur :");choix=Location_voiture();}
                      }while (choix!=5);    system("cls");    system("color E0");     choix=Menu_Principal ();break;

                          default :if(choix!=4)  {
                               system("cls");printf("\n\n\n\n\t\t\t\t\t\t\t\t choise un des option : "); choix=Menu_Principal();break;}
            }
           }while(choix!=4);  system("cls");system("color 4");
           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t En revoir  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                          }
