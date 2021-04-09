/* Create a structure hospital and include the following data members:
i       Name of patient
ii      Patient id (as static)
iii     Blood group
iv     Contact number (long long)
v      Name of disease
vi     Date of admission
Including the functions to input and print the data for N number of patients.

/* Code for P1*/
#include <stdio.h>
int i=0, n=1;
//Create the N patient structure
struct Patient{
 char name[10];
 int patient_id;
 char group[2];
 long long int contact;
 char disease[10];
 int DOA;
}patient[5];
//Function to input patient information
void AddPatient(){
 for(i=0; i<n; i++){
 printf("\t Patient name =");
 scanf("%s", patient[i].name);
 printf("\t Patient ID =");
 scanf("%d", &patient[i].patient_id);
 printf("\t Blood Group =");
 scanf("%s", patient[i].group);
 printf("\t Contact =");
 scanf("%lld", &patient[i].contact);
 printf("\t Disease =");
 scanf("%s", patient[i].disease);
 printf("\t Date of Admission =");
 scanf("%d", &patient[i].DOA);
 }
}
//Function to output patient information
void PrintPatient(){
 printf("Patient Record:\n\n");
 for(i=0; i<n; i++){
 printf("\t Patient name = %s\n", patient[i].name);
 printf("\t Patient ID = %d\n", patient[i].patient_id);
 printf("\t Blood Group = %s\n", patient[i].group);
 printf("\t Contact = %lld\n", patient[i].contact);
 printf("\t Disease = %s\n", patient[i].disease);
 printf("\t Date of Admission = %d\n", patient[i].DOA);
 }
}
int main(){

 AddPatient();
 PrintPatient();

 return 0;
}