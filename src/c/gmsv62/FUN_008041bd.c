/* FUN_008041bd - 0x008041bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008041bd(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if ((DAT_0097c1f0 & 1) == 0) {
    DAT_0097c1f0 = DAT_0097c1f0 | 1;
    DAT_0097c1ec = __ftol();
  }
  if (((param_2 != 0) && (iVar1 = FUN_007bc4b2(), iVar1 != 0)) &&
     (DAT_0097c1ec < *(int *)(param_1 + 0x238))) {
    local_8 = 0x24 - (int)(0x150 / (longlong)(*(int *)(param_1 + 0x238) + -0x12));
    if (local_8 < 2) {
      local_8 = 1;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -4);
    }
    if ((piVar2 == (int *)0x0) ||
       (iVar1 = (**(code **)(piVar2[1] + 0x20))(&DAT_0097bff8), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x40))
                (local_8,(-(uint)((piVar2[0x14b] & 1U) != 0) & 0xfffffde4) + 0x10e,0xfffffef2,0,0,0,
                 0,0);
    }
  }
  FUN_007f434c(param_2,param_3,param_4);
  return;
}


