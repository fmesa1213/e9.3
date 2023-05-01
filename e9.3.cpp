#include<iostream>

using namespace std;

class Circuit{
	int s1;
	int s2;
	int lamp;

public:
	Circuit(){
		s1=0;
		s2=0;
		lamp=0;
	}
	
	int get_first_switch_state(){
		return s1;
	}
	
	int get_second_switch_state(){
		return s2;
	}
	
	int get_lamp_state(){
		return lamp;
	}
	
	void toggle_first_switch(){
		s1=(s1==1?0:1);
		lamp=(lamp==1?0:1);
	}
	
	void toggle_second_switch(){
		s2=(s2==1?0:1);
		lamp=(lamp==1?0:1);
	}
	
	void display_states(){
		string s1state = (s1==0) ? "down": "up";
		string s2state = (s2==0) ? "down": "up";
		string lstate = (lamp==0) ? "off": "on";
		cout<<"Switch1: "<<s1state<<endl;
		cout<<"Switch2: "<<s2state<<endl;
		cout<<"Lamp: "<<lstate<<endl;
		cout<<endl;
	}
};

int main(){
	Circuit c;
	c.display_states();
	c.toggle_first_switch();
	c.display_states();
	c.toggle_second_switch();
	c.display_states();
	return 0;
}
