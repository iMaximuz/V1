// stdafx.h: archivo de inclusión de los archivos de inclusión estándar del sistema
// o archivos de inclusión específicos de un proyecto utilizados frecuentemente,
// pero rara vez modificados
//

#pragma once
#define ErrorFnc(e) __FUNCTION__ " " e

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
#include <vector>
#include <wrl.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm> 

//Videojuegos 1 Librerias
#include "SpecsDx.h"
#include "DxComponent.h"
#include "BufferTypes.h"
#include "GameManager.h"
#include "GameObject.h"
#include "ResourceManager.h"
#include "Scene.h"
#include "Camera3D.h"
#include "Mesh3D.h"
#include "ConstantBuffer.h"
#include "Shader.h"
#include "BasicShader.h"
#include "MaterialShader.h"
#include "Behaviour.h"
#include "Vertex.h"
#include "Model.h"
#include "glm/glm.hpp"
#include "RawImage.h"
#include "Texture.h"
#include "Transforms.h"
#include "WICTextureLoader.h"
#include "KeyHandler.h"
#include "Input.h"

using namespace DirectX;
using namespace std;
