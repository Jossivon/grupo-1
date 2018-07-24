using namespace std;
class Dictado{
	private:
		string horario;
		
	public: 
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
		cout<<"\n Horario";cin>>horario;
	}
	void imprimir(){
		cout<<"\n Dictado:"<<endl;
		cout<<"\n Horario"<<horario<<endl;	
	}
}
