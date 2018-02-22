// stdafx.h: archivo de inclusión de los archivos de inclusión estándar del sistema
// o archivos de inclusión específicos de un proyecto utilizados frecuentemente,
// pero rara vez modificados
//

#pragma once
#define Error(e) __FUNCTION__ " " e

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Excluir material rara vez utilizado de encabezados de Windows
// Archivos de encabezado de Windows:
#include <windows.h>

// Archivos de encabezado en tiempo de ejecución de C
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: mencionar aquí los encabezados adicionales que el programa necesita
#include <d3d11.h>
#include <directxmath.h>
#include <d3dcompiler.h>
#include <fstream>
#include <ctime>
#include <string>
#include <map>

//Videojuegos 1 Librerias
#include "SpecsDx.h"
#include "DxComponent.h"
#include "GameManager.h"
#include "EntityManager.h"
#include "Scene.h"
#include "Camera3D.h"
#include "Mesh3D.h"
#include "ShaderClass.h"
#include "Behaviour.h"
using namespace DirectX;
using namespace std;
