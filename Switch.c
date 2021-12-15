#include <stdio.h>
int main()
{
	int order;
	printf("Enter a number between 1-5:");
	scanf("%d",&order);
	switch(order)
	 {
	 	case 1:printf("Food item - Pizza \nPrice - Rs 239");
		 		break;
		case 2:printf("Food item - Burger \nPrice - Rs 129");
		 		break;
		case 3:printf("Food item - Pasta \nPrice - Rs 179");
		 		break;
		case 4:printf("Food item - French fries\n Price - Rs99");
		 		break;
		case 5:printf("Food item - Sandwich \nPrice - Rs 149");
		 		break; 
		default:printf("Enter valid number :)");
	}
	return 0;
}
