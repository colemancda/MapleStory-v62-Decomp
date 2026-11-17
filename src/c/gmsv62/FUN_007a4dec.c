/* FUN_007a4dec - 0x007a4dec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a4dec(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar6;
  
  FUN_00879bb8();
  iVar5 = DAT_00978368;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar2 + 4);
  FUN_0045e4a2();
  uVar3 = FUN_0072f360();
  uVar4 = *(undefined4 *)(iVar5 + 0x2620);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  iVar2 = FUN_00413367(iVar5 + 0x2618,uVar4);
  if (iVar2 != 0) {
    uVar4 = FUN_00413367(iVar5 + 0x2618,*(undefined4 *)(iVar5 + 0x2620));
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  }
  uVar4 = FUN_0072f3cc();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_005d0f1a(0x3ff0000000000000);
  FUN_00486ada();
  FUN_004125d9();
  iVar2 = FUN_00413367();
  if (iVar2 == 0) {
LAB_007a5065:
    iVar5 = FUN_0078ce23();
    if (iVar5 != 0) {
      FUN_004c2648();
      FUN_0054e7b3();
      uVar4 = FUN_00413367();
      iVar5 = FUN_00682a20(uVar4);
      iVar2 = 0;
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      if (iVar5 != 0) {
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x16f);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar5 != 0) {
          FUN_0045e2eb();
          iVar5 = FUN_0054e7b3();
          sVar1 = FUN_0045f084();
          iVar2 = (int)sVar1;
          sVar1 = FUN_0045f084(iVar5 + 0x110,*(undefined4 *)(iVar5 + 0x114));
          uVar4 = *(undefined4 *)(iVar5 + 0x11c);
          *(int *)(unaff_EBP + -0x18) = (int)sVar1;
          FUN_0045f084(iVar5 + 0x118,uVar4);
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x177) != 0) {
          FUN_0045e2eb();
          iVar5 = FUN_0054e7b3();
          sVar1 = FUN_0045f084();
          iVar2 = iVar2 + sVar1;
          sVar1 = FUN_0045f084(iVar5 + 0x110,*(undefined4 *)(iVar5 + 0x114));
          uVar4 = *(undefined4 *)(iVar5 + 0x11c);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + (int)sVar1;
          FUN_0045f084(iVar5 + 0x118,uVar4);
        }
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x14);
        if (iVar5 < 0x51) {
          iVar5 = 0x50;
        }
        *(int *)(unaff_EBP + -0x10) = iVar2 + iVar5;
        if (0xbd < iVar2 + iVar5) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0xbe;
        }
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x18);
        if (iVar5 < 0x51) {
          iVar5 = 0x50;
        }
        iVar5 = iVar5 + *(int *)(unaff_EBP + -0x18);
        *(int *)(unaff_EBP + -0x14) = iVar5;
        if (0x7a < iVar5) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0x7b;
        }
        FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
        fVar6 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar6);
        fVar6 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar6);
        FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x14) * _DAT_008e8cd0);
        FUN_005d0f1a(*(undefined8 *)(*(int *)(unaff_EBP + -0x1c) + 0x20));
        fVar6 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar6);
        *(double *)(unaff_EBP + -0x34) =
             (double)*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x28) * _DAT_008e8cd0;
        fVar6 = (float10)FUN_005d0e60();
        fVar6 = fVar6 * (float10)*(double *)(unaff_EBP + -0x34);
        goto LAB_007a5290;
      }
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) < 0x51) {
      iVar5 = 0x50;
    }
    *(int *)(unaff_EBP + -0x10) = iVar5;
    if (0x8b < iVar5) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
    }
    iVar5 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x14) < 0x51) {
      iVar5 = 0x50;
    }
    *(int *)(unaff_EBP + -0x14) = iVar5;
    if (0x7a < iVar5) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0x7b;
    }
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
    fVar6 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar6);
    fVar6 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar6);
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x14) * _DAT_008e8cd0);
    iVar5 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x10f);
    *(int *)(unaff_EBP + -0x28) = iVar5;
    if (iVar5 != 0) {
      InterlockedIncrement((LONG *)(iVar5 + 4));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_0045e2eb();
      iVar5 = FUN_0054e7b3();
      if (iVar5 != 0) {
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        if (iVar2 == 0) {
          fVar6 = (float10)FUN_004f1993(iVar5 + 0x150,*(undefined4 *)(iVar5 + 0x160));
        }
        else {
          fVar6 = (float10)_DAT_008ecb38;
        }
        FUN_005d0f1a((double)fVar6);
        *(int *)(unaff_EBP + -0x20) = *(int *)(extraout_ECX + 0x1ee0) + 0x18;
        fVar6 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)fVar6);
        uVar4 = FUN_00413367(iVar5 + 0x164,*(undefined4 *)(iVar5 + 0x16c));
        *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
        fVar6 = (float10)FUN_005d0e60();
        FUN_005d0f1a((double)(fVar6 * (float10)*(int *)(unaff_EBP + -0x20) * (float10)_DAT_008e8cd0)
                    );
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_00449913();
    }
  }
  else {
    uVar4 = FUN_00413367(iVar5 + 0x263c);
    iVar5 = FUN_007a5449(uVar4);
    if (iVar5 == 0) {
      uVar4 = FUN_00413367();
      iVar5 = FUN_005e29cf(uVar4);
      if (iVar5 == 0) goto LAB_007a5065;
    }
    uVar4 = FUN_00413367();
    iVar5 = FUN_005e2932(uVar4);
    *(int *)(unaff_EBP + -0x18) = iVar5;
    if (iVar5 == 0) goto LAB_007a5065;
    if (*(int *)(iVar5 + 0x2c) == 0) {
      iVar5 = FUN_00614c6f();
      if (iVar5 != 0) goto LAB_007a5065;
      iVar5 = *(int *)(unaff_EBP + -0x18);
    }
    if (*(int *)(iVar5 + 0x2c) == 1) {
      iVar5 = FUN_00614c6f();
      if (iVar5 == 0) goto LAB_007a5065;
      iVar5 = *(int *)(unaff_EBP + -0x18);
    }
    iVar2 = *(int *)(iVar5 + 0x14);
    if (*(int *)(iVar5 + 0x14) < 0x51) {
      iVar2 = 0x50;
    }
    *(int *)(unaff_EBP + -0x10) = iVar2;
    if (0x8b < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
    }
    iVar2 = *(int *)(iVar5 + 0x18);
    if (*(int *)(iVar5 + 0x18) < 0x51) {
      iVar2 = 0x50;
    }
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (0x7a < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0x7b;
    }
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
    fVar6 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar6);
    fVar6 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar6);
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x14) * _DAT_008e8cd0);
    FUN_005d0f1a(*(undefined8 *)(*(int *)(unaff_EBP + -0x18) + 0x20));
    fVar6 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar6);
    *(double *)(unaff_EBP + -0x34) =
         (double)*(int *)(*(int *)(unaff_EBP + -0x18) + 0x28) * _DAT_008e8cd0;
    fVar6 = (float10)FUN_005d0e60();
    fVar6 = fVar6 * (float10)*(double *)(unaff_EBP + -0x34);
LAB_007a5290:
    FUN_005d0f1a((double)fVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


