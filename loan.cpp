
#include<iostream>
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
   
     

} 

  
