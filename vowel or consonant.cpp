#include<stdio.h>
int main(){
	char alfa;
	printf("enter the alphabet:");
	scanf("%c",&alfa);
	if (alfa=='a'||alfa=='A'||alfa=='e'||alfa=='E'||alfa=='i'||alfa=='I'||alfa=='o'||alfa=='O'||alfa=='u'||alfa=='U'){
		printf("vowel");
	}
else{
	printf("consonant");
}
}
