/* FUN_007a4927 - 0x007a4927 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007a4927(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x24d4) == '\0') {
    iVar1 = *(int *)(param_2[1] + *param_2 * 8);
    *param_2 = iVar1;
    local_8 = param_1;
    if (iVar1 == 3) {
      iVar1 = (*DAT_0097b704)();
      if ((uint)(iVar1 - *(int *)(param_1 + 0x24d0)) < 500) {
        iVar1 = FUN_00455c59(local_10);
        uVar2 = *(undefined4 *)(iVar1 + 4);
        if (local_c != 0) {
          FUN_0045e7c2(0);
        }
        iVar1 = FUN_00650dae(uVar2,&LAB_004c4f2d,0);
        param_1 = local_8;
        if (0 < iVar1) {
          FUN_007b8688(&LAB_004c4f2d);
          param_1 = local_8;
        }
      }
      else {
        *param_2 = 1;
      }
    }
    if (*param_2 == 1) {
      uVar2 = (*DAT_0097b704)();
      *(undefined4 *)(param_1 + 0x24d0) = uVar2;
    }
  }
  else if (*param_2 != 3) {
    *param_2 = 0;
  }
  *(undefined1 *)(param_1 + 0x24d4) = 1;
  return;
}


