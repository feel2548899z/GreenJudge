#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <boost/format.hpp>
int main(){
    while ( 1 ){   //importanat
        char N[8];

        int i=0;
        while(N[i]=getchar() ){
            if(N[i]=='\n')break;
            if(N[i]==EOF) exit(0) ;  //important
            //printf("%c",N[i]);
            i++;
        }

        printf("%c",'|');
        printf("%c%c%c%c",'_','_','_','_');

        if(N[1]=='\n'){
            printf("%c%c%c%c",'_','_','_',N[0]);
        }
        else if(N[2]=='\n'){
            printf("%c%c%c%c",'_','_',N[0],N[1]);
        }
        else if(N[3]=='\n'){
            printf("%c%c%c%c",'_',N[0],N[1],N[2]);
        }
        else if(N[4]=='\n'){
            printf("%c%c%c%c",N[0],N[1],N[2],N[3]);
        }
        else if(N[5]=='\n'){
            printf("%c%c%c%c",N[1],N[2],N[3],N[4]);
        }
        else if(N[6]=='\n'){
            printf("%c%c%c%c",N[2],N[3],N[4],N[5]);
        }
        else if(N[7]=='\n'){
            printf("%c%c%c%c",N[3],N[4],N[5],N[6]);
        }
        else{
            printf("%c%c%c%c",N[4],N[5],N[6],N[7]);
        }
        printf("%c",'|');
        //printf("%c",N[0]);
        //printf("%c",N[3]);
        /*printf("%s","|");

        int i=0;
        while(N[i]=getchar()&&i<8){
            printf("%c",N[i]);
            i++;
            if(N[i] == 'null'){
                printf("%c",'-');
            }
            else if(i==8)break;
        }
        printf("%s","|");
        */
        //std::cout <<boost::format( "%s,%s,%4d,%s" ) % | % ____ % N % |;
        //printf("%s%s%c%s","|","____",N[i],"|");
    }
}
