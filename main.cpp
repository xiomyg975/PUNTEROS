#include <iostream>

using namespace std;

/*int suma(int *arr , int tam){  //*arr=arr[] ES EQUIVALENTE
    int res=0;
    for(int i=0; i <tam;i++){
        //res+=arr[i];
        res=res+*arr++;

    }
    return res;
}
void imprimir(int *arr, int tam ){
    if (tam==0){
        return ;
    }
    cout <<*arr++ << "  " ;
    imprimir(arr,--tam);

}
void invertir(int *arr ,int tam){
    int *fin = arr + tam - 1;// TAMAÑO MENOS 1 YA QUE EL ULTIMO DIGITO VA A RETROCEDER 1
    while(fin > arr){
        int temp =*arr;
        *arr=*fin;
        *fin =temp ;
        arr++;
        fin--;
    }
}

bool palindrome(int *arr,int tam){ //PALINDROME NUMEROS
    int *fin= arr +tam - 1 ;
    while (fin>arr){
        if(*fin--!=*arr++)
            return false;
    }
    return true ;
}

int str(char *cad){  //LOGITUD DE LA CADENA
    int res=0;
    while (*cad++!='\0')
        res++;
    return res ;
}
*/

void str_cpy(char *cad1,char *cad2){
    int i =0 ;
    while (cad1[i]!='/0'){
        cad2[i]=cad1[i];
        i++;
    }


    }
int main()
{
    //int arr[]={4,5,8,1,2,54};
    //int *ptr=arr;
    char cadena1[]="oso";
    char cadena2[20];
    //invertir(arr,6);
    //imprimir(arr,6);
    //cout << palindrome(arr,6);
    //cout << str(cadena )<< endl ;
    str_cpy(cadena1,cadena2);
    /*int arr[]={4,5,8,1,2,54};
    int *ptr=arr;
    cout << *ptr<< endl ;
    ptr++;
    cout << *arr << endl ;
    cout <<*(ptr+1)<< endl ;*/
    return 0;
}
