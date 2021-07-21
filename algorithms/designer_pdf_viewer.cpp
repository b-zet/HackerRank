// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

// solution code
int designerPdfViewer(vector<int> h, string word) {
    int result;
    string abc="abcdefghijklmnopqrstuvwxyz";
    int height = 0;
    int width = word.size();

    for (int i=0;i<width;i++){
        for(int j=0;j<26;j++){
            if((h[j]>height)&&(word[i]==abc[j])){
                height = h[j];
            }
        }
    }

    result = height * width;
    return result;
}