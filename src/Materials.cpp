#include "include/Geometry/Materials.h"

Material::Material(matEnum m):
	thisMat(m)
{
	switch (m) {
		case matEnum::EMERALD :
			ambient = glm::vec3(0.0215, 0.1745, 0.0215);
			diffuse = glm::vec3(0.07568, 0.61424, 0.07568);
			specular = glm::vec3(0.633, 0.727811, 0.633);
			shininess = 0.6*128.0;
			break;
		case matEnum::JADE :
			ambient = glm::vec3(0.135,	0.2225,	0.1575);
			diffuse = glm::vec3(0.54,	0.89,	0.63);
			specular = glm::vec3(0.316228,	0.316228,	0.316228);
			shininess = 0.1*128.0;
			break;
		case matEnum::OBSIDIAN:
			ambient = glm::vec3(0.05375,	0.05,	0.06625);
			diffuse = glm::vec3(0.18275,	0.17,	0.22525);
			specular = glm::vec3(0.332741,	0.328634,	0.346435);
			shininess = 0.3*128.0;
			break;
		case matEnum::PEARL:
			ambient = glm::vec3(0.25,	0.20725,	0.20725);
			diffuse = glm::vec3(1,	0.829,	0.829);
			specular = glm::vec3(0.296648,	0.296648,	0.296648);
			shininess = 0.088*128.0;
			break;
		case matEnum::RUBY:
			ambient = glm::vec3(0.1745,	0.01175,	0.01175);
			diffuse = glm::vec3(0.61424,	0.04136,	0.04136);
			specular = glm::vec3(0.727811,	0.626959,	0.626959);
			shininess = 0.6*128.0;
			break;
		case matEnum::TURQUOISE:
			ambient = glm::vec3(0.1,	0.18725,	0.1745);
			diffuse = glm::vec3(0.396,	0.74151,	0.69102);
			specular = glm::vec3(0.297254,	0.30829,	0.306678);
			shininess = 0.1*128.0;
			break;
		case matEnum::BRASS:
			ambient = glm::vec3(0.329412,	0.223529,	0.027451);
			diffuse = glm::vec3(0.780392,	0.568627,	0.113725);
			specular = glm::vec3(0.992157,	0.941176,	0.807843);
			shininess = 0.217*128.0;
			break;
		case matEnum::BRONZE:
			ambient = glm::vec3(0.2125,	0.1275,	0.054);
			diffuse = glm::vec3(0.714,	0.4284,	0.18144);
			specular = glm::vec3(0.393548,	0.271906,	0.166721);
			shininess = 0.2*128.0;
			break;
		case matEnum::CHROME:
			ambient = glm::vec3(0.25,	0.25,	0.25);
			diffuse = glm::vec3(0.4,	0.4,	0.4);
			specular = glm::vec3(0.774597,	0.774597,	0.774597);
			shininess = 0.6*128.0;
			break;
		case matEnum::COPPER:
			ambient = glm::vec3(0.19125,	0.0735,	0.0225);
			diffuse = glm::vec3(0.7038,	0.27048,	0.0828);
			specular = glm::vec3(0.256777,	0.137622,	0.086014);
			shininess = 0.1*128.0;
			break;
		case matEnum::GOLD:
			ambient = glm::vec3(0.24725,	0.1995,	0.0745);
			diffuse = glm::vec3(0.75164	,0.60648,	0.22648);
			specular = glm::vec3(0.628281,	0.555802,	0.366065);
			shininess = 0.4*128.0;
			break;
		case matEnum::SILVER:
			ambient = glm::vec3(0.19225,	0.19225,	0.19225);
			diffuse = glm::vec3(0.50754,	0.50754,	0.50754);
			specular = glm::vec3(0.508273,	0.508273,	0.508273);
			shininess = 0.4*128.0;
			break;
		case matEnum::RED_PLASTIC:
			ambient = glm::vec3(0,0,0);
			diffuse = glm::vec3(0.5,0.0,0.0);
			specular = glm::vec3(0.7,0.6,0.6);
			shininess = 0.25*128.0;
			break;
		case matEnum::GREEN_PLASTIC:
			ambient = glm::vec3(0, 0, 0);
			diffuse = glm::vec3(0.1,	0.35,	0.1);
			specular = glm::vec3(0.45,	0.55,	0.45);
			shininess = 0.25*128.0;
			break;
		case matEnum::CYAN_PLASTIC:
			ambient = glm::vec3(0, 0.1, 0.06);
			diffuse = glm::vec3(0.0,	0.50980392,	0.50980392);
			specular = glm::vec3(0.50196078,	0.50196078,	0.50196078);
			shininess = 0.25*128.0;
			break;
		case matEnum::BLACK_PLASTIC:
			ambient = glm::vec3(0, 0.0, 0.00);
			diffuse = glm::vec3(0.001, 0.01, 0.01);
			specular = glm::vec3(0.50196078, 0.50196078, 0.50196078);
			shininess = 0.25*128.0;
			break;
		case matEnum::WHITE_PLASTIC:
			ambient = glm::vec3(0, 0.0, 0.00);
			diffuse = glm::vec3(0.55,	0.55,	0.55);
			specular = glm::vec3(0.70,	0.70,	0.70);
			shininess = 0.25*128.0;
			break;
		case matEnum::YELLOW_PLASTIC:
			ambient = glm::vec3(0, 0.0, 0.00);
			diffuse = glm::vec3(0.5, 0.5, 0.0);
			specular = glm::vec3(0.60, 0.60, 0.50);
			shininess = 0.25*128.0;
			break;
	}
}

Material::Material() {
	ambient = glm::vec3(0.2, 0.2, 0.2);
	diffuse = glm::vec3(0.5, 0.5, 0.5);
	specular = glm::vec3(0.7, 0.7, 0.7);
	shininess = 32;
}