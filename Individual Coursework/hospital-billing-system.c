#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char*argv[]){
	
	char Patient_Name[50];
	char Case_Diagnosed[50];
	int Consultancy_fee;
	int Admission_fee;
	int Number_of_Day_admitted;
	int bed_fee_rate[] = {100000, 80000, 60000, 45000};
	int total_bill;
	int bed_fee;
	
	printf("Enter your full name        : ");
	fgets(Patient_Name, sizeof(Patient_Name), stdin);
	
	printf("Case Diagnosed              : ");
	fgets(Case_Diagnosed, sizeof(Case_Diagnosed), stdin);
	
	printf("Consultancy Fee             : ");
	scanf("%d", &Consultancy_fee);
	
	printf("Admission Fee               : ");
	scanf("%d", &Admission_fee);
	
	printf("Number of days admitted     : ");
	scanf("%d", &Number_of_Day_admitted);
	
	if(Number_of_Day_admitted >= 10){
		bed_fee = Number_of_Day_admitted * bed_fee_rate[3];
	}else if(Number_of_Day_admitted >= 7){
		bed_fee = Number_of_Day_admitted * bed_fee_rate[2];
	}else if(Number_of_Day_admitted >= 4){
		bed_fee = Number_of_Day_admitted * bed_fee_rate[1];
	}else {
        bed_fee = Number_of_Day_admitted * bed_fee_rate[0];
    }
    
    total_bill = bed_fee + Consultancy_fee + Admission_fee;
    
    printf("\n\n");
    
	
	printf("           BUHINGA HOSPITAL BILL SYSTEM\n");
    printf("\t****AUTOMATED PATIENTS RECEIPT******\n");
    printf("===========================================================\n");
    printf("Patient's name            : %s", Patient_Name);
    printf("Case Diagnosed             : %s", Case_Diagnosed);
	printf("Consultancy Fee            : %d\n", Consultancy_fee);
	printf("Admission Fee              : %d\n", Admission_fee);
	printf("Number of days admitted    : %d\n", Number_of_Day_admitted);
    printf("Bed Fees                   : %d\n", bed_fee);
    printf("===========================================================\n");
    
    printf("Total Bill                 : %d                  UGX\n", total_bill);
    
    
    
    return 0;
}
