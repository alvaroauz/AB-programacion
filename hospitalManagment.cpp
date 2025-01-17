#include<iostream>
#include<string>


/*
Menu Principal

1. Gestión de Pacientes
2. Gestión de Médicos
3. Gestión de Citas
4. Gestión de Habitaciones
5. Generar Reportes
6. Salir

*/

/*
1.Gestión pacientes

1. Registrar nuevo paciente
2. Buscar paciente
3. Actualizar información del paciente
4. Eliminar paciente
5. Volver al menú principal

*/


/*
2. Gestion de Medicos

1. Registrar nuevo médico
2. Buscar médico por ID
3. Actualizar información de un médico
4. Eliminar médico
5. Ver listado de médicos
6. Volver al menú principal

*/

/*

3.Gestion de citas

1. Programar nueva cita
2. Buscar citas por paciente
3. Buscar citas por médico
4. Actualizar estado de una cita
5. Volver al menú principal

*/

/*

4. Gestion de Habitacion

1. Registrar nueva habitación
2. Asignar habitación a paciente
3. Liberar habitación
4. Buscar habitación por número
5. Ver listado de habitaciones
6. Volver al menú principal

*/

/*

5.Reportes

1. Listado de pacientes registrados
2. Listado de médicos registrados
3. Estadísticas de ocupación de habitaciones
4. Reporte de citas por día
5. Volver al menú principal

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
