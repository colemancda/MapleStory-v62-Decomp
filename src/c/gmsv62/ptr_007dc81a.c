/* ptr_007dc81a - 0x007dc81a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007dc81a(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 200) {
    FUN_007dc99a();
    FUN_0047c308(param_1 + 0x45);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


