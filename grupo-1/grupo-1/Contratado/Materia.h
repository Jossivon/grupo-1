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
};
