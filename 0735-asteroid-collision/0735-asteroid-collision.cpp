class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;

        for (auto asteroid : asteroids) {
            // 1. Mientras haya choque y el de la pila sea más pequeño, lo destruyo
            while (!stack.empty() && stack.back() > 0 && asteroid < 0
                   && stack.back() + asteroid < 0) {
                stack.pop_back();
            }

            // 2. Al salir del while solo quedan tres casos
            if (stack.empty() || stack.back() < 0 || asteroid > 0) {
                stack.push_back(asteroid);       // no hay choque: entra
            } else if (stack.back() + asteroid == 0) {
                stack.pop_back();                // iguales: mueren los dos
            }
            // si no, el de la pila es más grande: el nuevo muere y no se hace nada
        }
        return stack;
    }
};