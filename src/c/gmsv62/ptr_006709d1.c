/* ptr_006709d1 - 0x006709d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006709d1(int param_1,uint param_2)

{
  *(short *)(param_1 + 0xc) = (short)((ulonglong)param_2 / 1000);
  return;
}


