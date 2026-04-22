#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 90){
	 printf("\n Grade: A");
}
    else if (marks >= 80){
	 printf("\n Grade: B");
}
    else if (marks >= 70){
	 printf("\n Grade: C");
}
    else if (marks >= 60){
	 printf("\n Grade: D");
}
    else{
	 printf("\n Grade: Fail");
}
}
