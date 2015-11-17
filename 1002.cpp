#include<stdio.h>

int Abs(int x){
	return x > 0 ? x : -x;
}

int main(){
	int p, t, g1, g2, g3, gj;
	float grade;

	while (scanf("%d", &p) != EOF){
		scanf("%d", &t);
		scanf("%d", &g1);
		scanf("%d", &g2);
		scanf("%d", &g3);
		scanf("%d", &gj);
		if (Abs(g1 - g2) <= t && g1 <= p&& g2 <= p&& g3 <= p&& gj <= p){
			grade = (float)(g1 + g2) / 2;
		}
		else if (Abs(g1 - g2) >t  && g1 <= p&& g2 <= p&& g3 <= p&& gj <= p){
			if (Abs(g1 - g3) > t && Abs(g2 - g3) > t){
				grade = gj;
			}
			else if (Abs(g1 - g3) <= t &&Abs(g2 - g3) <= t){
				
				grade = g1 > (g2 > g3 ? g2 : g3) ? g1 : (g2 > g3 ? g2 : g3);

			}
			else{
				if (Abs(g1 - g3) > Abs(g2 - g3))
					grade = (float)(g2 + g3) / 2;
				else
					grade = (float)(g1 + g3) / 2;

			}
			
		}
		printf("%.1f\n", grade);


	}
	return 0;

}
