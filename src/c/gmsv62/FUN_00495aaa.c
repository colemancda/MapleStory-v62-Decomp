/* FUN_00495aaa - 0x00495aaa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00495aaa(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    iVar1 = *(int *)(unaff_EBP + 8);
    if (iVar1 == 0x1b) {
      uStack_c = 0x495b3a;
      iVar1 = (**(code **)(*(int *)(extraout_ECX[0x20] + 4) + 0x20))();
      if (iVar1 == 0) goto LAB_00495b96;
      uStack_c = 0;
      uStack_10 = 0;
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0x25d;
      uVar2 = FUN_00679d22(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_1c;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00450368(uVar2);
      iVar1 = FUN_007db791();
      *(bool *)(unaff_EBP + 0xf) = iVar1 == 6;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_c = 0x495b81;
      FUN_00414ebb();
      if (*(char *)(unaff_EBP + 0xf) != '\0') {
        iVar1 = *extraout_ECX;
        uStack_c = 0x3eb;
        goto LAB_00495aef;
      }
    }
    else if (iVar1 == 0x70) {
      uStack_c = 0x495b1f;
      iVar1 = (**(code **)(*(int *)(extraout_ECX[0x1a] + 4) + 0x20))();
      if (iVar1 != 0) {
        iVar1 = *extraout_ECX;
        uStack_c = 1000;
LAB_00495aef:
        uStack_10 = 0x495af4;
        (**(code **)(iVar1 + 0x20))();
      }
    }
    else if (iVar1 == 0x71) {
      uStack_c = 0x495b07;
      iVar1 = (**(code **)(*(int *)(extraout_ECX[0x1c] + 4) + 0x20))();
      if (iVar1 != 0) {
        iVar1 = *extraout_ECX;
        uStack_c = 0x3e9;
        goto LAB_00495aef;
      }
    }
    else {
      if (iVar1 != 0x72) goto LAB_00495b96;
      uStack_c = 0x495ae4;
      iVar1 = (**(code **)(*(int *)(extraout_ECX[0x1e] + 4) + 0x20))();
      if (iVar1 != 0) {
        iVar1 = *extraout_ECX;
        uStack_c = 0x3ea;
        goto LAB_00495aef;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00495b96:
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


