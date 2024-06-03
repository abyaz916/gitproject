#include<stdio.h>
#include<stdlib.h>
float temp(void){
	int cho;
	float n;
	printf("1. Celsius to Fahrenheit\n\n2. Celsius to Kelvin\n\n3. Fahrenheit to Celsius\n\n4. Fahrenheit to Kelvin\n\n5. Kelvin to Celsius\n\n6. Kelvin to Fahrenheit\n\n7. exit\nnEnter your choice : ");
	scanf("%d",&cho);
	switch(cho){
		case 1:
			printf("Enter Temperature in Celsius : ") && scanf("%f",&n);
			printf("Temperature in Fahrenheit : %f\n",1.8*n+32);
			break;
		case 2:
			printf("Enter Temperature in Celsius : ") && scanf("%f",&n);
			printf("Temperature in Kelvin : %f\n",n+273.15);
			break;
		case 3:
			printf("Enter Temperature in Fahrenheit : ") && scanf("%f",&n);
			printf("Temperature in Celsius : %f\n",0.5555555555555*(n-32));
			break;
		case 4:
			printf("Enter Temperature in Fahrenheit : ") && scanf("%f",&n);
			printf("Temperature in Kelvin : %f\n",0.5555555555555*(n-32)+273.15);
			break;
		case 5:
			printf("Enter Temperature in Kelvin : ") && scanf("%f",&n);
			printf("Temperature in Celsius : %f\n",n-273.15);
			break;
		case 6:
			printf("Enter Temperature in Kelvin : ") && scanf("%f",&n);
			printf("Temperature in Fahrenheit : %f\n",(n-273.15)*1.8+32);
			break;
		case 7:
			break;			
		default:
		    printf("invalid Choice\n");
   }
}
void dist(void){
	int cho;
	float n;
	printf("1. Kilometers to meters\n\n2. Kilometers to millimeters\n\n3. Kilometers to Centimeters\n\n4. Kilometers to Feet\n\n5. Kilometers to Inches\n\n6. Meters to Kilometers\n\n7. Meters to millimeters\n\n8. Meters to Centimeters\n\n9. Meters to Feet\n\n10. Meters to Inches\n\n11. Centimeters to Kilometers\n\n12. Centimeters to Meters\n\n13. Centimeters to Millimeters\n\n14. Centimeters to Feet\n\n15. Centimeters to Inches\n\n16. Millimeters to Kilometers\n\n17. Millimeters to Meters\n\n18.Millimeters to Centimeters\n\n19. Millimeters to Feet\n\n20. Millimeters to Inches\n\n21. Feet to Kilometers\n\n22. Feet to Meters\n\n23. Feet to Centimeters\n\n");
    printf("24. Feet to Millimeters\n\n25. Feet to Inches\n\n26. Inches to Kilometers\n\n27. Inches to Meters\n\n28.  Inches to Centimeters\n\n29.  Inches to Millimeters\n\n30. Inches to Feet\n\n31. exit\n\nEnter your choice : ") && scanf("%d",&cho);
    switch(cho){
		case 1:
			printf("Enter Distance in Kilometers : ") && scanf("%f",&n);
			printf("Distance in Meters : %f\n",n*1000);
			break;
		case 2:
			printf("Enter Distance in Kilometers : ") && scanf("%f",&n);
			printf("Distance in Millimeters : %f\n",n*1000000);
			break;
		case 3:
			printf("Enter Distance in Kilometers : ") && scanf("%f",&n);
			printf("Distance in Centimeters : %f\n",n*100000);
			break;
		case 4:
			printf("Enter Distance in Kilometers : ") && scanf("%f",&n);
			printf("Distance in Feet : %f\n",n*3280.84);
			break;
		case 5:
			printf("Enter Distance in Kilometers : ") && scanf("%f",&n);
			printf("Distance in Inches : %f\n",n*39370.079);
			break;
		case 6:
			printf("Enter Distance in Meters : ") && scanf("%f",&n);
			printf("Distance in Kilometers : %f\n",n/1000);
			break;
		case 7:
			printf("Enter Distance in Meters : ") && scanf("%f",&n);
			printf("Distance in Centimeters : %f\n",n*100);
			break;
		case 8:
			printf("Enter Distance in Meters : ") && scanf("%f",&n);
			printf("Distance in Millimeters : %f\n",n*1000);
			break;
		case 9:
			printf("Enter Distance in Meters : ") && scanf("%f",&n);
			printf("Distance in Feet : %f\n",n*3.28084);
			break;
		case 10:
			printf("Enter Distance in Meters : ") && scanf("%f",&n);
			printf("Distance in Inches : %f\n",n*39.3701);
			break;
		case 11:
			printf("Enter Distance in Centimeters : ") && scanf("%f",&n);
			printf("Distance in Kilometers : %f\n",n/100000);
			break;
		case 12:
			printf("Enter Distance in Centimeters : ") && scanf("%f",&n);
			printf("Distance in Meters : %f\n",n/100);
			break;
		case 13:
			printf("Enter Distance in Centimeters : ") && scanf("%f",&n);
			printf("Distance in Millimeters : %f\n",n*10);
			break;
		case 14:
			printf("Enter Distance in Centimeters : ") && scanf("%f",&n);
			printf("Distance in Feet : %f\n",n*0.0328084);
			break;
		case 15:
			printf("Enter Distance in Centimeters : ") && scanf("%f",&n);
			printf("Distance in Inches : %f\n",n*0.393701);
			break;
		case 16:
			printf("Enter Distance in Millimeters : ") && scanf("%f",&n);
			printf("Distance in Kilometers : %f\n",n/1000000);
			break;
		case 17:
			printf("Enter Distance in Millimeters : ") && scanf("%f",&n);
			printf("Distance in Meters : %f\n",n/1000);
			break;
		case 18:
			printf("Enter Distance in Millimeters : ") && scanf("%f",&n);
			printf("Distance in Centimeters : %f\n",n/10);
			break;
		case 19:
			printf("Enter Distance in Millimeters : ") && scanf("%f",&n);
			printf("Distance in Feet : %f\n",n*0.00328084);
			break;
		case 20:
			printf("Enter Distance in Millimeters : ") && scanf("%f",&n);
			printf("Distance in Inches : %f\n",n*0.0393701);
			break;
		case 21:
			printf("Enter Distance in Feet : ") && scanf("%f",&n);
			printf("Distance in Kilometers : %f\n",n*0.0003048);
			break;
		case 22:
			printf("Enter Distance in Feet : ") && scanf("%f",&n);
			printf("Distance in Meters : %f\n",n*0.3048);
			break;
		case 23:
			printf("Enter Distance in Feet : ") && scanf("%f",&n);
			printf("Distance in Centimeters : %f\n",n*30.48);
			break;
		case 24:
			printf("Enter Distance in Feet : ") && scanf("%f",&n);
			printf("Distance in Millimeters : %f\n",n*304.8);
			break;
		case 25:
			printf("Enter Distance in Feet : ") && scanf("%f",&n);
			printf("Distance in Inches : %f\n",n*12);
			break;
		case 26:
			printf("Enter Distance in Inches : ") && scanf("%f",&n);
			printf("Distance in Kilometers : %f\n",n*0.0254/1000);
			break;
		case 27:
			printf("Enter Distance in Inches : ") && scanf("%f",&n);
			printf("Distance in Meters : %f\n",n*0.0254);
			break;
		case 28:
			printf("Enter Distance in Inches : ") && scanf("%f",&n);
			printf("Distance in Centimeters : %f\n",n*2.54);
			break;
		case 29:
			printf("Enter Distance in Inches : ") && scanf("%f",&n);
			printf("Distance in Millimeters : %f\n",n*25.4);
			break;
		case 30:
			printf("Enter Distance in Inches : ") && scanf("%f",&n);
			printf("Distance in Feet : %f\n",n*0.0833333);
			break;
		case 31:
			
			break;
		default:
		    printf("Invalid Choice\n");	
}
}

void main(){
	int choice;
	again:
	printf("1. Temparature\n2. Distance\n3. Exit\nEnter your wish : ") && scanf("%d",&choice);
	switch(choice){
		case 1:
			temp();
			break;
		case 2:
			dist();
			break;
		case 3:
			exit(0);
			break;
		default:
		    printf("Invalid Choice\n");	
		}
	goto again;	
}
