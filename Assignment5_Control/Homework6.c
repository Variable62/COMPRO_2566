#include <stdio.h>
int calculateGPA(int score) {
    if (score >= 81 && score <= 100) {
        return 4;
    } else if (score >= 71 && score <= 80) {
        return 3;
    } else if (score >= 61 && score <= 70) {
        return 2;
    } else if (score >= 51 && score <= 60) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int math,eng, sci,art;
    int math_credit = 3, eng_credit = 3, sci_credit = 3, art_credit = 2;
    float total_gpa;
    int math_gpa = calculateGPA(math);
    int eng_gpa = calculateGPA(eng);
    int sci_gpa = calculateGPA(sci);
    int art_gpa = calculateGPA(art);
    printf("Please Enter Mathematic score: ");
    scanf("%d", &math);
    printf("Please Enter English score: ");
    scanf("%d", &eng);
    printf("Please Enter Science score: ");
    scanf("%d", &sci);
    printf("Please Enter Arts score: ");
    scanf("%d", &art);
    total_gpa = ((math_gpa * math_credit) + (eng_gpa * eng_credit) +(sci_gpa * sci_credit) + 
    (art_gpa * art_credit))/11;
    printf("GPA = %.2f",total_gpa);
    return 0;
}