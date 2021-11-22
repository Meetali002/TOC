#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string FN;
    string LN;
    
    cout<<"Enter your First Name : ";
    cin>>FN;
    cout<<"Enter your Last Name : ";
    cin>>LN;
    
   
     string fullName = FN + " " + LN; 
     cout<<"After Concatenation : "<<fullName<<endl;
    
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
    
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;
      
    cout << "Length of String : " << fullName.size()<<endl;
    
      fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After White Space Removal : " << fullName;
     
     return 0; 
}