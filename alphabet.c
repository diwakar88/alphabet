/*
Name:Diwakar kandel
Subject:programming fundanmental
Program:WAP to check whether character is an alphabet or not using terniary operator.
Roll No:
Date:jan8,2017
*/
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter any character: ");
  scanf("%c",&ch);
  printf("it is %s",(((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))? "ALPHABET" : "NOT ALPHABET") );

  return 0;
}

