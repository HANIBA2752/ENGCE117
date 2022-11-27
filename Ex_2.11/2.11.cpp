#include <stdio.h>
#include <string.h>

void operatcomma( int value, int num) {
    char cover[1000] ;
    itoa( value , cover, 10 ) ;
    int pos = 0 ;
    int move = 3 ;
    int comber=2 ;
    char re_output[1000] ;
    for ( int i = 0 ; i < num+1  ; i++ ) {
        re_output[pos] = cover[ num-i ] ;
        pos++ ;
        if (comber == num && i == num ) {
        	break ;
		}
        if ( pos%move == 0 ) {
            re_output[pos] = ',' ;
            pos ++ ;
            move = move + 4 ;
            comber = comber + 3 ;
        }
    }
    for (int j = 1 ; j <= pos ; j++ ){
        printf("%c", re_output[pos - j]) ;
    }
}

int main(){
	
	int n;
	int x;
	int sum = 0;
	
	
	printf("User Input : ");
	scanf("%d", &n);
	printf("Series : ");
	
	for(int i=1;i<=n;i++){
	    x = 1;
		for(int j=1;j<=i;j++){
			x = x*10;
		}
		x = x - 1;
		printf("%d ", x);
		sum = sum + x - 1;
		if(i != n){
		    printf("+ ");
		}
	}	
	printf("\nSum : ");
	operatcomma(sum, n);
	
	
	return 0;
}
