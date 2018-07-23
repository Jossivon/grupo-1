using namespace std;

class Titular: public Profesor{
	int anio_servicio;
	
	public:
		Titular(){}
		Titular(int codigo, string nombre, string apeliidos,
		string direccion,int anio_servicio):Profesor(codigo,
		nombre,apellido,direccion){
			this->anio_servicio=anio_servicio;
		}
		
		void setAnio_servicio(int anio_servicio){
			this->anio_servicio=anio_servicio;
		}
		int getAnio_servicio(){
			return anio_servicio;
		}
		void ingresar();
		void mostrar();
};

void Titular::ingresar(){
	cout<<"INGRESAR DATOS DEL TITULAR"<<endl;
	int codigo;
	string nombre,apellido,direccion;
	cout<<"\nCodigo: "; cin>>codigo;
	cout<<"\nNombre: "; cin>>nombre;
	cout<<"\nApellido: "; cin>>apellido;
	cout<<"\nDireccion: "; cin>>direccion;
	cout<<"\nAnios de servicio: "; cin>>anio_servicio;
	
	this->setCodigo(codigo);
	this->setNombre(nombre);
	this->setApellidoo(apellido);
	this->setDireccion(direccion);
}

void Titular::mostrar(){
	cout<<"DATOS DEL TITULAR"<<endl;
	cout<<"\nCodigo: "<<this->getCodigo();
	cout<<"\nNombre: "<<this->getNombre();
	cout<<"\nApellido: "<<this->getpellido();
	cout<<"\nDireccion: "<<this->getDireccion();
	cout<<"\nAnios de servicio: "; cin>>anio_servicio;
}
