/* FUN_00658160 - 0x00658160 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00658160(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 == 0x408) && (param_3 == 500)) {
    FUN_0065831b(param_4);
  }
  else if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


