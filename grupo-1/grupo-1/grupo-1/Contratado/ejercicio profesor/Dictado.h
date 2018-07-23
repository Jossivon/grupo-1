using namespace std;
class Dictado{
	private:
		string horario;
	Dictado(){
	}
	Dictado(string horario){
		this->horario=horario;
	}
	string getHorario(){return this->horario;
	}
	void setHorario(string horario){
		this->horario=horario;
	}
	void ingresar(){
		cout<<"\n Dictado:"<<endl;
		cout<<"\n Horario";cin>>this->horario;
	}
	void imprimir(){
		cout<<"\n Dictado:"<<endl;
		cout<<"\n Horario"<<this->horario<<endl;	
	}
}
