#include<stdio.h>

int main(){
	int bookID;
	int dueDate;
	int returnDate;
	int daysOverdue;
	int fineRate;
	float fineAmount;
	
	//input
	printf("Enter Book ID");
	scanf("%d",&bookID);
	
	printf("Enter Due Date");
	Scanf("%d",&dueDate);
	
	printf("Enter Return Date");
	scanf("%d",&returnDate);
	
	//calculate days overdue
	daysOverdue= returnDate- dueDate;
	//determine fine rate
	if(daysoverdue<=7){
		fineRate=20;
	}
	else if(daysOverdue<=14){
		fineRate=50;
	}
	else{
		fineRate=100;
	}
	//calculate fine amount
	fineAmount=daysOverdue*fineRate;
	
	//display results
	printf("\n---library fine Details---\n");
	printf("Book ID %d\n",bookID);
	printf("Due Date %d\n",dueDate);
	printf("Return Date %d\n",returnDate);
	printf("Days Overdue %d\n",daysoverdue);
	printf("fine Rate ksh.%d per day\n",fineRate);
	printf("fine Amount ksh.%2f\n",fineAmount);
	return 0;
}
