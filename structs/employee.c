/*
  - write a program that declares a structure and rpints out it's content
   - create an emplyee struct
    - name (char array)
    - ranking (int)
    - salary (float)
 - declare and initialize an instance
 - read in a second one from the console
 - print out employee struct data
*/

#include <stdio.h>
#include <string.h>

struct Employee {
  char name[50];
  int ranking;
  float salary;
};

void printEmployeeData(const struct Employee employee);
struct Employee requestNewEmployeeRecord(void);
struct Employee createEmployee(char* name, int ranking, float salary);

int main(int argc, char const *argv[]) {
  struct Employee first_employe = {"Harry Potter", 2092021, (float)1000000000};


  printEmployeeData(first_employe);
  requestNewEmployeeRecord();
  return 0;
}

void printEmployeeData(const struct Employee employee) {
  printf("Employee Data:\n name: %s\n ranking: %d\n salary: $%f\n",
          employee.name,
          employee.ranking,
          employee.salary);
}

struct Employee requestNewEmployeeRecord(void) {
  char new_name[50];
  int ranking;
  float salary;

  printf("Creating New Employee Record:\n\nPlease enter employee name >");
  scanf("%s", new_name);
  printf("Please enter employee ranking >");
  scanf("%d", &ranking);
  printf("Please enter employee salary >");
  scanf("%f", &salary);

  struct Employee new_employee = createEmployee(new_name, ranking, salary);

  printf("\nCreated New Employee Record!\n\n");
  printEmployeeData(new_employee);
  return new_employee;
}

struct Employee createEmployee(char* name, int ranking, float salary) {
  struct Employee new_employee;
  int name_char_idx = 0;

  while(name_char_idx < 50 && *name) {
    new_employee.name[name_char_idx] = *name;
    name++;
    name_char_idx++;
  }
  new_employee.ranking = ranking;
  new_employee.salary = salary;

  return new_employee;
}
