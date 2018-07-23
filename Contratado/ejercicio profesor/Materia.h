using namespace std;
class Materia{
	int codigo;
	string nombre;
	public:
		Materia(){
		}
		Materia(int codigo,string nombre){
			this->codigo=codigo;
			this->nombre=nombre;
			
		}
		int getCodigo(){return codigo;}
		string getCodigo(){return nombre;}
		
		void setCodigo(int codigo){this->codigo=codigo;}
		void setNombre(string nombre){this->nombre=nombre;}
		
		void ingresar();
		void imprimir();
	}
	
void Materia::ingresar(){
	cout<<"----Datos de la materia---"<<endl;
	cout<<"----Codigo---"; cin>>codigo;
	cout<<"----Nombre---";cin>>nombre;
	
}

void Materia::imprimir(){
		cout<<"---- Materia---"<<endl;
	cout<<"----Codigo---"<<codigo<<endl;
	cout<<"----Nombre---"<<nombre<<endl;
}
