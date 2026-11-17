/* FUN_005c63a6 - 0x005c63a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005c63a6(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = param_2 & 1;
  }
  iVar1 = (int)param_2 >> 1;
  if (iVar1 == 1) {
    iVar2 = 0;
  }
  else if (iVar1 == 2) {
    iVar2 = 1;
  }
  else if (iVar1 == 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = 3;
    if (iVar1 != 6) {
      if (iVar1 == 0x10) {
        iVar2 = 0x1a;
      }
      else {
        iVar1 = FUN_00413367(*(int *)(param_1 + 0x15c) + 0x40,
                             *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x48));
        iVar2 = (-(uint)(iVar1 != 3) & 0xfffffffe) + 3;
      }
    }
  }
  return iVar2;
}


