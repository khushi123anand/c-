#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {3, 1, 2, 4, 5, 6};
    int targetsum = 7;
    int tripplets = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetsum)
                {
                    tripplets++;
                }
            }
        }
    }
    cout << tripplets << endl;
    return 0;
}