/* FUN_0073d259 - 0x0073d259 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0073d259(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0x3f1) {
    if ((param_3 < 300) || (0x130 < param_3)) goto LAB_0073d2cf;
    FUN_00744523();
    iVar1 = (*DAT_0097b704)();
    param_1[0x2ef] = iVar1;
  }
  if (param_2 == 0x3f3) {
    if (param_3 != 600) goto LAB_0073d2cf;
    FUN_0073dcf0(param_4);
  }
  if ((1999 < param_2) && (param_2 < 0x7d4)) {
    if (param_3 != 100) {
      return;
    }
    FUN_00747bcb(param_2 - 2000,0);
  }
LAB_0073d2cf:
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


