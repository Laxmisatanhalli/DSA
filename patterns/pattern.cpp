#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern2(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<< "*";
    }
    cout<<"\n";
  }
}
void pattern3(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<< j ;
    }
    cout<<"\n";
  }
}
void pattern4(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<< i ;
    }
    cout<<"\n";
  }
}
void pattern5(int n){
  for(int i=0;i<=n;i++){
    for(int j=1;j<n-i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
void pattern6(int n){
 for(int i=0;i<=n;i++){
    for(int j=1;j<n-i+1;j++){
      cout<<j;
    }
    cout<<endl;
  }
}
void pattern7(int n){
 for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i-1;j++){
      cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    for(int j=0;j<=n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void pattern8(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i-1;j++){
      cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    for(int j=0;j<=n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
for(int i=1;i<=2*n-1;i++){
  int stars=i;
  if(i>n) stars = 2*n-i;
  for(int j=1;j<=stars;j++){
    cout<<"*";
  }
  cout<<endl;
}
}
void pattern11(int n){
int start =1;
for(int i=0;i<n;i++){
  if(i % 2 == 0) start =1;
  else start = 0;
  for(int j=0;j<=i;j++){
    cout<<start;
    start = 1-start;
  }
  cout<<endl;
}
}
void pattern12(int n){
int space = 2*(n-1);
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    cout<<j;
    
  }
  for(int j = 1;j<=space;j++){
    cout<<" ";
  }
  for(int i=1;i>=1;j--){
    cout<<j;
  }
  cout<<endl;
  space -=2;
}
}
void pattern13(int n){
int num = 1;
for(int i=0;i<n;i++){
  for(int j=0;j<=i;j++){
    cout<<num;
    num+=1;
  }
  cout<<endl;
}
}
void pattern14(int n){

}

void pattern15(int n){

}
void pattern16(int n){
  
}


int main() {
    int n =5;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    
    return 0;
}