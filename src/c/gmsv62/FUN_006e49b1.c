/* FUN_006e49b1 - 0x006e49b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006e49b1(int *param_1,int param_2,int param_3)

{
  if (param_2 == 0x7d6) {
    if (param_3 != 500) goto LAB_006e49db;
    FUN_006e952f(0);
    FUN_006e9576(0);
    FUN_006e955f(0);
    if (*(int *)(param_1[0x29d] + 0x34) != 9) {
      FUN_006ea5e4();
      return;
    }
  }
  else {
    if ((param_2 != 0x7d7) || (param_3 != 500)) goto LAB_006e49db;
    FUN_006e955f(0);
  }
  FUN_006e6684();
LAB_006e49db:
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


