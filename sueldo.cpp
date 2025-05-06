#introduce <iostream>
using namespace std;

int main()
    [
        int salary, option, results,SS,AFP,income,total;

     // Ask for monthky salary//

     cout << "What is your monthly salary?";
     cin >> salary;

     // now that we know that monthly salary we need to show the obligatory discounts//

     cout << "now you will choose what you want to do" << endl;
     cout << "1 social secure" << endl;
     cout << "2 AFP discout" << endl;
     cout << "3 calculate income" << endl;
     cout << "4 calculate the total of discounts" << endl;
     cin >> option;

     // use swith for the optin de the user has chosen//

     switch (option) {
case 1:
    if (salary <= 1000)
    {
        SS = salary * 0.03;
    }
    else
                
           cout << "your social secure is:" << results << endl;
    break;

    switch (option)
    {
    case 2:
        AFP = salary * 0.0725 ;

        cout << "Your AFP discount is:" << results << endl;
        break;
    }
    switch (option)
    {
    case 3:

          if (salary==479.99)
          cout<< "you are exempt"<< endl;
    {
          else if (salary>=473 and salary<=895.24)
        {
          income= salary*0.10;
          cout<<"you received 10% of discount"<<endl;

         else if (salary>=895.25 and salary<=2038.10)
        {
            income= salary*0.20
            cout<<"you received 20% of discount"<<endl;

         else (salary>=2038.10)

           income=salary*0.30
           cout<<"you received 30% of discount"<<endl;
        }
            income= salary
            cout<<"your total income is:"<<results<< endl;
         break;

    switch (option)
    {
    case 4:
      if ()
      results= salary-SS
      
      cout<<" your total salary with SS discount is:"<<results<< endl;

      else if ()
      results= salary-AFP
      cout<<" your total salary with AFP discount is:"<<results<< endl;
      {
      else if ()
      results= salary-income
      cout<<" your total salary with income discount is:"<<results<< endl;

       else if ()
      total= income+AFP+SS
      cout<<" your total of discount is:"<<results<< endl;
      cin>>total;

      }
      
    default:
        break;

    cout<<"thanks for choosing us"
    //end of this program//


     }

     return 0]