/* ptr_00523473 - 0x00523473 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00523473(int *param_1,int param_2)

{
  if (param_2 == 1000) {
    param_1[0x25] = param_1[0x25] + -1;
  }
  else if (param_2 == 0x3e9) {
    param_1[0x25] = param_1[0x25] + 1;
    goto LAB_005234b5;
  }
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x34))(1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x34))(2);
    return;
  }
LAB_005234b5:
  (**(code **)(*param_1 + 0x2c))(0);
  return;
}


