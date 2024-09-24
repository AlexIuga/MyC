
struct griglia {
   int dato;
   struct griglia *su;
   struct griglia *giu;
   struct griglia *dx;
   struct griglia *sx;
   }
typedef struct griglia



   void elimina_riga(struct griglia *riga)
   {
    while(riga!=NULL){
      if(riga->su!=NULL){
        riga->su->giu=riga->giu;
      }
      if(riga->giu!=NULL){
        riga->giu->su=riga->su;
      }
      struct griglia *temp=riga;
      riga=riga->dx;
      free(temp);
    }

   }
