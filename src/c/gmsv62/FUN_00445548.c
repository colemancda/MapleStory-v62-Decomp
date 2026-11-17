/* FUN_00445548 - 0x00445548 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00445548(int *param_1,int param_2)

{
  if (param_1[0x10a] == 0) {
    param_1[0x121] = param_2;
    FUN_00441501(0);
    (**(code **)(*param_1 + 0x10))(6,100,0);
  }
  return;
}


