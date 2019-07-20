//
//
//
//

#include<iostream>
using namespace std;

class StockSpan{
    int days, *stockPrice, *stockSpan;
    public:
    StockSpan(int n)
    {
        days = n;
        stockPrice = new int [days];
        stockSpan = new int [days];
      //  stockSpan[days] = {0};

      for( int i = 0 ; i < days ; i++)
        stockSpan[i] =  0;

    }
    void calculateStockSpan();
    friend istream& operator >> (istream&, StockSpan&);
    friend ostream& operator << (ostream&, StockSpan&);
};
    void StockSpan::calculateStockSpan()
    {
        int i, j, count;
        stockSpan [0] = 1;          // it will always be 1 for the first day
        for(i = 1 ; i < days ; i++)
        {
            j = i;
            count = 0;
               while(j > 0 && stockPrice[i] >= stockPrice[j])
                 count++, j--;
            stockSpan[i] = count;
        }
    }

    istream& operator >> (istream& input, StockSpan& s)
    {
      for( int i = 0 ; i < s.days ; i++)
      {
        cout << endl << "Enter stock price for " << i + 1 << " day : ";
        input >> s.stockPrice[i];
      }
     return input;
    }

    ostream& operator << (ostream& output, StockSpan& s)
    {
      output << endl << "Stock price are as follows : ";
      for (int i = 0 ; i < s.days ; i++) cout << s.stockPrice[i] << "  ";

      output << endl << endl << "Stock spans are as follows : ";
      for (int i = 0 ; i < s.days ; i++) cout << s.stockSpan[i] << "  ";

      return output;
    }

int main()
{
    int days;

    cout << "Enter no of days : ";
    cin >> days;

    StockSpan s(days);
    cin >> s;
    s.calculateStockSpan();
    cout << s;

    cout << endl << "End of main()";

    return 0;
}
