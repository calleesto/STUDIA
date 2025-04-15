    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main(){
            int things;
            while(cin>>things){
                    vector<int> values(things);
                    for(int i=0;i<things;i++){
                            cin>>values[i];
                    }
                    vector<int> weights(things);
                    for(int i=0;i<things;i++){
                            cin>>weights[i];
                    }
                    int maxWeight;
                    cin>>maxWeight;
                    vector<int> dp(maxWeight+1,0);
                    for(int i=0;i<things;i++){
                            for(int j=maxWeight;j>=weights[i];j--){
                                    dp[j]=max(dp[j],dp[j-weights[i]]+values[i]);
                            }
                    }
                    cout<<dp[maxWeight]<<endl;
            }
            return 0;
    }