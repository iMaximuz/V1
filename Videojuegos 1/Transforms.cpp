#include "stdafx.h"
#include "Transforms.h"
Transforms::Transforms()
{
	this->esc = { 1,1,1 };
	this->rot = { 0, 0, 0 };
	this->tran = { 0, 0, 0 };
}

Transforms::Transforms(vec3 esc, vec3 rot, vec3 tran)
{
	this->esc = esc;
	this->rot = rot;
	this->tran = tran;
}

Transforms::~Transforms() {}

void Transforms::Scale(vec3 Scale)
{
	this->esc = this->esc + Scale;
}

void Transforms::Rotate(vec3 Rotation)
{
	this->rot = this->rot + Rotation;
}

void Transforms::Translate(vec3 Translation)
{
	this->tran = this->tran + Translation;
}

void Transforms::Identity()
{
	this->tran = vec3(0, 0, 0);
	this->rot = vec3(0, 0, 0);
	this->esc = vec3(0, 0, 0);
}

void Transforms::SetScale(vec3 Scale)
{
	this->esc = Scale;
}

void Transforms::SetRotation(vec3 Rotation)
{
	this->rot = Rotation;
}

void Transforms::SetTranslation(vec3 Translation)
{
	this->tran = Translation;
}

vec3 Transforms::GetScale()
{
	return this->esc;
}

vec3 Transforms::GetRotation()
{
	return this->rot;
}

vec3 Transforms::GetTranslation()
{
	return this->tran;
}

void Transforms::SetTransforms(vec3 Translation, vec3 Rotation, vec3 Scale)
{
	this->tran = Translation;
	this->rot = Rotation;
	this->esc = Scale;
	ToMatrix();
}

void Transforms::ToMatrix(vec3 Scale, vec3 Rotation, vec3 Translation)
{
	TransformMatrix = XMMatrixScaling(Scale.x, Scale.y, Scale.z)* XMMatrixRotationX(Rotation.x) * XMMatrixRotationY(Rotation.y) * XMMatrixRotationX(Rotation.z) * XMMatrixTranslation(Translation.x, Translation.y, Translation.z);
}

XMMATRIX Transforms::ToMatrix()
{
	TransformMatrix = XMMatrixScaling(this->esc.x, this->esc.y, this->esc.z)* XMMatrixRotationX(this->rot.x) * XMMatrixRotationY(this->rot.y) * XMMatrixRotationX(this->rot.z) * XMMatrixTranslation(this->tran.x, this->tran.y, this->tran.z);
	return TransformMatrix;
}

XMMATRIX Transforms::GetMatrix()
{
	return TransformMatrix;
}