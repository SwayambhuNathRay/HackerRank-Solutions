#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

float find_median(vector<int> &expenditure, int start, int end, int d, int first_time, vector<int> keep_count)
{
    
    int first = d/2;
    float a, b, median;
    int second = first + 1;
    for(int i = 1; i < 202; i++)
    {
        keep_count[i] = keep_count[i-1] + keep_count[i];
    }
    int flag1 = 0, flag2 = 0;
    if(d%2 == 0)
    {
        for(int i = 0; i < 202; i++)
        {
            if(first <= keep_count[i] && flag1 == 0)
            {
                a = i;
                flag1 = 1;
            }
            if(second <= keep_count[i] && flag2 == 0)
            {
                b = i;
                flag2 = 1;
            }
            if(flag1 == 1 && flag2 == 1)
                break;
        }
        median = (a+b)/2;
    }
    else
    {
        first = d/2 + 1;
        for(int i = 0; i < 202; i++)
        {
            if(first <= keep_count[i])
            {
                a = i;
                break;
            }
        }
        median = a;
    }
    return median;
}


// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    vector<int> keep_count(202, 0);
    for(int i = 0; i < d; i++)
    {
        keep_count[expenditure[i]] += 1;
    }
    int notify = 0;
    int size = expenditure.size();
    int start = 0;
    for(int i = d; i < size; i++)
    {
        float median = 0;
        if(start == 0)
            median = find_median(expenditure, start, i, d, 1, keep_count);
        else
        {
            keep_count[expenditure[start-1]] -= 1;
            keep_count[expenditure[i - 1]] += 1;
            median = find_median(expenditure, start, i, d, 0, keep_count);
        }
        if(expenditure[i] >= 2*median)
            notify+=1;
        start++;
    }
    return notify;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string expenditure_temp_temp;
    getline(cin, expenditure_temp_temp);

    vector<string> expenditure_temp = split_string(expenditure_temp_temp);

    vector<int> expenditure(n);

    for (int i = 0; i < n; i++) {
        int expenditure_item = stoi(expenditure_temp[i]);

        expenditure[i] = expenditure_item;
    }

    int result = activityNotifications(expenditure, d);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
