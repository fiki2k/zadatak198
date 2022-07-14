/*  Program treba pobrojat velika slova, mala slova i druge znakove u stringu.  */

#include<stdio.h>

int main()
{
    char tekst[100];
    int i;
    int mala,velika,ostalo;

    printf("Unesi neki string: ");
    gets(tekst);

    
    printf("Uneseni string je : %s\n",tekst);

    mala=velika=ostalo=0;

    for(i=0;tekst[i]!='\0';i++)
    {
        // Provjera za slova
        if((tekst[i]>='A' && tekst[i]<='Z') || (tekst[i]>='a' && tekst[i]<='z'))
        {
            if((tekst[i]>='A' && tekst[i]<='Z'))
            {
                // Velika slova
                velika++;
            }
            else
            {
                // Mala slova
                mala++;
            }
        }
        else
        {
            // ostali znakovi
            ostalo++; 
        }
    }

    //print values
    printf("\nVelika slova su : [ %d ]\n",velika);
    printf("\nMala slova su : [ %d ]\n",mala);
    printf("\nOstali znakovi su : [ %d ]\n",ostalo);

    return 0;
}
