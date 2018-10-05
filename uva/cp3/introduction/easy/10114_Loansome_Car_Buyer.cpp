#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif

    int loanDuration, numRecords;
    float downPayment, loanAmount;
    while (true)
    {
        cin >> loanDuration >> downPayment >> loanAmount >> numRecords;
        if (loanDuration < 0)
            break;
        float initailCarVal = downPayment + loanAmount;
        int month;
        float deprPer;
        float perMonth = loanAmount/(float)loanDuration;
        vector<pair<int, float>> deprRecord;
        for (int i = 0; i < numRecords; i++)
        {
            cin >> month >> deprPer;
            deprRecord.push_back(make_pair(month, deprPer));
        }
        float currentVal = initailCarVal * (1 - deprRecord[0].second);
        float amountOwed = loanAmount;
        int curRecord = 0;
        int months=0;
        while(currentVal<amountOwed && months<=loanDuration)
        {
            months++;
            if (curRecord != deprRecord.size() - 1 && deprRecord[curRecord + 1].first == months)
                curRecord++;
            currentVal *= (1 - deprRecord[curRecord].second);
            amountOwed -= perMonth;
           // cout<<months<<" "<<curRecord <<" "<<currentVal<<" "<<amountOwed<<endl;
        }
        if(months==1)
            cout<<"1 month"<<endl;
        else
            cout<<months<<" months"<<endl;
    }
}