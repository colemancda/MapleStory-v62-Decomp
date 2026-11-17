/* ptr_004a9245 - 0x004a9245 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004a9245(int *param_1,int param_2)

{
  if (param_1[10] != param_2) {
    (**(code **)(*param_1 + 0x3c))(&DAT_00978474);
    if (param_2 == 0) {
      FUN_004a7d77();
    }
  }
  FUN_004b3e85(param_2);
  return;
}


