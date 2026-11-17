/* ptr_0075e875 - 0x0075e875 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0075e875(int *param_1,int param_2,int param_3)

{
  if (param_2 == 1000) {
    FUN_008161f1(0);
  }
  else if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


