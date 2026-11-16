/* FUN_50c04840 - 0x50c04840 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c04840(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    param_1[4] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1[1] = param_3;
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_50c048c6(param_1 + 7);
    FUN_50c048c6(param_1 + 9);
    FUN_50c048c6(param_1 + 0xb);
    piVar2 = (int *)param_1[4];
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[0x11] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    if (piVar2 != (int *)0x0) {
      while (*piVar2 != 0) {
        (*(code *)piVar2[8])(1);
        if (*param_1 == 0x34) {
          piVar2 = piVar2 + 7;
        }
        else {
          piVar2 = piVar2 + 9;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


