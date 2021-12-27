#pragma once
#include <string>
#include "Form1.h"
using namespace System::Windows::Forms;

template <typename T>
struct Node
{
	T val; // �������� � ������
	Node* next; // ��������� �� ��������� ����
	Node(T _val) : val(_val), next(nullptr){}; // ������������� ��������� ������ 
};

template <typename T>
class list
{
public:
		Node<T> *first; // ������ ���� ������
		Node<T> *last; // ��������� ���� ������

		list() : first(nullptr), last(nullptr) {} // ����������� �� ���������

		bool is_empty() { // ���� �� �������� � ������
			return first == nullptr;
		}

		void list_create(T *A, int count) { // ������������ ������
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

		void push_index(T _val, int index) { // ���������� �������� �� �������
			int count = 2;
			Node<T> *previous = first; // ���������� ����
			Node<T> *p = new Node<T>(_val); // ����
			while(count != index)
			{
				previous = previous->next;
				count++;	
			}
			Node<T> *second = previous->next; // ����������� �� �������� �����
			previous->next = p;
			p->next = second;
		}

		void pull_index(int index) { // �������� �������� �� �������
			int count = 2;
			Node<T> *previous = first; // ���������� ����
			while(count != index)
			{
				previous = previous->next;
				count++;	
			}
			Node<T> *e = previous->next->next; // ����������� �� �������� �����
			free(previous->next);
			previous->next = e;

		}

		void push_first(T _val) { // ���������� � ������ ������
			Node<T> *p = new Node<T>(_val);
			if (is_empty()) {
				first = p; // ��������� �� ������ ������� � ������
				last = p;
				return;
			}
			p->next = first; // ��������� ���� ��������� �� ������ ��� 2-�� ����
			first = p; // ��������� ���� ������ ������
		}

		void pull_first() { // �������� ������� ���� ������
			if (is_empty()) {
				first = nullptr; // ��������� �� ������ ������� � ������
				last = nullptr;
				return;
			}
			Node<T> *p = first->next; // ��������� �� ��������� ���� �� first
			free(first); // �������� ��������� �� first
			first = p; // ��������� �� ������ ���� 
		}

		void clear_list() // ������� ����� ������
		{
			while(!this->is_empty())
			{
				Node<T> *p = first->next; // ��������� �� ��������� ����
				free(first); // �������� ������� ����
				first = p; // ��������� �� 2-�� ����
			}
		}

		void print(T *A) { // ����� ������ �� �����
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
int countI = 0; // ���������� �����
int countD = 0; // ���������� �����
int countC = 0; // ���������� �����
int countS = 0; // ���������� �����

