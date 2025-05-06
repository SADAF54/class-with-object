#include<iostream>
using namespace std;
class animal{
	public:
		string type;
		char opt;
	void input(){
		cout<<"enter the type:"<<endl;
	    cin>>type;
	    cout<<"is animal lay eggs"<<endl;
	    cout<<"enter the hint:"<<endl;
	    cin>>opt;
}
    void check(){
    	switch(opt){
    		case 'y':
    			cout<<"this animal is called non mammal:"<<endl;
    			break;
    		case 'Y':
    			cout<<"this animal is called non mammal:"<<endl;
    			break;
			case 'N':
    			cout<<"this animal is called mammal:"<<endl;
    			break;
    		case 'n':
    			cout<<"this animal is called mammal:"<<endl;
    			break;
    		default:
    			cout<<"this animal is extinct from mammal:";
    			break;
		}	
	}
	};
int main(){
	animal a1;
	a1.input();
	a1.check();
	return 0;
}
