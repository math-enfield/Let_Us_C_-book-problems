/*If the marks obtained by a student in five different subjects are input through the keyboard, write a program
 to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks
  that can be obtained by a student. Assume that the maximum marks that can be obtained y a studnet in each subject is 100.*/
 #include <stdio.h>
 int main()
 {
    float maths, eng, chem, sst, hindi, avg, agg;
    printf("please enter your grades for Mathematics, English, Chemistry, Social studies, Hindi: ");
    scanf("%f %f %f %f %f", &maths, &eng, &chem, &sst, &hindi);
    if (maths > 100||eng > 100||chem > 100||sst > 100||hindi > 100) //earlier I wrote (maths||eng||chem||sst||hindi >100) which is wrong
    {
        printf("Please enter the correct marks");
    }
    else{
    agg = maths + eng + chem + sst + hindi;
    avg = agg/5;
    printf("Your aggregate marks are %f and percentage is %f",agg, avg);
    }
    return 0;
 }