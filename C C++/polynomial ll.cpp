#include<iostream>
using namespace std;

struct poly
{
      int coef,exp;
      struct poly *next;
};

struct poly *create(struct poly *head)
{
      int i;
      struct poly *new_node,*temp;
      new_node = new poly;
      new_node->next = NULL;
      cout<<"\nExponent: ";
      cin>>new_node->exp;
      cout<<"\nCoefficient: ";
      cin>>new_node->coef;
      cout<<"\n";
      temp = head;
     
     
      if (temp == NULL)
      {
            head = new_node;
      }
     
      else
      {
           
           if(new_node->exp == temp->exp)
           {
               temp->coef = temp->coef + new_node->coef;
               return head;
           }
           
            while(temp->next != NULL)
            {
                  temp = temp->next;
                  if(new_node->exp == temp->exp)
                  {
                     temp->coef = temp->coef + new_node->coef;
                     return head;
                  }
                 
            }
            temp->next=new_node;
      }

      return head;
}

void display(struct poly *head)
{
      struct poly *temp;
      temp = head;
      while(temp != NULL)
      {
            cout<<temp->coef<<"x^"<<temp->exp;
            if(temp->next != NULL)
            {
               cout<<" + ";
            }
            temp = temp->next;
      }
      cout<<"\n";
}


struct poly *create3(int sum, int exp1, struct poly *head)
{
      struct poly *new_node,*temp;
      new_node = new poly;
      new_node->next = NULL;
      new_node->coef = sum;
      new_node->exp = exp1;
      temp = head;
      if (temp == NULL)
      {
            head = new_node;
      }
     
      else
      {
            while(temp->next != NULL)
            {
                  temp = temp->next;
            }
            temp->next = new_node;
      }  
      return head;
}


struct poly *add(struct poly *head1, struct poly *head2, struct poly *head3)
{
   struct poly *temp1, *temp2, *temp3, *temp4;
   int sum,exp1,flag = 0;
   temp1 = head1;
   temp2 = head2;
   
   while(temp1 != NULL)
   {
      while(temp2 != NULL)
      {
         if(temp1->exp == temp2->exp)
         {
            sum = temp1->coef+temp2->coef;
            exp1 = temp1->exp;
            head3 = create3(sum,exp1,head3);
            flag = 1;
         }
         else
         {
           
            sum = temp2->coef;
            exp1 = temp2->exp;
            head3 = create3(sum,exp1,head3);
         }
         temp2 = temp2->next;
      }
      if(flag == 0)
      {
         sum = temp1->coef;
         exp1 = temp1->exp;
         head3 = create3(sum,exp1,head3);
      }
      temp1 = temp1->next;
   }
   return head3;
}
   
int main()
{
    int k;
    struct poly *head1 = NULL, *head2 = NULL, *head3 = NULL, *head4 = NULL;
    while(k != 4)
    {
		cout<<"\n\n1.Enter 1st Polynomial\n2.Enter 2nd Polynomial\n3.Addition\n4.Exit\n";
		cout<<"\nEnter choice :";
    	cin>>k;
		
		switch(k)
		{
			case 1:head1 = create(head1);
				   cout<<"\n\nFirst polynomial is: ";
        		   display(head1);
        		   break;
        		   
        	case 2:head2 = create(head2);
        		   cout<<"\n\nSecond polynomial is: ";
        		   display(head2);
        		   break;
        	
			case 3:head3=add(head1,head2,head3);
       			   cout<<"\nAddition is: ";
      			   display(head3);
      			   break;
      			   
    		case 4:cout<<"\n\nProgram Terminated";
    			   break;

		}	  
	}
}

