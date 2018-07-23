using namespace std;

class Contrtado: public Profesor{
	string fecha_inicio,fecha_contrato;
	
	public:
		Contrtado(){}
		Contrtador(int codigo, string nombre, string apeliidos,
		string direccion,string fecha_inicio,string fecha_contrato):Profesor(codigo,
		nombre,apellido,direccion){
			this->fecha_inicio=fecha_inicio;
			this->fecha_contrato=fecha_contrato;
		}
		
		string getFecha_inicio(){return this->fecha_inicio;		}
		string getFecha_contrato(){return this->fecha_contrato;		}
		void setFecha_inicio(string fecha_inicio){ this->fecha_inicio=fecha_inicio;		}
		void setFecha_contrato(string fecha_contrato){ this->fecha_contrato=fecha_contrato;		}
		void ingresar();
		void mostrar();
};

void Contrato::ingresar(){
	cout<<"INGRESAR DATOS DEL TITULAR"<<endl;
	int codigo;
	string nombre,apellido,direccion;
	cout<<"\nCodigo: "; cin>>codigo;
	cout<<"\nNombre: "; cin>>nombre;
	cout<<"\nApellido: "; cin>>apellido;
	cout<<"\nDireccion: "; cin>>direccion;
	cout<<"\nAnios de servicio: "; cin>>fecha_contrato;
	
	this->setCodigo(codigo);
	this->setNombre(nombre);
	this->setApellidoo(apellido);
	this->setDireccion(direccion);
}

void Contrato::mostrar(){
	cout<<"DATOS DEL TITULAR"<<endl;
	cout<<"\nCodigo: "<<this->getCodigo();
	cout<<"\nNombre: "<<this->getNombre();
	cout<<"\nApellido: "<<this->getpellido();
	cout<<"\nDireccion: "<<this->getDireccion();
	cout<<"\nAnios de servicio: "; <<fecha_contrato;
}
