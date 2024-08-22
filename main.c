#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>



int main()
{
    char Mat_cin[100][8];
    char Mat_nom[100][15];
    char Mat_prenom[100][12];
    int  Tab_absences[100];
    char Mat_specialite[100][8];
    int Tab_groupe[100];
    float Tab_notes_assiduite_bi[100];
    float Tab_notes_projet_bi[100];
    float Tab_notes_examen_bi[100];
    float Tab_notes_assiduite_bis[100];
    float Tab_notes_projet_bis[100];
    float Tab_notes_ds_bis[100];
    float Tab_moyenne_bis[100];
    float Tab_moyenne_bi[100];
    int Tab_rang_bis[100];
    int Tab_rang_bi[100];
    float Tab_moy_tri_bis[100];
    float Tab_moy_tri_bi[100];
    int choix_spec_grp;
    int choix_classement;
    int choix_classement_2eme_phase;
    int choix_groupe;
    int tab_rang_tri;
    float Tab_moy_grp1_bis[100];
    float Tab_moy_grp2_bis[100];
    float Tab_moy_grp1_bi[100];
    float Tab_moy_grp2_bi[100];
    float Tab_moy_grp3_bi[100];



    int longeur_cin;
    int longeur_nom;
    int longeur_prenom;
    int longeur_spec2;
    int longeur_spec1;
    int  Test_CIN=0;
    int test_input_nom=1;
    int test_input_prenom=1;
    int test_input_abs=0;


    int nb_eleves=0 ;
    char input_cin[8];
    char input_nom[15];
    char input_prenom[15];
    char specialite_1 [8] = "LNIG-BIS";
    char specialite_2 [8] = "LNIG-BI ";
    int input_abs;
    int input_specialite;
    int input_num_groupe;
    int test_list=0;
    int comptage_bis=0;
    int comptage_bi=0;
    int comptage_grp1_bis=0;
    int comptage_grp2_bis=0;
    int comptage_grp1_bi=0;
    int comptage_grp2_bi=0;
    int comptage_grp3_bi=0;
    char saturation_spec[8];
    int saturation_grp;
    char input_lettre;
    float somme_des_absences;
    float taux_absences;
    float etud;
    int trouve=0;
    float Max_note_projet_bi=0;
    float Max_note_projet_bis=0;
    float Max_note_projet;
    int methode_recherche;
    int nbr_char_trouves=0;
    int etudiant_trouve=0;
    float Max_moyenne;
    float Max_moyenne_bi=0;
    float Max_moyenne_bis=0;
    float temp;
    int rang=1;
    int comptage_bis_gr1=0;
    int comptage_bis_grp2=0;
    int comptage_bi_grp1=0;
    int comptage_bi_grp2=0;
    int comptage_bi_grp3=0;
    char yes_no;
    int cin_valide=0;
    int indice_mod;





    int nbcaracteresvalides_CIN = 0;
    int nbcaracteres_valides_NOM = 0;
    int nbcaracteres_valides_PRENOM = 0;
    int longeur_cin_valide=0;
    int j;
     int i ;

    int choix ;
    sleep(2);
    printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
    printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");

    printf ("                                                                                              STUDENTS MANAGEMENT SYSTEM");

    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(10);
    system("cls");




    do   // DEBUT BIG DO
    {
        printf("------------------------------------------------------------------------------------------------- 1:AJOUTER UN ELEVE ---------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------- 2:VOIR LA LISTE DES ETUDIANTS ---------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------- 3:VOIR LE NOMBRE DES ETUDIANTS PAR GROUPE ET SPECIALITE --------------------------------------------------------------------------\n");
        printf("----------------------------------------------------- 4:VOIR LE GROUPE QUI OCCUPE LE PLUS GRAND NOMBRE D'ETUDIANTS DANS LA SPECIALITE QUI CONTIENT LE MOIN D'ETUDIANTS -------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------ 5:RECHERCHE A PARTIR D'UNE LETTRE -------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------ 6:CALCULER LE TAUX D'ABSENTEISME --------------------------------------------------------------------------------------\n");
        printf("--------------------------------------------------------------------------------------- 7:VOIR LA LISTE DES ETUDIANTS ELIMINES -----------------------------------------------------------------------------------\n");
        printf("----------------------------------------------------------------------------------- 8:VOIR LA LISTE DES ETUDIANTS LES PLUS ASSIDUS -------------------------------------------------------------------------------\n");
        printf("----------------------------------------------------------------------------------------- 9:ACCORDER DES NOTES AUX ETUDIANTS -------------------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------- 10:MODIFIER LES NOTES D'UN ETUDIANT -------------------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------- 11:VOIR LES MOYENNES DES ETUDIANTS --------------------------------------------------------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------12:MODIFIER UN ETUDIANT -------------------------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------------- 13:SUPPRIMER UN ETUDIANT ------------------------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------------- 14:RECHERCHER UN ETUDIANT -----------------------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------- 15:VOIR LA NOTE MAXIMALE DU PROJET DANS TOUTES LES SPECIALITES ----------------------------------------------------------------------\n");
        printf("----------------------------------------------------------------------------- 16:VOIR LA MOYENNE MAXIMALE DE TOUTES SPECIALITES CONFONDUS ------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------- 17:VOIR LA LISTE DES ETUDIANTS QUI N'ONT PAS LA MOYENNE --------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------- 18:VOIR LA LISTE DES ETUDIANTS QUI ONT VALIDE LA MATIERE XYZ PAR SPECIALITE ET PAR GROUPE ---------------------------------------------------------\n");
        printf("------------------------------------------------------------------------ 19:VOIR LE GROUPE QUI CONTIENT LE MOIN D'ETUDIANTS AYANT LA MOYENNE ---------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------- 21:VOIR LE RANG DE CHAQUE ETUDIANT PAR GROUPE OU PAR SPECIALITE -----------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------------------- 0:QUITTER ---------------------------------------------------------------------------------------------------\n") ;



        printf("Choix : ");
        scanf("%d",&choix) ;

        switch (choix)
        {
        //DEBUT SWITCH CHOIX

        case 1 :
            //// INSERTION CIN
                       printf("\n******************************************************************************************************************************************************************************************************************\n");

            do
            {
                printf("CIN : ");
                nbcaracteresvalides_CIN = 0;
                Test_CIN=0;
                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

                    for(i=0;i<=nb_eleves;i++)
                        for(j=0;j<=7;j++)

                      if (strcmp(Mat_cin[i],input_cin)==0)
                      Test_CIN=1;


            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)||Test_CIN==1) ;
            strcpy(Mat_cin[nb_eleves],input_cin) ;

            //FIN INSERTION CIN

            //// INSERTION NOM
            do
            {
                printf("NOM : ");
                nbcaracteres_valides_NOM = 0;

                fflush(stdin);
                gets(input_nom);
                longeur_nom=strlen(input_nom);
                test_input_nom=1;

                for (i=0; i<=longeur_nom; i++)
                    if (input_nom[i] >= 'a' && input_nom[i]<='z' || input_nom[i]==' ')
                        nbcaracteres_valides_NOM++;
                        if(longeur_nom==0)
                            test_input_nom=0;

            }
            while ((nbcaracteres_valides_NOM!=longeur_nom)||(test_input_nom!=1)) ;

            for (i=0; i<longeur_nom; i++)
                input_nom[i]=toupper(input_nom[i]); // conversion MIN to MAJ
                strcat(input_nom,"    /    ");
            strcpy(Mat_nom[nb_eleves],input_nom) ;

            //FIN INSERTION NOM



            //// INSERTION PRENOM
            do
            {
                printf("PRENOM : ");
                nbcaracteres_valides_PRENOM = 0;

                fflush(stdin);
                gets(input_prenom);
                longeur_prenom=strlen(input_prenom);
                test_input_prenom=1;

                for (i=0; i<=longeur_prenom; i++)
                    if (input_prenom[i] >= 'a' && input_prenom[i]<='z' || input_prenom[i]==' ')
                        nbcaracteres_valides_PRENOM++;
                        if(longeur_prenom==0)
                            test_input_prenom=0;

            }
            while ((nbcaracteres_valides_PRENOM!=longeur_prenom)||(test_input_prenom!=1)) ;

            for (i=0; i<longeur_prenom; i++)
                input_prenom[i]=toupper(input_prenom[i]); // conversion MIN to MAJ
            strcpy(Mat_prenom[nb_eleves],input_prenom) ;

            //FIN INSERTION PRENOM
            ////INSERTION DE NOMBRE DES ABSENCES
            do
            {
                printf("ABSENCES: ");
                scanf("%d",&input_abs);


            }
            while((input_abs<0)||(input_abs>20));

            Tab_absences[nb_eleves]=input_abs;
            ////FIN INSERTION DE NOMBRE DES ABSENCES
            ////INSERTION SPECIALITE

            do
            {
                printf("tapez 1 s'il s'agit de la specialite LNIG-BIS\ntapez 2 s'il s'agit de la specialite LNIG-BI\n ");
                scanf("%d", &input_specialite );
                longeur_spec1=strlen(specialite_1);
                longeur_spec2=strlen(specialite_2);
                if (input_specialite==1)
                    for(i=0; i<longeur_spec1; i++)
                        Mat_specialite[nb_eleves][i]=specialite_1[i];
                else if (input_specialite==2)
                    for(i=0; i<longeur_spec2; i++)
                        Mat_specialite[nb_eleves][i]=specialite_2[i];


            }
            while (input_specialite!=1 && input_specialite!=2);

            ////FIN INSERTION SPECIALITE
            ////insertion groupe


            if (input_specialite==1)
                do
                {
                    printf("GROUPE:");
                    scanf("%d", &input_num_groupe);
                }
                while (input_num_groupe<1 || input_num_groupe>2);

            else if (input_specialite==2)
                do
                {
                    printf("GROUPE:");
                    scanf("%d", &input_num_groupe);

                }
                while (input_num_groupe<1 ||input_num_groupe>3);
                Tab_groupe[nb_eleves]=input_num_groupe;

            ////FIN insertion groupe
             //FIN CASE AJOUT
            nb_eleves++ ;
                       printf("\n******************************************************************************************************************************************************************************************************************\n");

            break;


        case 2 :
            //// AFFICHAGE DE LA LISTE DES ETUDIANTS
            // affichage de la liste BIS
                       printf("\n******************************************************************************************************************************************************************************************************************\n");

           printf("SPECIALITE BIS: ");
            for (i=0;i<nb_eleves;i++)
                if (Mat_specialite[i][7]=='S')

            for (j=0;j<=14;j++)
            {


            printf("%c",Mat_nom[i][j]);
            if (Mat_nom[i][j]=='/')
                printf("\n");
            }




            //affichage de la liste BI
             printf("                                       ");
            printf("SPECIALITE BI: ");
            for (i=0;i<nb_eleves;i++)
            if (Mat_specialite[i][7]==' ')

            for (j=0;j<=14;j++)
{

            printf("%c",Mat_nom[i][j]);
             if (Mat_nom[i][j]=='/')
                printf("\n                                      ");
}
            //// FIN AFFICHAGE DE LA LISTE DES ETUDIANTS
                       printf("\n******************************************************************************************************************************************************************************************************************\n");

           printf("\n") ;
            break ;
        case 3 :
            //// COMPTAGE DES ETUDIANTS BIS
            for (i=0;i<nb_eleves;i++)
               {
           printf("\n******************************************************************************************************************************************************************************************************************\n");

                if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                { printf("GROUPE : %d \n",Tab_groupe[i]);
                    comptage_bis++;
                 if (Tab_groupe[i]==1)
                    comptage_grp1_bis++;
                 else
                    comptage_grp2_bis++;
                }
               }

               //// COMPTAGE DES ETUDIANTS BI
               for (i=0;i<nb_eleves;i++)
               {


                if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                {
                 comptage_bi++;
                     if (Tab_groupe[i]==1)
                    comptage_grp1_bi++;
                  if(Tab_groupe[i]==2)
                    comptage_grp2_bi++;
                  if (Tab_groupe[i]==3)
                    comptage_grp3_bi++;
                    }
                }

                printf ("la specialite LNIG-BIS comprend %d etudiants \n dont %d dans le groupe 1 et %d dans le groupe 2 \n",comptage_bis,comptage_grp1_bis,comptage_grp2_bis);
                printf("la specialite BI comprend %d etudiants \n dont %d dans le groupe 1 , %d dans le groupe 2 et %d dans le groupe 3 \n",comptage_bi,comptage_grp1_bi,comptage_grp2_bi,comptage_grp3_bi);
                           printf("\n******************************************************************************************************************************************************************************************************************\n");

                comptage_bis=0;
                 comptage_bi=0;
                 comptage_grp1_bis=0;
                 comptage_grp2_bis=0;
                 comptage_grp1_bi=0;
                 comptage_grp2_bi=0;
                 comptage_grp3_bi=0;
                break;

                //// FIN CASE COMPTAGE DES ETUDIANTS
        case 4 : //// AFFICHAGE GRP + SATURE ET SPECIALITE MOIN SATURE
            // COMPTAGE DES ETUDIANTS BIS
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            for (i=0;i<nb_eleves;i++)
               {

                if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                {
                    comptage_bis++;
                 if (Tab_groupe[i]==1)
                    comptage_grp1_bis++;
                 if (Tab_groupe[i]==2)
                    comptage_grp2_bis++;
                }
               }

               // COMPTAGE DES ETUDIANTS BI
               for (i=0;i<nb_eleves;i++)
               {


                if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                {
                 comptage_bi++;
                     if (Tab_groupe[i]==1)
                    comptage_grp1_bi++;
                  if(Tab_groupe[i]==2)
                    comptage_grp2_bi++;
                  if (Tab_groupe[i]==3)
                    comptage_grp3_bi++;
                    }
                }
        if (comptage_bis<comptage_bi)
           strcpy(saturation_spec,specialite_1);
            if (comptage_grp1_bis>comptage_grp2_bis)
            saturation_grp=1;
            else
                saturation_grp=2;

       if (comptage_bi<comptage_bis)
        strcpy(saturation_spec,specialite_2);
        if ((comptage_grp1_bi>comptage_grp2_bi)&&(comptage_grp1_bi>comptage_grp3_bi))
            saturation_grp=1;
        else if  ((comptage_grp2_bi>comptage_grp1_bi)&&(comptage_grp2_bi>comptage_grp3_bi))
            saturation_grp=2;
       else
            saturation_grp=3;

       printf ("le groupe %d est celui qui occupe \n le plus grand nombre d'etudiants \n ce groupe fait partie de la specialite ",saturation_grp);
        for (i=0;i<8;i++)
       printf("%c",saturation_spec[i]);
       printf(" qui contient le moin d'etudiants \n");
                  printf("\n******************************************************************************************************************************************************************************************************************\n");

break ;
                //// FIN AFFICHAGE GRP + SATURE ET SPECIALITE MOIN SATURE
        case 5 :  //// RECHERCHE DES NOMS A PARTIR D'UNE LETTRE
           printf("\n******************************************************************************************************************************************************************************************************************\n");
           do {
            printf("LETTRE: ");
            fflush(stdin);
            scanf("%c",&input_lettre);
            input_lettre=toupper(input_lettre);

           }
           while (input_lettre<'A' || input_lettre >'Z');


           ////affichage bis
           printf("specialite BIS: ");
           for (i=0;i<nb_eleves;i++)
            if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
           {
            if (Mat_nom[i][0]==input_lettre)
            for (j=0;j<=strlen(Mat_nom[i]);j++)
            printf("%c",Mat_nom[i][j]);
           }
            //// affichage bi
            printf("specialite BI: ");
             for (i=0;i<nb_eleves;i++)
            if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
           {
            if (Mat_nom[i][0]==input_lettre)
            for (j=0;j<=strlen(Mat_nom[i]);j++)
            printf("%c",Mat_nom[i][j]);
           }
                      printf("\n******************************************************************************************************************************************************************************************************************\n");

           break ;
        case 6://// TAUX D'ABSENTEISME
printf("\n******************************************************************************************************************************************************************************************************************\n");
            somme_des_absences=0;
            etud=nb_eleves*20;
            for (i=0;i<nb_eleves;i++)
            {somme_des_absences=somme_des_absences+Tab_absences[i];}
            taux_absences=(somme_des_absences/etud)*100;
            printf("%.2f",taux_absences);
printf("\n******************************************************************************************************************************************************************************************************************\n");
                //// FIN TAUX D'ABSENTEISME


        case 7 : //// ELIMINATION
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            for (i=0;i<nb_eleves;i++)
                if (Tab_absences[i]>=6)
            {
                for (j=0;j<15;j++)
                    printf ("%c",Mat_nom[i][j]);
            }
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            break;
                 //// FIN ELIMINATION
        case 8 : //// ASSIDUITE
            printf("\n******************************************************************************************************************************************************************************************************************\n");
              for (i=0;i<nb_eleves;i++)
                if (Tab_absences[i]==0)
            {
                for (j=0;j<15;j++)
                    printf ("%c",Mat_nom[i][j]);
            }
                printf("\n******************************************************************************************************************************************************************************************************************\n");
                 //// FIN ASSIDUITE
            break ;
        case 9 : //// NOTES ////
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");

            if (nb_eleves!=0)
                do{ printf("CIN: ");
            nbcaracteresvalides_CIN = 0;
            cin_valide=0;
                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

                    for(i=0;i<nb_eleves;i++)
                        if(strcmp(Mat_cin[i],input_cin)==0)
                        cin_valide=1;


            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)) ;

            for (i=0;i<nb_eleves;i++)
            {   for (j=0;j<8;j++)
                if (input_cin[j]==Mat_cin[i][j])
                trouve++;

                  if ((trouve==8)&&(Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                {printf ("ETUDIANT: ");
                for (j=0;j<15;j++)
                    printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                       do {
                    printf("NOTE DE L'ASSIDUITE: ");
                    scanf("%f",&Tab_notes_assiduite_bis[i]);}
                    while(Tab_notes_assiduite_bis[i]<0 || Tab_notes_assiduite_bis[i]>20 );
                    do {
                    printf("NOTE DU PROJET: ");
                    scanf("%f",&Tab_notes_projet_bis[i]);}
                    while (Tab_notes_projet_bis[i]<0 || Tab_notes_projet_bis[i]>20 );
                    do {
                        printf("NOTE DU DS: ");
                        scanf("%f",&Tab_notes_ds_bis[i]);
                        }
                    while (Tab_notes_ds_bis[i]<0 || Tab_notes_ds_bis[i]>20);
                    }
                    trouve=0;}
                 for (i=0;i<nb_eleves;i++)
            {   for (j=0;j<8;j++)
                if (input_cin[j]==Mat_cin[i][j])
                trouve++;

                  if ((trouve==8)&&(Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                {printf ("ETUDIANT: ");
                for (j=0;j<15;j++)
                    printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                       do {
                    printf("NOTE DE L'ASSIDUITE: ");
                    scanf("%f",&Tab_notes_assiduite_bi[i]);}
                    while(Tab_notes_assiduite_bi[i]<0 || Tab_notes_assiduite_bi[i]>20 );
                    do {
                    printf("NOTE DU PROJET: ");
                    scanf("%f",&Tab_notes_projet_bi[i]);}
                    while (Tab_notes_projet_bi[i]<0 || Tab_notes_projet_bi[i]>20 );
                    do {
                        printf("NOTE DE L'EXAMEN: ");
                        scanf("%f",&Tab_notes_examen_bi[i]);}
                    while (Tab_notes_examen_bi[i]<0 || Tab_notes_examen_bi[i]>20);
                    }
                    trouve=0;
                    }
printf("\n******************************************************************************************************************************************************************************************************************\n");


break ;
                 //// FIN NOTES ////

        case 10 : // MODIFICATION NOTES //
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");

            if (nb_eleves!=0)
                do{ printf("CIN: ");
            nbcaracteresvalides_CIN = 0;

                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)) ;
            do{
            printf("voulez vous continuez ? (y/n):");
            scanf("%s",&yes_no);}
            while(yes_no!='y'&&yes_no!='n');
            if(yes_no=='y')
           {for (i=0;i<nb_eleves;i++)
            {   for (j=0;j<8;j++)
                if (input_cin[j]==Mat_cin[i][j])
                trouve++;

                  if ((trouve==8)&&(Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
               {
                   printf ("ETUDIANT: ");
                for (j=0;j<15;j++)
                    printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                     printf("ANCIENNE NOTE DE L'ASSIDUITE: %f",Tab_notes_assiduite_bis[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_assiduite_bis[i]);
                     printf("ANCIENNE NOTE DU PROJET: %f",Tab_notes_projet_bis[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_projet_bis[i]);
                     printf("ANCIENNE NOTE DU DS: %f",Tab_notes_ds_bis[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_ds_bis[i]);


                     }trouve=0;}

              for (i=0;i<nb_eleves;i++)
            {   for (j=0;j<8;j++)
                if (input_cin[j]==Mat_cin[i][j])
                trouve++;

                  if ((trouve==8)&&(Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
               {
                printf ("ETUDIANT: ");
                for (j=0;j<15;j++)
                     printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                     printf("ANCIENNE NOTE DE L'ASSIDUITE: %f",Tab_notes_assiduite_bi[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_assiduite_bi[i]);
                     printf("ANCIENNE NOTE DU PROJET: %f",Tab_notes_projet_bi[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_projet_bi[i]);
                     printf("ANCIENNE NOTE DE L'EXAMEN: %f",Tab_notes_examen_bi[i]);
                     printf("\n");
                     printf("NOUVELLE NOTE: ");
                     scanf ("%f",&Tab_notes_examen_bi[i]);
                     }trouve=0;}}
                     printf("\n******************************************************************************************************************************************************************************************************************\n");
           break ; // FIN MODIFICATION NOTES //

        case 11: //// Calcule de la moyenne des etudiants
printf("\n******************************************************************************************************************************************************************************************************************\n");
            for(i=0;i<nb_eleves;i++)
             {
                  printf("ETUDIANT: ");
                 if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                    {for (j=0;j<15;j++)
                     printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
                printf("%.2f", Tab_moyenne_bis[i]);
                printf("\n");}
                 if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                    {for (j=0;j<15;j++)
                     printf ("%c",Mat_nom[i][j]);
                     printf("\n");
                Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                printf("%.2f", Tab_moyenne_bi[i]);
                printf("\n");}
             }
             printf("\n******************************************************************************************************************************************************************************************************************\n");
             break ;
        case 12 :


            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");

            if (nb_eleves!=0)
                {do{ printf("CIN: ");
            nbcaracteresvalides_CIN = 0;

                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)) ;
            do{
            printf("voulez vous continuez ? (y/n):");
            scanf("%s",&yes_no);}
            while(yes_no!='y'&&yes_no!='n');
            if(yes_no=='y')
           {for (i=0;i<nb_eleves;i++)
            {   for (j=0;j<8;j++)
                if (input_cin[j]==Mat_cin[i][j])
                trouve++;
                indice_mod=i;

                  if ((trouve==8)&&(Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                  {
                       do
            {
                printf("CIN : ");
                nbcaracteresvalides_CIN = 0;
                Test_CIN=0;
                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

                    for(i=0;i<=nb_eleves;i++)
                        for(j=0;j<=7;j++)

                      if (strcmp(Mat_cin[i],input_cin)==0)
                      Test_CIN=1;


            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)||Test_CIN==1) ;
            strcpy(Mat_cin[indice_mod],input_cin) ;

            //FIN INSERTION CIN

            //// INSERTION NOM
            do
            {
                printf("NOM : ");
                nbcaracteres_valides_NOM = 0;

                fflush(stdin);
                gets(input_nom);
                longeur_nom=strlen(input_nom);
                test_input_nom=1;

                for (i=0; i<=longeur_nom; i++)
                    if (input_nom[i] >= 'a' && input_nom[i]<='z' || input_nom[i]==' ')
                        nbcaracteres_valides_NOM++;
                        if(longeur_nom==0)
                            test_input_nom=0;

            }
            while ((nbcaracteres_valides_NOM!=longeur_nom)||(test_input_nom!=1)) ;

            for (i=0; i<longeur_nom; i++)
                input_nom[i]=toupper(input_nom[i]); // conversion MIN to MAJ
                strcat(input_nom,"    /    ");
            strcpy(Mat_nom[indice_mod],input_nom) ;

            //FIN INSERTION NOM



            //// INSERTION PRENOM
            do
            {
                printf("PRENOM : ");
                nbcaracteres_valides_PRENOM = 0;

                fflush(stdin);
                gets(input_prenom);
                longeur_prenom=strlen(input_prenom);
                test_input_prenom=1;

                for (i=0; i<=longeur_prenom; i++)
                    if (input_prenom[i] >= 'a' && input_prenom[i]<='z' || input_prenom[i]==' ')
                        nbcaracteres_valides_PRENOM++;
                        if(longeur_prenom==0)
                            test_input_prenom=0;

            }
            while ((nbcaracteres_valides_PRENOM!=longeur_prenom)||(test_input_prenom!=1)) ;

            for (i=0; i<longeur_prenom; i++)
                input_prenom[i]=toupper(input_prenom[i]); // conversion MIN to MAJ
            strcpy(Mat_prenom[indice_mod],input_prenom) ;

            //FIN INSERTION PRENOM
            ////INSERTION DE NOMBRE DES ABSENCES
            do
            {
                printf("ABSENCES: ");
                scanf("%d",&input_abs);


            }
            while((input_abs<0)||(input_abs>20));

            Tab_absences[indice_mod]=input_abs;
            ////FIN INSERTION DE NOMBRE DES ABSENCES
            ////INSERTION SPECIALITE

            do
            {
                printf("tapez 1 s'il s'agit de la specialite LNIG-BIS\ntapez 2 s'il s'agit de la specialite LNIG-BI\n ");
                scanf("%d", &input_specialite );
                longeur_spec1=strlen(specialite_1);
                longeur_spec2=strlen(specialite_2);
                if (input_specialite==1)
                    for(i=0; i<longeur_spec1; i++)
                        Mat_specialite[indice_mod][i]=specialite_1[i];
                else if (input_specialite==2)
                    for(i=0; i<longeur_spec2; i++)
                        Mat_specialite[indice_mod][i]=specialite_2[i];


            }
            while (input_specialite!=1 && input_specialite!=2);

            ////FIN INSERTION SPECIALITE
            ////insertion groupe


            if (input_specialite==1)
                do
                {
                    printf("GROUPE:");
                    scanf("%d", &input_num_groupe);
                }
                while (input_num_groupe<1 || input_num_groupe>2);

            else if (input_specialite==2)
                do
                {
                    printf("GROUPE:");
                    scanf("%d", &input_num_groupe);

                }
                while (input_num_groupe<1 ||input_num_groupe>3);
                Tab_groupe[indice_mod]=input_num_groupe;
                  }}}}

break;


                            //// FIN Calcule de la moyenne des etudiants ////
        case 13 :           //// SUPRESSION ELEVE ////
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");

            if (nb_eleves!=0)
                do{ printf("CIN: ");
            nbcaracteresvalides_CIN = 0;

                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)) ;
            for (i=0;i<nb_eleves;i++)
                for (j=0;j<8;j++)
           if (input_cin[j]==Mat_cin[i][j])
           {
              for (i=i;i<nb_eleves;i++)
               for (j=0;j<15;j++)
                {Mat_nom[i][j]=Mat_nom[i+1][j];
                Mat_cin[i][j]=Mat_cin[i+1][j];
                Mat_prenom[i][j]=Mat_prenom[i+1][j];
                Mat_specialite[i][j]=Mat_specialite[i+1][j];
                Tab_groupe[i]=Tab_groupe[i+1];
                Tab_absences[i]=Tab_absences[i+1];}
            if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
           {
               Tab_notes_assiduite_bis[i]=Tab_notes_assiduite_bis[i+1];
               Tab_notes_projet_bis[i]=Tab_notes_projet_bis[i+1];
               Tab_notes_ds_bis[i]=Tab_notes_ds_bis[i+1];
           }
            if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
            {
                Tab_notes_assiduite_bi[i]=Tab_notes_assiduite_bi[i+1];
                Tab_notes_examen_bi[i]=Tab_notes_examen_bi[i+1];
                Tab_notes_projet_bi[i]=Tab_notes_projet_bi[i+1];
            }
            printf("SUPPRESSION EFFECTUEE AVEC SUCCES \n");

           i--;
           nb_eleves--;
           }
            printf("\n******************************************************************************************************************************************************************************************************************\n");
break ;
                //// FIN  SUPRESSION ELEVE ////
case 15 :      //// NOTE PROJET MAX TT SPECIALITES ////
    printf("\n******************************************************************************************************************************************************************************************************************\n");
            if(nb_eleves==0)
                printf("Il n'existe aucun etudiant dans votre liste !");
            if(nb_eleves!=0)
              {printf("Note: ");
            for (i=0;i<nb_eleves;i++)
             {if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))

                    for(i=0;i<nb_eleves;i++)
                 {
                     if(Tab_notes_projet_bis[i]>Max_note_projet_bis)
                        Max_note_projet_bis=Tab_notes_projet_bis[i];
                    }


             if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))

                 for(i=0;i<nb_eleves;i++)
                 {
                     if(Tab_notes_projet_bi[i]>Max_note_projet_bi)
                        Max_note_projet_bi=Tab_notes_projet_bi[i];
                 }}
                 if(Max_note_projet_bi>Max_note_projet_bis)
                 Max_note_projet=Max_note_projet_bi;
                    else if(Max_note_projet_bis>Max_note_projet_bi)
                        Max_note_projet=Max_note_projet_bis;

                        printf("%.2f \n",Max_note_projet);}
                        printf("\n******************************************************************************************************************************************************************************************************************\n");
   break;
                //// FIN NOTE PROJET MAX TT SPECIALITES ////
case 14 :       //// RECHERCHE DES ETUDIANTS SELON CRITAIRES ////
    printf("\n******************************************************************************************************************************************************************************************************************\n");
    if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");

            if (nb_eleves!=0)
    {
       printf("1-RECHERCHER UN ETUDIANT EN UTILISANT LA CIN \n");
       printf("2-RECHERCHER UN ETUDIANT EN UTILISANT LE NOM \n");
       printf("3-RECHERCHER UN ETUDIANT EN UTILISANT LE PRENOM \n");
       printf("4-ANNULER \n");
       do
       {scanf("%d",&methode_recherche);}
       while(methode_recherche<1 || methode_recherche > 4);

                                //// PETIT SWITCH ////

       switch (methode_recherche)
       {
       case 1 :
        do{ printf("CIN: ");
            nbcaracteresvalides_CIN = 0;

                fflush(stdin);
                gets(input_cin);
                longeur_cin=strlen(input_cin);
                for (i=0; i<longeur_cin; i++)
                {
                    if( (input_cin[i] > '/') && (input_cin[i] < ':'))
                        nbcaracteresvalides_CIN++;
                }
                if (longeur_cin==8)
                    longeur_cin_valide=1;

            }
            while ((nbcaracteresvalides_CIN!=8)||(longeur_cin_valide !=1)) ;
            for (i=0;i<nb_eleves;i++)
            {
            for (j=0;j<8;j++)
            if (input_cin[j]==Mat_cin[i][j])
                nbr_char_trouves++;
            if (nbr_char_trouves==8)
               {
                for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf("\n");
                    for (j=0;j<10;j++)
                printf("%c",Mat_prenom[i][j]);
               printf("\n");
               for (j=0;j<8;j++)
                printf("%c",Mat_specialite[i][j]);
               printf("\n");
               printf("groupe:%d",Tab_groupe[i]);
               printf("\n");
               nbr_char_trouves=0;
               }
               else
               {printf("etudiant introuve !");
                nbr_char_trouves=0;}}


       break;
        case 2 : do
            {
                printf("NOM : ");
                nbcaracteres_valides_NOM = 0;

                fflush(stdin);
                gets(input_nom);
                longeur_nom=strlen(input_nom);
                test_input_nom=1;

                for (i=0; i<=longeur_nom; i++)
                    if (input_nom[i] >= 'a' && input_nom[i]<='z' || input_nom[i]==' ')
                        nbcaracteres_valides_NOM++;
                        if(longeur_nom==0)
                            test_input_nom=0;

            }
            while ((nbcaracteres_valides_NOM!=longeur_nom)||(test_input_nom!=1)) ;

            for (i=0; i<longeur_nom; i++)
                input_nom[i]=toupper(input_nom[i]); // conversion MIN to MAJ
                strcat(input_nom,"    /    ");
                for (i=0;i<nb_eleves;i++)
            {
            for (j=0;j<10;j++)
            if (input_nom[j]==Mat_nom[i][j])
                nbr_char_trouves++;
            if (nbr_char_trouves==10)
               {
                for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf("\n");
                    for (j=0;j<10;j++)
                printf("%c",Mat_prenom[i][j]);
               printf("\n");
               for (j=0;j<8;j++)
                printf("%c",Mat_specialite[i][j]);
               printf("\n");
               printf("groupe:%d",Tab_groupe[i]);
               printf("\n");
               nbr_char_trouves=0;
               }
               else
               {printf("etudiant introuve !");
                nbr_char_trouves=0;}}
                break ;
        case 3 :
            printf("1 pour rechercher dans la specialite bis \n");
            printf ("2 pour rechercher dans la specialite bi");
            do {
                scanf("%d",&etudiant_trouve);
            }
            while (etudiant_trouve<1 || etudiant_trouve >2);

                if (etudiant_trouve==1)
                {for (i=0;i<nb_eleves;i++)
              if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
              {printf("specialite BIS: \n");
                for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf("\n");
                    for (j=0;j<10;j++)
                printf("%c",Mat_prenom[i][j]);
               printf("\n");
               for (j=0;j<8;j++)
                printf("%c",Mat_specialite[i][j]);
               printf("\n");
               printf("groupe:%d",Tab_groupe[i]);
               printf("\n");}}

                if(etudiant_trouve==2)
                {for (i=0;i<nb_eleves;i++)
              if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
              {printf("specialite BI: \n");
                for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf("\n");
                    for (j=0;j<10;j++)
                printf("%c",Mat_prenom[i][j]);
               printf("\n");
               for (j=0;j<8;j++)
                printf("%c",Mat_specialite[i][j]);
               printf("\n");
               printf("groupe:%d",Tab_groupe[i]);
               printf("\n");}}
       }
       }
       printf("\n******************************************************************************************************************************************************************************************************************\n");
                //// FIN PETIT SWITCH ////

    break ;
    case 16: ////DEBUT AFFICHAGE MOYENNE MAX TOUTE SPECIALITE CONFONDUS
        printf("\n******************************************************************************************************************************************************************************************************************\n");
            if(nb_eleves==0)
                printf("Il n'existe aucun etudiant! \n");
            if(nb_eleves!=0)
              {
                printf("La moyenne est de: ");
               for(i=0;i<nb_eleves;i++)
            {
                if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                    Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
                    for(i=0;i<nb_eleves;i++)
                {
                 if(Tab_moyenne_bis[i]>Max_moyenne_bis)
                        Max_moyenne_bis=Tab_moyenne_bis[i];
                }
                if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                    for(i=0;i<nb_eleves;i++)
                {
                    if(Tab_moyenne_bi[i]>Max_moyenne_bi)
                        Max_moyenne_bi=Tab_moyenne_bi[i];
                }
            }
              if(Max_moyenne_bis>Max_moyenne_bi)
               Max_moyenne=Max_moyenne_bis;
               else if (Max_moyenne_bi>Max_moyenne_bis)
               Max_moyenne=Max_moyenne_bi;

              printf("%.2f", Max_moyenne); }

printf("\n******************************************************************************************************************************************************************************************************************\n");
        break;
        ////FIN AFFICHAGE MAX MOYENNE TOUTE SPECIALITE CONFONDUS
        case 17 : ////DEBUT AFFICHAGE DE LA LISTE DES ETUDIANTS QUI N'ONT PAS LA MOYENNE
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if(nb_eleves==0)
                printf("Il n'existe aucun etudiant.");
            if(nb_eleves!=0)
                printf("ETUDIANT: ");
            for(i=0;i<nb_eleves;i++)
            {

            if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                {
            Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
            if(Tab_moyenne_bis[i]<10)
                for(j=0;j<=strlen(Mat_nom[i]);j++)
                printf("%c", Mat_nom[i][j]);
                }
            }
            for(i=0;i<nb_eleves;i++)
            {
                if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                {
                    Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                    if(Tab_moyenne_bi[i<10])
                        for(j=0;j<=strlen(Mat_nom[i]);j++)
                    printf("%c", Mat_nom[i][j]);
                }
            }


printf("\n******************************************************************************************************************************************************************************************************************\n");
        break;

        ////FIN AFFICHAGE DE LA LSITE DES ETUDIANTS QUI N'ONT PAS LA MOYENNE EN XYZ
        case 18: //// DEBUT AFFICHAGE POUR CHAQUE SPEC ET GROUPE LA LISTE DES ETUDIANTS QUI ONT VALIDES LA MATIERE
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if(nb_eleves==0)
                printf("Il n'existe aucun etudiant.");
            if(nb_eleves!=0)
            {
                printf("Tapez 1  vous voulez afficher la liste des etudiants qui ont valides la matiere XYZ de la specalite BIS du grp 1 \n");
                printf("Tapez 2  vous voulez afficher la liste des etudiants qui ont valides la matiere XYZ de la specalite BIS du grp 2 \n");
                printf("Tapez 3  vous voulez afficher la liste des etudiants qui ont valides la matiere XYZ de la specalite BI du grp 1 \n");
                printf("Tapez 4  vous voulez afficher la liste des etudiants qui ont valides la matiere XYZ de la specalite BI du grp 2 \n");
                printf("Tapez 5  vous voulez afficher la liste des etudiants qui ont valides la matiere XYZ de la specalite BI du grp 3 \n");
                printf("Votre choix: ");
                scanf("%d", &choix_spec_grp);
                if(choix_spec_grp==1)
                {
                    printf("Les etudiants qui ont valide XYZ sont: ");
                    for(i=0; i<nb_eleves; i++)
                    {
                        Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
                        if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                        {
                            if(Tab_groupe[i]==1)
                            {
                                if(Tab_moyenne_bis[i]>=10)
                                {
                                    for(j=0; j<=strlen(Mat_nom[i]); j++)
                                        printf("%c", Mat_nom[i][j]);
                                    printf("\n");
                                }
                            }
                        }
                    }
                }
                else if (choix_spec_grp==2)
                {
                    {
                        printf("Les etudiants qui ont valide XYZ  sont: ");
                        for(i=0; i<nb_eleves; i++)
                        {
                            Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
                            if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
                            {
                                if(Tab_groupe[i]==2)
                                {
                                    if(Tab_moyenne_bis>=10)
                                    {
                                        for(j=0; j<=strlen(Mat_nom[i]); j++)
                                            printf("%c", Mat_nom[i][j]);
                                        printf("\n");
                                    }
                                }
                            }
                        }


                    }
                }
                if(choix_spec_grp==3)
                {
                    {
                        printf("Les etudiants qui ont valide XYZ sont: ");
                        for(i=0; i<nb_eleves; i++)
                        {
                            Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                            if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                            {
                                if(Tab_groupe[i]==1)
                                {
                                    if(Tab_moyenne_bis>=10)
                                    {
                                        for(j=0; j<=strlen(Mat_nom[i]); j++)
                                            printf("%c", Mat_nom[i][j]);
                                        printf("\n");
                                    }
                                }
                            }
                        }
                    }
                }
                else if (choix_spec_grp==4)
                {
                    printf("Les etudiants qui ont valide XYZ sont: ");
                    Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                    if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                    {
                        if(Tab_groupe[i]==2)
                        {
                            if(Tab_moyenne_bis>=10)
                            {
                                for(j=0; j<=strlen(Mat_nom[i]); j++)
                                    printf("%c", Mat_nom[i][j]);
                                printf("\n");
                            }
                        }
                    }
                }
                else if (choix_spec_grp==5)
                {
                    printf("Les etudiants qui ont valide XYZ sont: ");
                    Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                    if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
                    {
                        if(Tab_groupe[i]==3)
                        {
                            if(Tab_moyenne_bis>=10)
                            {
                                for(j=0; j<=strlen(Mat_nom[i]); j++)
                                    printf("%c", Mat_nom[i][j]);
                                printf("\n");
                            }
                        }
                    }
                }
            }

printf("\n******************************************************************************************************************************************************************************************************************\n");

            break;

        //// FIN AFFICHAGE
        case 19 : //// DEBUT AFFICHAGR DU GROUPE AYANT LE MOINS D'ETUDIANTS AYANT LA MOYENNE
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if(nb_eleves==0)
                printf("Il n'existe aucun etudiant \n");
            if(nb_eleves!=0)
            {   comptage_bis_gr1=0;
                comptage_bis_grp2=0;
                comptage_bi_grp1=0;
                comptage_bi_grp2=0;
                comptage_bi_grp3=0;
                for(i=0;i<nb_eleves;i++)
                {Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);}
                for(i=0;i<nb_eleves;i++)
                    {if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-')&& (Tab_groupe[i]==1)&&(Tab_moyenne_bis[i]>=10))
                        comptage_bis_gr1++;
                    if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-')&& (Tab_groupe[i]==2)&&(Tab_moyenne_bis[i]>=10))
                        comptage_bis_grp2++;
                    if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-')&& (Tab_groupe[i]==1)&&(Tab_moyenne_bi[i]>=10))
                        comptage_bi_grp1++;
                    if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-')&& (Tab_groupe[i]==2)&&(Tab_moyenne_bi[i]>=10))
                        comptage_bi_grp2++;
                    if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-')&& (Tab_groupe[i]==3)&&(Tab_moyenne_bi[i]>=10))
                        comptage_bi_grp3++;}
                if ((comptage_bis_gr1<comptage_bis_grp2)&&(comptage_bis_gr1!=0))
                    printf("pour la specialite BIS le groupe qui contient le moin d'etudiants ayant la moyenne est le groupe 1 \n");
                if ((comptage_bis_grp2<comptage_bis_gr1) &&(comptage_bis_grp2!=0))
                    printf("pour la specialite BIS le groupe qui contient le moin d'etudiants ayant la moyenne est le groupe 2 \n");
                if ((comptage_bi_grp1<comptage_bi_grp2)&&(comptage_bi_grp1<comptage_bi_grp3)&&(comptage_bi_grp1!=0))
                    printf("pour la specialite BI le groupe qui contient le moin d'etudiants ayant la moyenne est le groupe 1 \n");
                if ((comptage_bi_grp2<comptage_bi_grp1)&&(comptage_bi_grp2<comptage_bi_grp3) &&(comptage_bi_grp2!=0))
                    printf("pour la specialite BI le groupe qui contient le moin d'etudiants ayant la moyenne est le groupe 2 \n");
                if ((comptage_bi_grp3<comptage_bi_grp2)&&(comptage_bi_grp3<comptage_bi_grp1)&&(comptage_bi_grp3!=0))
                    printf("pour la specialite BI le groupe qui contient le moin d'etudiants ayant la moyenne est le groupe 3 \n");
            }
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            break;
            ////FIN AFFICHAFGE DU GROUPE QUI CONTIENT LE MOINS D'ETUDAINTS AYANT LA MOYENNE


        case 21 : //// RANG ////
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            if (nb_eleves==0)
            printf("aucun etudiant n'existe dans votre liste d'etudiants \n");
            if (nb_eleves!=0)
            {
                for(i=0;i<nb_eleves;i++)
                {
            Tab_moyenne_bis[i]=(Tab_notes_assiduite_bis[i]*0.2)+(Tab_notes_ds_bis[i]*0.4)+(Tab_notes_projet_bis[i]*0.4);
            Tab_moyenne_bi[i]=(Tab_notes_assiduite_bi[i]*0.1)+(Tab_notes_projet_bi[i]*0.2)+(Tab_notes_examen_bi[i]*0.7);
                }
            for (i=0;i<nb_eleves;i++)
            {
                Tab_moy_tri_bis[i]=Tab_moyenne_bis[i];
                Tab_moy_tri_bi[i]=Tab_moyenne_bi[i];
            }
            for (i=0;i<nb_eleves-1;i++)
                for (j=i+1;j<nb_eleves;j++)
                if (Tab_moy_tri_bis[i]>Tab_moy_tri_bis[j])
                {
                 temp=Tab_moy_tri_bis[i];
                 Tab_moy_tri_bis[i]=Tab_moy_tri_bis[j];
                 Tab_moy_tri_bis[j]=temp;
                }


                for (i=0;i<nb_eleves-1;i++)
                for (j=i+1;j<nb_eleves;j++)
                if (Tab_moy_tri_bi[i]>Tab_moy_tri_bi[j])
                {
                 temp=Tab_moy_tri_bi[i];
                 Tab_moy_tri_bi[i]=Tab_moy_tri_bi[j];
                 Tab_moy_tri_bi[j]=temp;
                }
            }
            rang=1;
            for (i=nb_eleves;i>=0;i--)
                for (j=0;j<nb_eleves;j++)
                if (Tab_moy_tri_bis[i]==Tab_moyenne_bis[j])
                   {
                    Tab_rang_bis[j]=rang;
                    rang++;
                   }
                   rang=1;
            for (i=nb_eleves;i>=0;i--)
                for (j=0;j<nb_eleves;j++)
                if (Tab_moy_tri_bi[i]==Tab_moyenne_bi[j])
                   {
                    Tab_rang_bi[j]=rang;
                    rang++;
                   }
                   do {
                        printf("1 - specialite BIS \n");
                        printf("2 - specialite BI \n");
                        printf("3 - annuler \n");
                        scanf ("%d",&choix_classement);
                      }
                    while(choix_classement<1 || choix_classement>3);

                    if (choix_classement==1)
                    {

                for (i=0;i<nb_eleves;i++)
           {

           if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
               {for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf ("\n");
                for (j=0;j<10;j++)
                printf ("%c",Mat_prenom[i][j]);
                printf ("\n");
                printf ("rang: %d",Tab_rang_bis[i]);
                printf ("\n");}
            }

            do {
            printf("1- classer les etudiants par groupe \n");
            printf("2- revenir au menu principale \n");
            scanf("%d",&choix_classement_2eme_phase);
            }
            while (choix_classement_2eme_phase<1 || choix_classement_2eme_phase>2);
            if(choix_classement_2eme_phase==1)
            {
                do{
                printf("1- classement dans le 1er groupe \n");
                printf("2- classement dans le 2eme groupe \n");
                printf("3- annuler \n");
                scanf ("%d",&choix_groupe);
                }
                while (choix_groupe<1||choix_groupe>3);
               // if (choix_groupe==1)

            }


                    }
                  if (choix_classement==2)
                    {

                for (i=0;i<nb_eleves;i++)
           {

            if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
               {for (j=0;j<10;j++)
                printf ("%c",Mat_nom[i][j]);
                printf ("\n");
                for (j=0;j<10;j++)
                printf ("%c",Mat_prenom[i][j]);
                printf ("\n");
                printf ("rang: %d",Tab_rang_bi[i]);
                printf ("\n");}
            }






            do {
            printf("1- classer les etudiants par groupe \n");
            printf("2- revenir au menu principale \n");
            scanf("%d",&choix_classement_2eme_phase);
            }
            while (choix_classement_2eme_phase<1 || choix_classement_2eme_phase>2);
            if(choix_classement_2eme_phase==1)
            {
                do{
                printf("1- classement dans le 1er groupe \n");
                printf("2- classement dans le 2eme groupe \n");
                printf("3- classement dans le 3eme groupe \n");
                printf("4- annuler \n");
                scanf ("%d",&choix_groupe);
                }
                while (choix_groupe<1||choix_groupe>4);

            }

            }
            printf("\n******************************************************************************************************************************************************************************************************************\n");
break;
                  //// FIN RANG ////


        case 0 :
            break ;

        default :
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            printf("error pls try again \n");
            printf("\n******************************************************************************************************************************************************************************************************************\n");
            break ;

        } //FIN SWITCH CHOIX

       // supression auto des eleves qui ont +20 absences
       for (i=0;i<nb_eleves;i++)
           if (Tab_absences[i]==20)
           {   for (i=i;i<nb_eleves;i++)
               for (j=0;j<15;j++)
                {Mat_nom[i][j]=Mat_nom[i+1][j];
                Mat_cin[i][j]=Mat_cin[i+1][j];
                Mat_prenom[i][j]=Mat_prenom[i+1][j];
                Mat_specialite[i][j]=Mat_specialite[i+1][j];
                Tab_groupe[i]=Tab_groupe[i+1];
                Tab_absences[i]=Tab_absences[i+1];}
            if ((Mat_specialite[i][7]=='S')&&(Mat_specialite[i][4]=='-'))
           {
               Tab_notes_assiduite_bis[i]=Tab_notes_assiduite_bis[i+1];
               Tab_notes_projet_bis[i]=Tab_notes_projet_bis[i+1];
               Tab_notes_ds_bis[i]=Tab_notes_ds_bis[i+1];
           }
            if ((Mat_specialite[i][7]==' ')&&(Mat_specialite[i][4]=='-'))
            {
                Tab_notes_assiduite_bi[i]=Tab_notes_assiduite_bi[i+1];
                Tab_notes_examen_bi[i]=Tab_notes_examen_bi[i+1];
                Tab_notes_projet_bi[i]=Tab_notes_projet_bi[i+1];
            }




           i--;
           nb_eleves--;
           }
       // fin supression auto des eleves qui ont +20 absences


    }
    while (choix!=0) ; //FIN BIG DO
            printf("\n******************************************************************************************************************************************************************************************************************\n");
    printf ("=========================================================================================== THANKS FOR USING OUR APP ^^ ===========================================================================================");
            printf("\n******************************************************************************************************************************************************************************************************************\n");

    return 0;
}
