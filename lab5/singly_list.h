#pragma once
#include <string>
#include "Form1.h"
using namespace System::Windows::Forms;

template <typename T>
struct Node
{
	T val; // Значение в списке
	Node* next; // Указатель на следующий узел
	Node(T _val) : val(_val), next(nullptr){}; // Инициализация введенных данных 
};

template <typename T>
class list
{
public:
		Node<T> *first; // Первый узел списка
		Node<T> *last; // Последний узел списка

		list() : first(nullptr), last(nullptr) {} // Конструктор по умолчанию

		bool is_empty() { // Есть ли элементы в списке
			return first == nullptr;
		}

		void list_create(T *A, int count) { // Формирование списка
			for (int i=0; i<count; i++) 
			{
				Node<T> *p = new Node<T>(A[i]);
				if (this->is_empty())
				{
					first = p;
					last = p;
				}
				else {
					last->next = p;
					last = p;
				}
			}
		}

		void push_index(T _val, int index) { // Добавление элемента по индексу
			int count = 2;
			Node<T> *previous = first; // Предыдущий узел
			Node<T> *p = new Node<T>(_val); // Узел
			while(count != index)
			{
				previous = previous->next;
				count++;	
			}
			Node<T> *second = previous->next; // Последующий за заданным узлом
			previous->next = p;
			p->next = second;
		}

		void pull_index(int index) { // Удаление элемента по индексу
			int count = 2;
			Node<T> *previous = first; // Предыдущий узел
			while(count != index)
			{
				previous = previous->next;
				count++;	
			}
			Node<T> *e = previous->next->next; // Последующий за заданным узлом
			free(previous->next);
			previous->next = e;

		}

		void push_first(T _val) { // Добавление в начало списка
			Node<T> *p = new Node<T>(_val);
			if (is_empty()) {
				first = p; // Указатель на первый элемент в списке
				last = p;
				return;
			}
			p->next = first; // Введенный узел указывает на теперь уже 2-ой узел
			first = p; // Введенный узел теперь первый
		}

		void pull_first() { // Удаление первого узла списка
			if (is_empty()) {
				first = nullptr; // Указатель на первый элемент в списке
				last = nullptr;
				return;
			}
			Node<T> *p = first->next; // Указатель на следующий узел за first
			free(first); // Удаление указателя на first
			first = p; // Указатель на первый узел 
		}

		void clear_list() // Очистка всего списка
		{
			while(!this->is_empty())
			{
				Node<T> *p = first->next; // Указатель на следующий узел
				free(first); // Удаление первого узла
				first = p; // Указатель на 2-ой узел
			}
		}

		void print(T *A) { // Вывод списка на экран
			if (is_empty()) return;
			Node<T> *elem = first;
			
			for (int i=0;elem != nullptr; i++)
			{
				A[i] = elem->val;
				elem = elem->next;
			}
		}
};
list <int> branchI;
list <double> branchD;
list <char> branchC;
list <std::string> branchS;
int countI = 0; // Количетсво узлов
int countD = 0; // Количетсво узлов
int countC = 0; // Количетсво узлов
int countS = 0; // Количетсво узлов

