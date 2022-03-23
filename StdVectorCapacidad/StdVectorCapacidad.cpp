#if 0
#include <iostream>
int main()
{
	
	
	int* array{ new int[10] { 1, 2, 3, 4, 5 } };
	
	
	

}


#include <vector>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
    std::vector<int> array{ 0, 1, 2 };
    array.resize(5); // configura tamaño a 5

    std::cout << "El tamaño es: " << array.size() << '\n';

    for (auto elemento : array)
        std::cout << elemento << ' ';

    return 0;
};




#include <vector>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
    std::vector<int> array{ 0, 1, 2 };
    array.resize(5); // configura tamaño a 5

    std::cout << "El tamaño es: " << array.size() << '\n';
    std::cout << "La capacidad es: " << array.capacity() << '\n';
}



#include <vector>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
    std::vector<int> array{};
    array = { 0, 1, 2, 3, 4 }; // correcto, tamaño array = 5
    std::cout << "tamaño: " << array.size() << "  capacidad: " << array.capacity() << '\n';

    array = { 9, 8, 7 }; // correcto, tamaño array es ahora 3
    std::cout << "tamaño: " << array.size() << "  capacidad: " << array.capacity() << '\n';

    return 0;
}




#include <iostream>
#include <vector>

void imprimirStack(const std::vector<int>& stack)
{
	for (auto elemento : stack)
		std::cout << elemento << ' ';
	std::cout << "(cap " << stack.capacity() << " tamanho " << stack.size() << ")\n";
}

int main()
{
	std::vector<int> stack{};

	stack.reserve(5); // Configura la capacidad a (al menos) 5

	imprimirStack(stack);

	stack.push_back(5); // push_back() coloca un elemento en el stack
	imprimirStack(stack);

	stack.push_back(3);
	imprimirStack(stack);

	stack.push_back(2);
	imprimirStack(stack);

	std::cout << "superior: " << stack.back() << '\n'; // back() devuelve el elemento superior

	stack.pop_back(); // pop_back() quita un elemento del stack
	imprimirStack(stack);

	stack.pop_back();
	imprimirStack(stack);

	stack.pop_back();
	imprimirStack(stack);

	return 0;
}





#include <vector>
#include <iostream>

void printStack(const std::vector<int>& stack)
{
	for (auto element : stack)
		std::cout << element << ' ';
	std::cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}


#endif


#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v{ 0, 1, 2, 3, 4 };
	std::cout << "size: " << v.size() << "  cap: " << v.capacity() << '\n';

	v.push_back(5); // añadir otro elemento
	std::cout << "size: " << v.size() << "  cap: " << v.capacity() << '\n';

	return 0;
}



