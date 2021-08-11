// https://www.hackerrank.com/challenges/cut-the-sticks/problem


// solution code
vector<int> cutTheSticks(vector<int> arr) {
    vector<int> result{};
    int smallest,left,previous;
    bool isAllEqual=false;

    while(!isAllEqual){
        isAllEqual=true;
        previous=0;
        left=0;
        smallest=1001;

        for(int i=0;i<arr.size();i++){
            if((arr[i]>0)&&(arr[i]<smallest)) smallest=arr[i];
            if(arr[i]>0) {
                if (previous==0)previous=arr[i];
                if(arr[i]!=previous)  isAllEqual=false;
            }
        }

        for(int i=0;i<arr.size();i++){
            if(arr[i]>0) left++;
            arr[i]=arr[i]-smallest;
        }
        result.push_back(left);
    }
    return result;
}