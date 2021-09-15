// https://www.hackerrank.com/challenges/strong-password/problem

// solution code
int minimumNumber(int n, string password) {
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    int passed=0;
    int missing=0;
    bool condition=false;

    for(int i=0;i<password.size();i++){
        for(int j=0;j<numbers.size();j++){
            if(password[i]==numbers[j]) {passed++;condition=true;break;}
        }
        if (condition) break;
    }

    condition=false;
    for(int i=0;i<password.size();i++){
        for(int j=0;j<lower_case.size();j++){
            if(password[i]==lower_case[j]) {passed++;condition=true;break;}
        }
        if (condition) break;
    }

    condition=false;
    for(int i=0;i<password.size();i++){
        for(int j=0;j<upper_case.size();j++){
            if(password[i]==upper_case[j]) {passed++;condition=true;break;}
        }
        if (condition) break;
    }

    condition=false;
    for(int i=0;i<password.size();i++){
        for(int j=0;j<special_characters.size();j++){
            if(password[i]==special_characters[j]) {passed++;condition=true;break;}
        }
        if (condition) break;
    }

    missing = 4-passed;
    if (n+missing<6) missing = 6-n;

    return missing;

}