#include<iostream>
#include<string>


/*
Menu Principal

1. Gesti�n de Pacientes
2. Gesti�n de M�dicos
3. Gesti�n de Citas
4. Gesti�n de Habitaciones
5. Generar Reportes
6. Salir

*/

/*
1.Gesti�n pacientes

1. Registrar nuevo paciente
2. Buscar paciente
3. Actualizar informaci�n del paciente
4. Eliminar paciente
5. Volver al men� principal

*/


/*
2. Gestion de Medicos

1. Registrar nuevo m�dico
2. Buscar m�dico por ID
3. Actualizar informaci�n de un m�dico
4. Eliminar m�dico
5. Ver listado de m�dicos
6. Volver al men� principal

*/

/*

3.Gestion de citas

1. Programar nueva cita
2. Buscar citas por paciente
3. Buscar citas por m�dico
4. Actualizar estado de una cita
5. Volver al men� principal

*/

/*

4. Gestion de Habitacion

1. Registrar nueva habitaci�n
2. Asignar habitaci�n a paciente
3. Liberar habitaci�n
4. Buscar habitaci�n por n�mero
5. Ver listado de habitaciones
6. Volver al men� principal

*/

/*

5.Reportes

1. Listado de pacientes registrados
2. Listado de m�dicos registrados
3. Estad�sticas de ocupaci�n de habitaciones
4. Reporte de citas por d�a
5. Volver al men� principal

*/

#include<iostream>
#include<string>

const int ANIO_ACTUAL = 2025;

//clase basica abstracta
class Persona {
	private:
		std::string nombre;
		int edad;
		std::string direccion;
		int anioNacimiento;
	public:
		Persona(const std::string& nombre, const std::string& direccion, int anioNacimiento) {
			this->nombre = nombre;
			this->direccion = direccion;
			this->anioNacimiento = anioNacimiento;

			this->calcularEdad();
		}

			
		//metodo para calcular la edad de la persona 
		void calcularEdad() {
			this->edad = ANIO_ACTUAL - this->anioNacimiento;
		}

		//metodo abstracto para mostrar historial
		virtual void mostrarHistorial()const = 0;  //metodo puro

		virtual void mostrarInformacion()const {

			std::cout << "Nombre: " << this->nombre << "\n";
			std::cout << "Edad: " << this->edad << "\n";
			std::cout << "Direccion: " << this->direccion<<"\n";
		}
};
