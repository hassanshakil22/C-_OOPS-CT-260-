#include <iostream>
#include <vector>
#include <map>

using namespace std;



class Transactions{
public:
   int transaction_id;
   string product_id;
   string salesperson_id;
   int product_price;
   double profit_percentage;
   double revenue; 
   Transactions(int transaction_id,string product_id,string  salesperson_id, double profit_percentage){
    this->product_id=product_id;
    this->salesperson_id=salesperson_id;
    this->transaction_id=transaction_id;
    this->profit_percentage= profit_percentage;
this->product_price=product_list[product_id];
    total_rev();
   } 
   void display (){
    cout << "Transaction_" << transaction_id 
    << " SalesPerson_id: " << salesperson_id 
    << " Product_id: " << product_id 
    << " Cost=" << product_list[product_id] << "rs" 
    << " revenue per this transaction =" << revenue  << "rs"<<endl;
   }
   static void daily_closing (){
    cout << "Daily closing --> " << total_revenue << " <--"  <<endl; 
}
    void total_rev(){
        revenue = product_price*(profit_percentage/100);
        total_revenue += revenue;
   }
   
private:   
   static int total_revenue ;
    static map<string,int> product_list;
};
int Transactions::total_revenue = 0;
map<string,int> Transactions::product_list= { 
    {"101", 1000},
    {"102", 1500},
    {"103", 1200},
    {"104", 1800},
    {"105", 900},
    {"106", 1100},
    {"107", 1700},
    {"108", 1400},
    {"109", 1600},
    {"110", 1300}
};


int main(){
    // dynamic array / vector of type Transactions
    vector<Transactions> daily_transactions;

    
    daily_transactions.push_back(Transactions(1, "101", "1001", 10.0)); 
    daily_transactions.push_back(Transactions(2, "102", "1002", 15.0)); 
    daily_transactions.push_back(Transactions(3, "103", "1003", 12.5)); 
    daily_transactions.push_back(Transactions(4, "104", "1004", 20.0)); 
    daily_transactions.push_back(Transactions(5, "105", "1005", 5.0));  
    daily_transactions.push_back(Transactions(6, "106", "1006", 8.0));  
    daily_transactions.push_back(Transactions(7, "107", "1007", 18.0)); 
    daily_transactions.push_back(Transactions(8, "108", "1008", 14.0)); 
    daily_transactions.push_back(Transactions(9, "109", "1009", 16.5)); 
    daily_transactions.push_back(Transactions(10, "110", "1010", 9.0));
    for (auto &&transaction : daily_transactions)
    {
        transaction.display();
    }
    Transactions::daily_closing();
    
return 0;
}