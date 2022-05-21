# Web-3.0-Task
<!-- #include<iostream>
using namespace std;
class customer 
{

    char name[20];long accnum;long phn;//private to class
    public:
    void setdata(){
        cout<<"\nEnter name of cuctomer:: ";
        cin>>name;
        cout<<"\nEnter Account Number:: ";
        cin>>accnum;
        cout<<"\nEnter Contact Number:: ";
        cin>>phn;
    }
    void showdata(){
        cout<<"\nName of customer:: "<<name;
        cout<<"\nAccount Number:: "<<accnum;
        cout<<"\nContact Number:: "<<phn;

    }


};
class lender:private customer{
float balance;
public:
 lender( ){
balance =5000.0;
//this is balance before any trasaction and this code will run when object will be created 
//starting balance i set 5000.00
}
void setlendata(){
setdata();
//because lender is also a customer,but object of lender class can not directly call setdata()function but he can call setlendata()
}
void lendmoney(){
    int k;
    cout<<"\nEnter the ammount that you want to lend:: ";
    cin>>k;
     if(k>balance){
cout<<"\nYour Bank balance is inSufficient";
    }else{
        balance-=k;
        cout<<"\nTrasaction succesful";
    }
}
void showlendata(){
showdata();
cout<<"\n Current Balance is :: "<<balance;
}
~lender(){
    cout<<"\nAfter all trasaction your Bank Account is ::  "<<balance;
    cout<<"\nThanks for trasaction";
}

};
class borrower:private customer{
float balance;
public:
borrower(){
balance=6000.0;
}
void setbordata(){
    setdata();

}
void showbordata(){
    showdata();
    cout<<"\nCurrent Balance is:: "<<balance;

}
void borrowmoney(){
    int k;
    cout<<"\nEnter the ammount that you want to borrow";
    cin>>k;
    
        balance+=k;
        cout<<"\nTrasaction succesful";
    
}
~borrower(){
     cout<<"\nAfter all trasaction your Bank Account is ::  "<<balance;
    cout<<"\nThanks for trasaction";
}
};

int main(){
  lender Dinesh;borrower mohit;
  //Dinesh is object of lender class 
  //mohit is an object of borrower class
  Dinesh.setlendata();//this function will take data from customer
  Dinesh.lendmoney();
 
  mohit.setbordata();
  mohit.borrowmoney();
  cout<<"\nData of Dinesh account is::";
   Dinesh.showlendata();
   cout<<"\n Data of mohit accoutn is::";
  mohit.showbordata();
   
     

} -->

  
  Explanation::
 IN this code i have implemented loan system. There are two type users. One is borrower and other is lender.Thye both do transaction via bank. Lender give mone to baank from his account. and Borrower take money from bank and bank send that to his account.
1. So to implement that system i have make three classes.  customer class(Parent class of lender and borrower class);
 In customer class have three variable name of account holder and account number and phone number.And it have to methods one to get data from user and other to show that to user.
 three variables kept private(they can be used only inside that class)
 two methods showdata() and setdata() are public;
 
 2. lender class is child class of cutomer class and access specifier is priavte. All the methods and variables of customer class available to lender class but not accessable;lender class object will have (name,accnum and phn and balance). By using cunstructor i set value of balance variable 5000.0. so lender class user can not lend more than money in his accouont.
 in lender class lendmoney() function checks wether user account have suffienct money and this reduces ammount input by user from his account balance.
 in showlendata() we shows data of lender on screen.(name,accnum and phn variables are private to customer class we can not directly use them here. we used them via showdata() function.
 then we used destructor (**destructor is last function of life of an object of any class** )this show us that transaction completed;
 
 3. Borrower class :: Like lender class borrower is also a child class of customer class. this also same type of methods like lender class. borrowmoney() function adds money to account of borrower;that he wants to borrow from bank;
 
 

  
  
  
  
  
  
  
