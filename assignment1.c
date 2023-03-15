#include<stdio.h>
int main()
{   
    int y;
    int x=45;
    printf("\t\t\t\tINPUT FOR PROGRAM\v\t\t\t\tint y;\n\t\t\t\tint x=45;\n\n");

    //BASIC ASSIGNMENT::--
    y=x;
    printf("\tBASIC ASSIGNMENT(y=x) \vTherefore Example of basic assignment 45\n\n",y);
    
    //ADDITION ASSIGNMEENT::--
    y+=x;
    printf("\tADDITION ASSIGNMENT(y+=x) \vTherefore the example for addition is %d\n\n",y);
    
    //SUBTRATION ASSIGNMENT::--
    y-=x;
    printf("\tSUBSTRACTION ASSIGNMENT(y-=x) \vTherefore the example for substration is %d\n\n",y);

    //MULTIPLICATION ASSIGNMENT::--
    y*=x;
    printf("\tMULTIPLICATION ASSIGNMENT(y*=x) \vTherefore the example for multiplication is %d\n\n",y);

    //DIVISION ASSIGNMENT::--
    y/=x;
    printf("\tDIVISION ASSIGNMENT(y/=x) \vTherefore the example for division is %d\n\n",y);

    //MODULAR ASSIGNMENT::--
    y%=x;
    printf("\tMODULAR ASSIGNMENT(y%=x) \vTherefore the example for modular is %d\n\n",y);

    //BITWISE AND ASSIGNMENT::--
    y&=34;
    printf("\tBITWISE AND ASSIGNMENT(y&=34) \vTherefore the example for bitwise 'AND' is %d\n\n",y);

    //BITWISE OR ASSIGNMENT::--
    y|=34;
    printf("\tBITWISE OR ASSIGNMENT(y|=34) \vTherefore the example for bitwise 'OR' is %d\n\n",y);

    //BITWISE XOR ASSIGNMENT::--
    y^=34;
    printf("\tBITWISE XOR ASSIGNMENT(y^=34) \vTherefore the example for bitwise 'XOR' is %d\n\n",y);

    //BITWISE LEFT SHIFT ASSIGNMENT::--
    y<=34;
    printf("\tBITWISE LEFT SHIFT ASSIGNMENT(y<=34) \vTherefore the example for bitwise left shift is %d\n\n",y);

    //BITWISE RIGHT SHIFT ASSIGNMENT::--
    y>=34;
    printf("\tBITWISE RIGHT SHIFT ASSIGNMENT(y>=34) \vTherefore the example for bitwise right shift is %d\n\n",y);

    return 0;
}