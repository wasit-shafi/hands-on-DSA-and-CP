//
//
//
//
#include<iostream>
#include<stack>
using namespace std;
class StockSpan{
    int days;
	stack <int> stockPrice;
	stack <int> stockSpan;
	stack <int> temp;
    public:
    StockSpan(int n)
    {
        days = n;
    }
    void calculateStockSpan();
    friend istream& operator >> (istream&, StockSpan&);
    friend ostream& operator << (ostream&, StockSpan&);
};
    void StockSpan::calculateStockSpan()
    {
        int count = 0, top;
        while(stockPrice.empty() == false)
        {
            top = stockPrice.top();
            stockPrice.pop();

            while(stockPrice.empty() == false && stockPrice.top() <= top )
            {
                temp.push(stockPrice.top());
                stockPrice.pop();
                count++;
            }
            while(temp.empty() == false)
            {
                stockPrice.push(temp.top());
                temp.pop();
            }
            stockSpan.push(count);
            cout << endl << "[" << count << "]";
        }
    }
    istream& operator >>(istream& input, StockSpan& s)
    {
      for(int i = 0 ; i < s.days ; i++)
      {
	   int p;
        cout << endl << "Enter stock price for " << i + 1 << " day : ";
        input >> p;
		s.stockPrice.push(p);
//		s.stockSpan.push(p + 1);
      }
     return input;
    }

    ostream& operator << (ostream& output, StockSpan& s)
    {
      output << endl << "Stock price are as follows : ";
      while (s.stockPrice.empty() == false) cout << s.stockPrice.top() << "  ", s.stockPrice.pop();

      output << endl << endl << "Stock spans are as follows : ";
      while (s.stockSpan.empty() == false) cout << s.stockSpan.top() << "  ", s.stockSpan.pop();

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
