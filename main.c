#define in1 11
#define in2 10 
#define in3 9 
#define in4 8

void forward();
void backward();
void left();
void rigth();
void stop();


void setup (){
  
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT); 
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
  
}

void loop(){
	forward();
  	delay(5000);
  	backward();
  	delay(5000);
  	left();
  	delay(5000);
  	right();
  	delay(5000);
  	stop();
  	delay(5000);
}

void forward(){
  //motor direito
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  
  //motor esquerdo
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void backward(){
  //motor direito
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  
  //motor esquerdo
  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}

void left(){
  //motor direito
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  
  //motor esquerdo
  digitalWrite (in3, LOW);
  digitalWrite (in4, LOW);
}

void right(){
  //motor direito
  digitalWrite (in1, LOW);
  digitalWrite (in2, LOW);
  
  //motor esquerdo
  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}

void stop(){
  //motor direito
  digitalWrite (in1, LOW);
  digitalWrite (in2, LOW);
  
  //motor esquerdo
  digitalWrite (in3, LOW);
  digitalWrite (in4, LOW);
}