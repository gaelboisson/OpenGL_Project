#ifndef SHADER_H    // Évite d'inclure plusieurs fois ce fichier
#define SHADER_H


#include <glad/glad.h> // inclure glad pour disposer de tout en-tête OpenGL
 
class Shader
{
public:
    // L’ID du shader program
    unsigned int ID;

    Shader() = default; // Constructeur par défaut

    // Le constructeur lit et construit le shader
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    // Suppression du programme
    void deleteProgram();
    // Activation du shader
    void use();
};
 
#endif
