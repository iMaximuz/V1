cbuffer MatrixBuffer
{
	matrix projectionViewWorldMatrix;
	float4 ColorMaterial;
};

struct VertexInputType
{
    float4 position : POSITION;
    float4 color : COLOR;
};

struct PixelInputType
{
    float4 position : SV_POSITION;
    float4 color : COLOR;
};

PixelInputType BasicVertexShader(VertexInputType input)
{
    PixelInputType output;
    

	// Change the position vector to be 4 units for proper matrix calculations.
    input.position.w = 1.0f;

	// Calculate the position of the vertex against the world, view, and projection matrices.
	output.position = mul(input.position, projectionViewWorldMatrix);
    
	// Store the input color for the pixel shader to use.
    output.color = ColorMaterial;
    
    return output;
}