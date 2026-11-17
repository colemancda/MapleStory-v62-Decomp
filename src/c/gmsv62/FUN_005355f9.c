/* FUN_005355f9 - 0x005355f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005355f9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((((0xe < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0xdf)) &&
      (iVar5 = *(int *)(unaff_EBP + 0xc), 0x42 < iVar5)) && (iVar5 < 0xf2)) {
    uVar1 = (*(int *)(extraout_ECX[0x20] + 0x38) * 0x15 + -0x43 + iVar5) / 0x15;
    iVar3 = *(int *)(extraout_ECX[0x1c] + 0x50);
    if ((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + -4))) {
      extraout_ECX[0x1e] = uVar1;
    }
    uVar1 = extraout_ECX[0x1e];
    if (uVar1 != 0xffffffff) {
      iVar3 = *(int *)(extraout_ECX[0x1c] + 0x50);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar3 + -4);
      }
      if (uVar1 < uVar4) {
        iVar3 = *(int *)(*(int *)(iVar3 + 4 + uVar1 * 8) + 0x18);
        *(int *)(unaff_EBP + -0x14) = iVar3;
        iVar2 = 0;
        if (iVar3 != 0) {
          InterlockedIncrement((LONG *)(iVar3 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x14);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar3 = 0;
        if (iVar2 != 0) {
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          iVar3 = *extraout_ECX;
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
          iVar3 = (**(code **)(iVar3 + 0x30))(iVar2,0,0,0);
          iVar5 = iVar3 + 0x14 + iVar5;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar5);
          FUN_00759767(iVar3 + *(int *)(unaff_EBP + 8),iVar5,iVar2,uVar6,uVar7,uVar8);
          iVar3 = *(int *)(unaff_EBP + -0x14);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (iVar3 != 0) {
          FUN_00449913(0);
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_005356f9;
      }
    }
  }
  FUN_0074d6fb();
LAB_005356f9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


