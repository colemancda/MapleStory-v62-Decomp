/* FUN_004a5657 - 0x004a5657 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a5657(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || ((param_3 & 0x80000000) != 0)) goto LAB_004a56f3;
  uVar3 = param_3 >> 4 & 1;
  iVar2 = FUN_005265f8(0x10);
  if (param_2 < 0x28) {
    if (param_2 == 0x27) {
LAB_004a56c5:
      if (iVar2 == 0) {
LAB_004a56c9:
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x44);
      }
    }
    else if (param_2 != 8) {
      if (param_2 == 0x23) {
        if (uVar3 != 0) goto LAB_004a56f3;
        goto LAB_004a56c5;
      }
      if (param_2 == 0x24) {
        bVar4 = uVar3 == 0;
      }
      else {
        bVar4 = param_2 == 0x25;
      }
      if (!bVar4) goto LAB_004a56f3;
      if (iVar2 != 0) {
        FUN_004459fe(param_1 + 0x58,param_1 + 0x44);
        goto LAB_004a56ec;
      }
      goto LAB_004a56c9;
    }
  }
  else {
    uVar1 = param_3 & 1;
    if (param_2 != 0x2d) {
      if (param_2 == 0x2e) goto LAB_004a56ec;
      uVar1 = uVar3;
      if ((param_2 != 0x56) && (param_2 != 0x58)) goto LAB_004a56f3;
    }
    if (uVar1 == 0) goto LAB_004a56f3;
  }
LAB_004a56ec:
  *(undefined4 *)(param_1 + 0xb4) = 0;
LAB_004a56f3:
  FUN_004a0981(param_2,param_3);
  return;
}


