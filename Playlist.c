#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
struct pl
{
    char ime[31];
    char izvd[31];
    char alb[31];
    float vri;
    float traj;
} pj[200];

void rns(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].ime,x[j].ime)<0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void rnu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].ime,x[j].ime)>0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void bnu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].ime,x[j+1].ime)>0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void bns(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].ime,x[j+1].ime)<0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void riu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].izvd,x[j].izvd)>0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void ris(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].izvd,x[j].izvd)<0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void biu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].izvd,x[j+1].izvd)>0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void bis(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].izvd,x[j+1].izvd)<0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void rau(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].alb,x[j].alb)>0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void ras(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(strcmp(x[i].alb,x[j].alb)<0)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void bau(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].alb,x[j+1].alb)>0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void bas(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(strcmp(x[j].alb,x[j+1].alb)<0)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void rdu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(x[i].vri>x[j].vri)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void rds(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(x[i].vri<x[j].vri)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void bdu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(x[j].vri>x[j+1].vri)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void bds(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(x[j].vri<x[j+1].vri)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void rtu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(x[i].traj>x[j].traj)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void rts(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n;i++)
    for(j=i+1;j<n+1;j++)
    if(x[i].traj<x[j].traj)
    {
        pom=x[i];
        x[i]=x[j];
        x[j]=pom;
        t=brn[i];
        brn[i]=brn[j];
        brn[j]=t;
    }
}
void btu(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(x[j].traj>x[j+1].traj)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
void bts(struct pl x[], int n, int brn[])
{
    int i,j,t;
    struct pl pom;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            if(x[j].traj<x[j+1].traj)
            {
                pom=x[j];
                x[j]=x[j+1];
                x[j+1]=pom;
                t=brn[j];
                brn[j]=brn[j+1];
                brn[j+1]=t;
            }
        }

    }
}
main()
{
    int x,j,i=1,br=1,pom,brn[200],y,d,pam,pombr;
    char odb[3],z[3],bez1[30],bez2[30],bez3[30],bez4[30],bez5[30],bez6[30],p[40];
    FILE *d1;
    FILE *d2;
    FILE *d3;
    poc:
    system("cls");
    printf("\t\t\t\tDobro dosli!\n");
    printf("\n\t       Za uredivaje playliste, odaberite jednu od opcija:");
    printf("\n\n1. Stvaranje nove playliste");
    printf("\n2. Uredivanje vec postojece playliste"); 
    printf("\n3. Brisanje playliste\n");
    scanf("%d",&x);
    if(x==1) goto dod1;
    if(x==2) goto ured;
    poc2: 
    system("cls");
    printf("\t\t\t\tDobro dosli!\n");
    printf("\n\t       Za uredivaje playliste, odaberite jednu od opcija:");
    printf("\n\n1. Stvaranje nove playliste");
    printf("\n2. Uredivanje vec postojece playliste"); 
    printf("\n3. Brisanje playliste\n\n");
    scanf("%d",&x);
    if(x==1) goto dod1;
    if(x==2) goto ured2;
    if(x==3) goto bris;
    dod1:
    brn[i]=br;
    system("cls");
    d1=fopen("Playlist.txt","w");
    if(d1==NULL){
        printf("Greska!");
        exit(1);
    }
    d2=fopen("upis_ignoriraj.txt","w");
    if(d1==NULL){
        printf("Greska!");
        exit(2);
    }
    fprintf(d1,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja"); 
    dod2:
    printf("Unesi naziv pjesme: ");
    scanf(" %[^\n]",pj[br].ime);
    printf("Unesi naziv izvodaca: ");
    scanf(" %[^\n]",pj[br].izvd);
    printf("Unesi album s kojeg je pjesma: ");
    scanf(" %[^\n]",pj[br].alb);
    printf("Unesi vrijeme dodavanje pjesme (npr. 11.54): ");
    scanf("%f",&pj[br].vri);
    printf("Unesi vrijeme trajanja pjesme (npr. 3.54): ");
    scanf("%f",&pj[br].traj);
    system("cls");
    printf("Želite li dodati jos pjesama? (DA/NE): \n");
    scanf("%s",odb);
    system("cls");
    fprintf(d1,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",br,pj[br].ime,pj[br].izvd,pj[br].alb,pj[br].vri,pj[br].traj);
    fprintf(d2,"%d %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",br,pj[br].ime,pj[br].izvd,pj[br].alb,pj[br].vri,pj[br].traj);
    if((char)odb[0]=='d' || (char)odb[0]=='D'){
        br++;
        i++;
        brn[i]=br;
        goto dod2;
    }
    else {
    fclose(d1);
    fclose(d2);
    pombr=br;
    br=1;
    goto poc;
    }
    //uređivanje
    ured: 
    system("cls");
    i=1;
    d1=fopen("upis_ignoriraj.txt","r");
    if(d1==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    while(1)
    {
    fscanf(d1,"%d %s %s %s %f %f",&brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,&pj[i].vri,&pj[i].traj);
    i++;
    br++;
    if(feof(d1)) break;
    }
    br-=2;
    pombr=br;
    fclose(d1);
    ured2:
    printf("\t\t\t\tSto zelite uciniti s playlistom?\n");
    printf("\n\n1. Sortiranje playliste");
    printf("\n2. Dodavanje pjesama"); 
    printf("\n3. Mijenjanje zapisa\n");
    printf("4. Pretrazivanje\n");
    printf("5. Vracanje na pocetak\n");
    scanf("%d",&x);
    if(x==1) goto sortiranje;
    if(x==2) goto app;
    if(x==3) goto mij;
    if(x==4) goto pret;
    if(x==5) goto poc2;
    //odabiri sortiranja
    //SORT1_Naziv  SORT2_Izvodac  SORT3_ALBUM  SORT4_DODAVANJE  SORT5_TRAJANJE
    sortiranje:
    system("cls");
    printf("\t\t\t\tPo kojem kriteriju biste htjeli playlist sortirati?\n");
    printf("\n\n1. Nazivu"); 
    printf("\n2. Izvodacu");
    printf("\n3. Albumu");
    printf("\n4. Vremenu dodavanja");
    printf("\n5. Vremenu trajanja pjesme\n");
    scanf("%d",&x);
    // POČETAK ZA SORTIRANJE SVEGA; ODABIR VRSTE
    system("cls");
    printf("\t\t\t\tNa koji nacin biste htjeli playlist sortirati?\n");
    printf("\n\n1. Razmjena uzlazno"); 
    printf("\n2. Razmjena silazno");
    printf("\n3. Bubble uzlazno");
    printf("\n4. Bubble silazno\n");
    scanf("%d",&y);
    if(x==1 && y==1) goto nru;
        else if(x==1 && y==2) goto nrs;
            else if(x==1 && y==3) goto nbu;
                else if(x==1 && y==4) goto nbs;
    if(x==2 && y==1) goto iru;
        else if(x==2 && y==2) goto irs;
            else if(x==2 && y==3) goto ibu;
                else if(x==2 && y==4) goto ibs;
    if(x==3 && y==1) goto aru;
        else if(x==3 && y==2) goto ars;
            else if(x==3 && y==3) goto abu;
                else if(x==3 && y==4) goto abs;
    if(x==4 && y==1) goto dru;
        else if(x==4 && y==2) goto drs;
            else if(x==4 && y==3) goto dbu;
                else if(x==4 && y==4) goto dbs;
    if(x==5 && y==1) goto tru;
        else if(x==5 && y==2) goto trs;
            else if(x==5 && y==3) goto tbu;
                else if(x==5 && y==4) goto tbs;                                            
    //SVA SORTIRANJA ZA NAZIV PJESME!
    //POČETAK RAZMJENE
    nru:
    d2=fopen("Playlist_uzlazno_naziv.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rnu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    nrs:
    d2=fopen("Playlist_silazno_naziv.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rns(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK BUBBLE SORT NAZIV
    nbu:
    d2=fopen("Playlist_uzlazno_naziv_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bnu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    nbs:
    d2=fopen("Playlist_silazno_naziv_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bns(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK IZVOĐAČ SORTIRANJA
    //POČETAK RAZMJENE IZVOĐAČ
    iru:
    d2=fopen("Playlist_uzlazno_izvodac.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    riu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    irs:
    d2=fopen("Playlist_silazno_izvodac.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    ris(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK BUBBLE IZVOĐAČ
    ibu:
    d2=fopen("Playlist_uzlazno_izvodac_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    biu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    ibs:
    d2=fopen("Playlist_silazno_izvodac_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bis(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK RAZMJENA ALBUM SORTIRANJE
    aru:
    d2=fopen("Playlist_uzlazno_album.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rau(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    ars:
    d2=fopen("Playlist_silazno_album.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    ras(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK BUBBLE ALBUM
    abu:
    d2=fopen("Playlist_uzlazno_album_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bau(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    abs:
    d2=fopen("Playlist_silazno_album_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bas(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POCETAK VRIJEME DODAVANJE RAZMJENA
    dru:
    d2=fopen("Playlist_uzlazno_dodavanje.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rdu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    drs:
    d2=fopen("Playlist_silazno_dodavanje.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rds(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    //POČETAK BUBBLE DODAVANJE
    dbu:
    d2=fopen("Playlist_uzlazno_dodavanje_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bdu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    dbs:
    d2=fopen("Playlist_silazno_dodavanje_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bds(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //POČETAK RAZMJENA TRAJANJE SORTIRANJE
    tru:
    d2=fopen("Playlist_uzlazno_trajanje.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rtu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    trs:
    d2=fopen("Playlist_silazno_trajanje.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    rts(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    //POČETAK BUBBLE TRAJANJE
    tbu:
    d2=fopen("Playlist_uzlazno_trajanje_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    btu(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    tbs:
    d2=fopen("Playlist_silazno_trajanje_bubble.txt","w");
        if(d2==NULL)
    {
        printf("Greska!");
        exit(3);
    }
    fprintf(d2,"%s    %20s %35s   \t     %30s\t\t%30s\t        \t%26s\n", "Redni broj", "Naziv pjesme", "Izvođač", "Album", "Vrijeme dodavanja", "Vrijeme trajanja");
    bts(pj,br,brn);
    for(i=1;i<br+1;i++) fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
    fclose(d2);
    goto poc2;
    //APPENDANJE!
    app:
    system("cls");
    d2=fopen("Playlist.txt","a");
    d3=fopen("upis_ignoriraj.txt","a+");
    printf("Koliko pjesama želite dodati? ");
    scanf("%d",&i);
    pom=i;
    pam=0;
    br=pombr;
    app2:
    printf("Unesi naziv pjesme: ");
    scanf(" %[^\n]",pj[br+1].ime);
    printf("Unesi naziv izvodaca: ");
    scanf(" %[^\n]",pj[br+1].izvd);
    printf("Unesi album s kojeg je pjesma: ");
    scanf(" %[^\n]",pj[br+1].alb);
    printf("Unesi vrijeme dodavanje pjesme (npr. 11.54): ");
    scanf("%f",&pj[br+1].vri);
    printf("Unesi vrijeme trajanja pjesme (npr. 3.54): ");
    scanf("%f",&pj[br+1].traj);
    br++;
    pam++;
    fprintf(d2,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",br,pj[br].ime,pj[br].izvd,pj[br].alb,pj[br].vri,pj[br].traj);
    fprintf(d3,"%d %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",br,pj[br].ime,pj[br].izvd,pj[br].alb,pj[br].vri,pj[br].traj);
    brn[br]=br;
    i++;
    if(pam==pom) {
    fclose(d2);
    fclose(d3);
    goto poc2;
    }
    else goto app2;
    //MIJENJANJE ZAPISA
    mij:
    d1=fopen("Playlist.txt","w");
    d2=fopen("upis_ignoriraj.txt","w");
    system("cls");
    printf("Koji zapis zelite zamijeniti? ");
    scanf("%d",&i);
    system("cls");
    printf("Unesi naziv pjesme: ");
    scanf(" %[^\n]",pj[i].ime);
    printf("Unesi naziv izvodaca: ");
    scanf(" %[^\n]",pj[i].izvd);
    printf("Unesi album s kojeg je pjesma: ");
    scanf(" %[^\n]",pj[i].alb);
    printf("Unesi vrijeme dodavanje pjesme (npr. 11.54): ");
    scanf("%f",&pj[i].vri);
    printf("Unesi vrijeme trajanja pjesme (npr. 3.54): ");
    scanf("%f",&pj[i].traj);
    system("cls");
    printf("Zelite li jos neki drugi zapis zamijeniti? ");
    scanf("%s",odb);
    if((char)odb[0]=='d' || (char)odb[0]=='D'){
        goto mij;
    }
    else{ 
    if(br>pombr)
    {
        for(i=1;i<br+1;i++)
        {
            fprintf(d1,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
            fprintf(d2,"%d %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
        }
    }
    else
    {
        for(i=1;i<pombr+1;i++)
        {
            fprintf(d1,"%d. %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
            fprintf(d2,"%d %35s \t\t%20s \t\t%35s   \t\t\t    %.2f \t\t\t       \t\t%.2f\n",brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].vri,pj[i].traj);
        } 
    }    
    fclose(d1);
    fclose(d2);
    goto poc2;
    }
    //brisanje
    bris:
    d1=fopen("Playlist.txt","w");
    fclose(d1);
    goto poc2;
    //PRETRAZIVANJE
    pret:
    system("cls");
    printf("Unesite ime pjesme ispis podataka o njoj: ");
    scanf("%s",p);
    system("cls");
    if(br>pombr)
    {
        for(i=1;i<br+1;i++)
        {
            if(strcmp(p,pj[i].ime)==0) 
		{
			printf("%d. %s %s %s %f %f", brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].traj,pj[i].vri);
		}
        }
    }
    else
    {
        for(i=1;i<pombr+1;i++)
        {
            if(strcmp(p,pj[i].ime)==0) 
		{
			printf("%d. %s %s %s %f %f", brn[i],pj[i].ime,pj[i].izvd,pj[i].alb,pj[i].traj,pj[i].vri);
		}
        } 
    }    
    printf("\nZelite li neki drugu pjesmu potraziti? ");
    scanf("%s",odb);
    if((char)odb[0]=='d' || (char)odb[0]=='D'){
        goto pret;
    }
    else goto poc2;
    return 0;
}