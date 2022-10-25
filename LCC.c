#include<stdio.h>
#include<string.h>

int main(){
	int id[100],t,i,j;
	double benar,salah,skor[100];
	char nama[100][100];
	
	scanf("%d",&t);
	for(i = 0;i<t;i++){
		scanf("%d %s %lf %lf",&id[i],nama[i],&benar,&salah);
		skor[i] = (benar*4) - (salah*1.5);
	}
	
	for(i=0;i<t;i++){
		for(j=i+1;j<t;j++){
			if(skor[i]<skor[j]){
				skor[i] = skor[i] + skor[j];
				skor[j] = skor[i] - skor[j];
				skor[i] = skor[i] - skor[j];
				char temp_s[100];
				strcpy(temp_s,nama[i]);
				strcpy(nama[i],nama[j]);
				strcpy(nama[j],temp_s);
				id[i] = id[i] + id[j];
				id[j] = id[i] - id[j];
				id[i] = id[i] - id[j];
			}
		}
	}
	
	for(i = 0;i<t;i++){
		printf("%d ",id[i]);
		printf("%s ",nama[i]);
		printf("%.1f\n",skor[i]);
	}
	
	
	return 0;
}
