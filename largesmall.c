#include<stdio.h> 
#include<string.h>   
void main()  
{ 
    char input[100],minWord[100],maxWord[100];
    printf("\nEnter the sentence: ");
    gets(input);
    int i,j;
    int len=strlen(input); 
    int si=0,ei=0; 
    int min_length=len,min_start_index = 0,max_length = 0,max_start_index = 0;  
    while (ei <= len)  
    { 
        if (ei < len && input[ei] != ' ') 
            ei++; 
          
        else 
        {  
            int curr_length = ei - si; 
           if (curr_length < min_length)  
            { 
                min_length = curr_length; 
                min_start_index = si; 
            } 
              
            if (curr_length > max_length) 
            { 
                max_length = curr_length; 
                max_start_index = si; 
            } 
            ei++; 
            si = ei; 
        } 
    } 
      for(i=min_start_index;i<min_length;i++)
      {
        minWord[i]=input[i];
      } 
      for(j=max_start_index;j<max_length;j++)
      maxWord[j]=input[j];
      puts(maxWord);
      puts(minWord); 
} 