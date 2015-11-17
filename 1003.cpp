#include<stdio.h>
#include<string>
using namespace std;

int main(){
	char str1[12];
	char str2[12];
	int a[10];
	int b[10];
	while (scanf("%s", str1) != EOF){
		scanf("%s", str2);
		string s1 = str1;
		int len1 = s1.length();
		int j = 0;
		for (int i = 0; i < len1; i++){
			if (s1[i] != ',' && s1[i] != '-'){
				a[j] = s1[i] - 48;
				j++;
			}
		}
	//	for (int i = 0; i < j; i++){
		//	printf("%d", a[i]);
		//}
		int m = 0;
		for (int i = 0; i < j; i++){
			m = m * 10  + a[i];
		}
		
		string s2 = str2;
		int len2 = s2.length();
		j = 0;
		for (int i = 0; i < len2; i++){
			if (s2[i] != ',' && s2[i] != '-' ){
				b[j] = s2[i] - 48;
				j++;
			}
		}
		int n = 0;
		for (int i = 0; i < j; i++){
			n = n * 10 + b[i];
		}
	//	printf("%d\n", m);
		//printf("%d\n", n);


		if (s1[0] == '-'){
			m = - m;
		}
		if (s2[0] == '-'){
			n = - n;
		}
		printf("%d\n", m + n);
	}
	return 0;
}
