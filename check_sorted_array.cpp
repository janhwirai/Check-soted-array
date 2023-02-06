#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int count=0;

        for(int i=1;i<n;i++)

        {

            if(arr[i-1]<=arr[i])

            {

                count++;

            }

        }

        if(count==n-1)

        {

            return true;

        }

        return false;
    }
};
int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution s;
        bool ans=s.arraySortedOrNot(arr,n);
        cout<<ans<<"\n"

    }
    return 0;
}