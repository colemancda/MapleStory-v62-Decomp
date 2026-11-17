/* FUN_00458313 - 0x00458313 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00458313(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_30 = 0x99;
    iStack_34 = 0x458336;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_30 = *(undefined4 *)(extraout_ECX + 0x24);
    iStack_34 = extraout_ECX + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_38 = 0x458353;
    iVar1 = FUN_00413367();
    if (3999 < iVar1) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
    }
    iStack_30 = *(undefined4 *)(extraout_ECX + 0x30);
    iStack_34 = extraout_ECX + 0x28;
    iStack_38 = 0x45836e;
    iVar1 = FUN_00413367();
    if (3999 < iVar1) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
    }
    iStack_30 = *(undefined4 *)(extraout_ECX + 0x3c);
    iStack_34 = extraout_ECX + 0x34;
    iStack_38 = 0x458384;
    iVar1 = FUN_00413367();
    uStack_40 = iStack_30;
    if (3999 < iVar1) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_40;
      uVar3 = 0x224;
    }
    else {
      if (*(int *)(extraout_ECX + 0x48c) + 4 < 0x31) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_30 = 0x1f7;
        iStack_34 = unaff_EBP + -0x18;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_38 = 0x4583f2;
        puVar2 = (undefined4 *)FUN_00679d22();
        iStack_34 = *puVar2;
        iStack_30 = 4000;
        iStack_38 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_3c = 0x458403;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_30 = 0x458411;
        FUN_00414ebb();
        iStack_30 = unaff_EBP + -0x10;
        iStack_34 = 3;
        iStack_3c = unaff_EBP + -0x14;
        *(int **)(unaff_EBP + -0x1c) = &iStack_38;
        uStack_40 = 0x458426;
        iStack_38 = extraout_ECX_00;
        FUN_00450368();
        iStack_3c = 0x45842b;
        iVar1 = FUN_0045828d();
        if (iVar1 == 1) {
          iStack_30 = 0;
          iStack_34 = 0;
          iStack_38 = 0xc6;
          iStack_3c = 0x458444;
          FUN_0060142b();
          iStack_30 = 7;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_34 = 0x458452;
          uVar3 = FUN_00457cda();
          iStack_30 = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + -0x10) == 2);
          iStack_34 = 0x458462;
          FUN_00457cda();
          iStack_30 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_34 = 0x45846d;
          FUN_00457d37();
          iStack_30 = 0;
          iStack_34 = 0x458476;
          FUN_00457cda();
          iStack_30 = unaff_EBP + -0x2c;
          iStack_34 = 0x458485;
          FUN_004751b2();
          *(undefined4 *)(extraout_ECX + 0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_30 = 0x458493;
          FUN_0045ebca();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_30 = 0x45849f;
        FUN_00414ebb();
        goto LAB_0045849f;
      }
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_40;
      uVar3 = 0x1fa;
    }
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_38 = 0;
    iStack_3c = 0;
    FUN_00679d22(&uStack_40,uVar3);
    FUN_007db3ad();
  }
LAB_0045849f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


