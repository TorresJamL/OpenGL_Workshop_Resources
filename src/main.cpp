#include <iostream>

#include <glad.h>
#include <GLFW/glfw3.h>

using namespace std;

// GLOBALS
float width = 800.0f;
float height = 600.0f;
float aspect = width / height;

void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    glViewport(0, 0, width, height);
    aspect = (float)width / (float)height;
}

void processInput(GLFWwindow *window){
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) 
        glfwSetWindowShouldClose(window, true);
}

int main(){
    cout << "Hello, World!" << endl;
    
    GLFWwindow* window;

    if (!glfwInit()){
        cout << "GLFW failed to start." << endl;
        return -1;
    }
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    window = glfwCreateWindow(800, 600, "My Window", NULL, NULL);
    if (window == NULL){
        cout << "Failed to create window." << endl;
        glfwTerminate();
        return -1;   
    }
    
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){ 
        cout << "GLAD failed to initialize." << endl;
        return -1;
    }
    
    glViewport(0, 0, 800, 600);

    /**
     * Workshop Implementations Start Here!
     */






    cout << "Beginning render loop." << endl;

    while (!glfwWindowShouldClose(window)){
        processInput(window);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    cout << "The End!" << endl;
    return 0;
}