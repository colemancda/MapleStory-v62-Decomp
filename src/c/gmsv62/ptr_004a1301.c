/* ptr_004a1301 - 0x004a1301 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004a1301(int *param_1,int param_2)

{
  if (param_1[10] != param_2) {
    (**(code **)(*param_1 + 0x3c))(&DAT_00978474);
    if (param_2 == 0) {
      FUN_0049fdae();
    }
  }
  FUN_004b3e85(param_2);
  return;
}


