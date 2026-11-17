/* FUN_005347fc - 0x005347fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005347fc(void)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((((0xe < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0xdf)) &&
      (iVar4 = *(int *)(unaff_EBP + 0xc), 0x42 < iVar4)) && (iVar4 < 0xf2)) {
    uVar1 = (*(int *)(extraout_ECX[0x20] + 0x38) * 0x15 + -0x43 + iVar4) / 0x15;
    if ((extraout_ECX[0x29] != 0) && (uVar1 < *(uint *)(extraout_ECX[0x29] + -4))) {
      extraout_ECX[0x1e] = uVar1;
    }
    uVar1 = extraout_ECX[0x1e];
    if (uVar1 != 0xffffffff) {
      if (extraout_ECX[0x29] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(extraout_ECX[0x29] + -4);
      }
      if (uVar1 < uVar3) {
        FUN_00554ef3(unaff_EBP + -0x18,*(undefined4 *)(extraout_ECX[0x29] + uVar1 * 4));
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          iVar2 = *extraout_ECX;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
          iVar2 = (**(code **)(iVar2 + 0x30))(uVar5,0,0,0);
          iVar4 = iVar2 + 0x14 + iVar4;
          iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar4);
          FUN_00759767(iVar2 + *(int *)(unaff_EBP + 8),iVar4,uVar5,uVar6,uVar7,uVar8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_00449913(0);
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_005348fb;
      }
    }
  }
  FUN_0074d6fb();
LAB_005348fb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


