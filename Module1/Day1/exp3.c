  #include <stdio.h>
  int main() {
    int rollNo;
    char name[45];
    float physics, math, chemistry;
    float total, percentage;

    // Read student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %s", name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks in Math: ");
    scanf("%f", &math);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistry);

 
    totalMarks = physics + math + chemistry;
    percentage = (total / 300) * 100;

    // Print student summary
    printf("\nStudent Summary\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %f\n", physics);
    printf("Math Marks: %f\n", math);
    printf("Chemistry Marks: %f\n", chemistry);
    printf("Total Marks: %f\n", total);
    printf("Percentage: %f%\n", percentage);

    return 0;
}
