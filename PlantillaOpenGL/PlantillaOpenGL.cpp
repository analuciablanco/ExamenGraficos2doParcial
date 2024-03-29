// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"
#include "Modelo.h"

using namespace std;

Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *triangulo;
Modelo *cuadrado;

Modelo *cuerpoBlinky;
Modelo *ojoIzqBlinky;
Modelo *ojoDerBlinky;

float rCuerpo = 1.0,
	gCuerpo = 0.0,
	bCuerpo = 0.0;

float rOjos = 1.0, 
	gOjos = 1.0,
	bOjos = 1.0;

void inicializarBlinky() {

#pragma region Cuerpo
	cuerpoBlinky = new Modelo();

	Vertice v1_1 = {
		vec3(-0.2,0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v1_2 = {
		vec3(-0.2,0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v1_3 = {
		vec3(0.2,0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v1_4 = {
		vec3(0.2,0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	
	cuerpoBlinky->vertices.push_back(v1_1);
	cuerpoBlinky->vertices.push_back(v1_2);
	cuerpoBlinky->vertices.push_back(v1_3);
	cuerpoBlinky->vertices.push_back(v1_4);

	Vertice v2_1 = {
		vec3(-0.4,0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v2_2 = {
		vec3(-0.4,0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v2_3 = {
		vec3(0.4,0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v2_4 = {
		vec3(0.4,0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v2_1);
	cuerpoBlinky->vertices.push_back(v2_2);
	cuerpoBlinky->vertices.push_back(v2_3);
	cuerpoBlinky->vertices.push_back(v2_4);

	Vertice v3_1 = {
		vec3(-0.5,0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v3_2 = {
		vec3(-0.5,0.4,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v3_3 = {
		vec3(0.5,0.4,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v3_4 = {
		vec3(0.5,0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v3_1);
	cuerpoBlinky->vertices.push_back(v3_2);
	cuerpoBlinky->vertices.push_back(v3_3);
	cuerpoBlinky->vertices.push_back(v3_4);

	Vertice v4_1 = {
		vec3(-0.6,0.4,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v4_2 = {
		vec3(-0.6,0.1,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v4_3 = {
		vec3(0.6,0.1,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v4_4 = {
		vec3(0.6,0.4,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v4_1);
	cuerpoBlinky->vertices.push_back(v4_2);
	cuerpoBlinky->vertices.push_back(v4_3);
	cuerpoBlinky->vertices.push_back(v4_4);

	Vertice v5_1 = {
		vec3(-0.7,0.1,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v5_2 = {
		vec3(-0.7,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v5_3 = {
		vec3(0.7,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v5_4 = {
		vec3(0.7,0.1,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v5_1);
	cuerpoBlinky->vertices.push_back(v5_2);
	cuerpoBlinky->vertices.push_back(v5_3);
	cuerpoBlinky->vertices.push_back(v5_4);

	Vertice v6_1 = {
		vec3(-0.7,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v6_2 = {
		vec3(-0.7,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v6_3 = {
		vec3(-0.5,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v6_4 = {
		vec3(-0.5,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v6_1);
	cuerpoBlinky->vertices.push_back(v6_2);
	cuerpoBlinky->vertices.push_back(v6_3);
	cuerpoBlinky->vertices.push_back(v6_4);

	Vertice v7_1 = {
		vec3(-0.7,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v7_2 = {
		vec3(-0.7,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v7_3 = {
		vec3(-0.6,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v7_4 = {
		vec3(-0.6,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v7_1);
	cuerpoBlinky->vertices.push_back(v7_2);
	cuerpoBlinky->vertices.push_back(v7_3);
	cuerpoBlinky->vertices.push_back(v7_4);

	Vertice v8_1 = {
		vec3(-0.4,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v8_2 = {
		vec3(-0.4,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v8_3 = {
		vec3(-0.3,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v8_4 = {
		vec3(-0.3,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v8_1);
	cuerpoBlinky->vertices.push_back(v8_2);
	cuerpoBlinky->vertices.push_back(v8_3);
	cuerpoBlinky->vertices.push_back(v8_4);

	Vertice v9_1 = {
		vec3(-0.3,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v9_2 = {
		vec3(-0.3,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v9_3 = {
		vec3(-0.1,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v9_4 = {
		vec3(-0.1,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v9_1);
	cuerpoBlinky->vertices.push_back(v9_2);
	cuerpoBlinky->vertices.push_back(v9_3);
	cuerpoBlinky->vertices.push_back(v9_4);

	Vertice v10_1 = {
		vec3(0.3,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v10_2 = {
		vec3(0.3,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v10_3 = {
		vec3(0.1,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v10_4 = {
		vec3(0.1,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v10_1);
	cuerpoBlinky->vertices.push_back(v10_2);
	cuerpoBlinky->vertices.push_back(v10_3);
	cuerpoBlinky->vertices.push_back(v10_4);

	Vertice v11_1 = {
		vec3(0.4,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v11_2 = {
		vec3(0.4,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v11_3 = {
		vec3(0.3,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v11_4 = {
		vec3(0.3,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v11_1);
	cuerpoBlinky->vertices.push_back(v11_2);
	cuerpoBlinky->vertices.push_back(v11_3);
	cuerpoBlinky->vertices.push_back(v11_4);

	Vertice v12_1 = {
		vec3(0.7,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v12_2 = {
		vec3(0.7,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v12_3 = {
		vec3(0.5,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v12_4 = {
		vec3(0.5,-0.5,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v12_1);
	cuerpoBlinky->vertices.push_back(v12_2);
	cuerpoBlinky->vertices.push_back(v12_3);
	cuerpoBlinky->vertices.push_back(v12_4);

	Vertice v13_1 = {
		vec3(0.7,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v13_2 = {
		vec3(0.7,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v13_3 = {
		vec3(0.6,-0.7,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};
	Vertice v13_4 = {
		vec3(0.6,-0.6,0.0),
		vec4(rCuerpo,gCuerpo,bCuerpo,1.0)
	};

	cuerpoBlinky->vertices.push_back(v13_1);
	cuerpoBlinky->vertices.push_back(v13_2);
	cuerpoBlinky->vertices.push_back(v13_3);
	cuerpoBlinky->vertices.push_back(v13_4);
#pragma endregion

#pragma region Ojos

#pragma endregion
	ojoDerBlinky = new Modelo();

	Vertice v1 = {
		vec3(-0.3,0.4,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v2 = {
		vec3(-0.3,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v3 = {
		vec3(-0.1,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v4 = {
		vec3(-0.1,0.4,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoDerBlinky->vertices.push_back(v1);
	ojoDerBlinky->vertices.push_back(v2);
	ojoDerBlinky->vertices.push_back(v3);
	ojoDerBlinky->vertices.push_back(v4);

	Vertice v5 = {
		vec3(-0.4,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v6 = {
		vec3(-0.4,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v7 = {
		vec3(0.0,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v8 = {
		vec3(0.0,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoDerBlinky->vertices.push_back(v5);
	ojoDerBlinky->vertices.push_back(v6);
	ojoDerBlinky->vertices.push_back(v7);
	ojoDerBlinky->vertices.push_back(v8);

	Vertice v9 = {
		vec3(-0.3,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v10 = {
		vec3(-0.3,-0.1,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v11 = {
		vec3(-0.1,-0.1,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v12 = {
		vec3(-0.1,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoDerBlinky->vertices.push_back(v9);
	ojoDerBlinky->vertices.push_back(v10);
	ojoDerBlinky->vertices.push_back(v11);
	ojoDerBlinky->vertices.push_back(v12);

	Vertice v13 = {
		vec3(-0.2,0.2,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v14 = {
		vec3(-0.2,0.0,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v15 = {
		vec3(0.0,0.0,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v16 = {
		vec3(0.0,0.2,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};

	ojoDerBlinky->vertices.push_back(v13);
	ojoDerBlinky->vertices.push_back(v14);
	ojoDerBlinky->vertices.push_back(v15);
	ojoDerBlinky->vertices.push_back(v16);

	ojoIzqBlinky = new Modelo();

	Vertice v17 = {
		vec3(0.3,0.4,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v18 = {
		vec3(0.3,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v19 = {
		vec3(0.5,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v20 = {
		vec3(0.5,0.4,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoIzqBlinky->vertices.push_back(v17);
	ojoIzqBlinky->vertices.push_back(v18);
	ojoIzqBlinky->vertices.push_back(v19);
	ojoIzqBlinky->vertices.push_back(v20);

	Vertice v21 = {
		vec3(0.2,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v22 = {
		vec3(0.2,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v23 = {
		vec3(0.6,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v24 = {
		vec3(0.6,0.3,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoDerBlinky->vertices.push_back(v21);
	ojoDerBlinky->vertices.push_back(v22);
	ojoDerBlinky->vertices.push_back(v23);
	ojoDerBlinky->vertices.push_back(v24);

	Vertice v25 = {
		vec3(0.3,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v26 = {
		vec3(0.3,-0.1,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v27 = {
		vec3(0.5,-0.1,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};
	Vertice v28 = {
		vec3(0.5,0.0,0.0),
		vec4(rOjos,gOjos,bOjos,1.0)
	};

	ojoDerBlinky->vertices.push_back(v25);
	ojoDerBlinky->vertices.push_back(v26);
	ojoDerBlinky->vertices.push_back(v27);
	ojoDerBlinky->vertices.push_back(v28);

	Vertice v29 = {
		vec3(0.4,0.2,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v30 = {
		vec3(0.4,0.0,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v31 = {
		vec3(0.6,0.0,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};
	Vertice v32 = {
		vec3(0.6,0.2,0.0),
		vec4(0.0,0.0,0.8,1.0)
	};

	ojoDerBlinky->vertices.push_back(v29);
	ojoDerBlinky->vertices.push_back(v30);
	ojoDerBlinky->vertices.push_back(v31);
	ojoDerBlinky->vertices.push_back(v32);
}

void dibujar() {
	cuerpoBlinky->dibujar(GL_QUADS);
	ojoDerBlinky->dibujar(GL_QUADS);
	ojoIzqBlinky->dibujar(GL_QUADS);
}

void actualizar() {

}

int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window =
		glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << 
			glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL =
		glGetString(GL_VERSION);
	cout << "Version OpenGL: "
		<< versionGL;

	//inicializarTriangulo();
	//inicializarCuadrado();
	inicializarBlinky();

	const char *rutaVertex = 
		"VertexShader.shader";
	const char *rutaFragment = 
		"FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();

	// AQUÍ MANDAMOS LLAMAR LOS SHADERS Y VERTEX ARRAY DE LOS OBJETOS //

		// CUERPO BLINKY
		// Establecer shader al modelo:
		cuerpoBlinky->shader = shader;
		//Inicializar vertex array:
		cuerpoBlinky->inicializarVertexArray(posicionID, colorID);

		// OJOS BLINKY
		// Establecer shader al modelo:
		ojoDerBlinky->shader = shader;
		//Inicializar vertex array:
		ojoDerBlinky->inicializarVertexArray(posicionID, colorID);
		// Establecer shader al modelo:
		ojoIzqBlinky->shader = shader;
		//Inicializar vertex array:
		ojoIzqBlinky->inicializarVertexArray(posicionID, colorID);

	// FIN DE: AQUÍ MANDAMOS LLAMAR LOS SHADERS Y VERTEX ARRAY DE LOS OBJETOS //

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(0, 0, 0, 1);
		//Borramos
		glClear(
			GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}

