/* FUN_00604a05 - 0x00604a05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00604a05(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1[1];
  if ((((9 < param_2) && (param_2 < 0x101)) && (0xe8 < param_3)) && (param_3 < 0x120)) {
    uVar3 = 0;
    if (*param_1 != 0) {
      uVar3 = *(uint *)(*param_1 + -4);
    }
    uVar2 = (param_3 + -0xe6) / 0x12 + param_1[2];
    if (uVar2 < uVar3) {
      param_1[1] = uVar2;
      goto LAB_00604a54;
    }
  }
  param_1[1] = -1;
LAB_00604a54:
  if (iVar1 != param_1[1]) {
    FUN_008161f1(0);
  }
  return 0;
}


