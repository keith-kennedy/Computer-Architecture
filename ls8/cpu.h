#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu {
  // TODO
  // PC
  unsigned char PC;
  // registers (array)
  unsigned char registers[8];
  // ram (array)
  unsigned char ram[256];

};

// ALU operations
enum alu_op {
	  ALU_ADD,
  	ALU_SUB,
	  ALU_MUL,
  	ALU_DIV
	// Add more here
};

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define LDI  0b10000010 //<- this is 130
// TODO: more instructions here. These can be used in cpu_run().
#define ADD  0b10100000 //<- this is 160
// Function declarations

extern void cpu_load(struct cpu *cpu);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif
