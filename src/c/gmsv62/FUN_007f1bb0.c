/* FUN_007f1bb0 - 0x007f1bb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007f1bb0(void)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *extraout_ECX;
  int unaff_EBP;
  float10 fVar7;
  
  FUN_00879bb8();
  iVar3 = FUN_00614c6f();
  if ((iVar3 != 0) || (fVar7 = (float10)FUN_005d0e60(), (float10)_DAT_008e8a80 < fVar7)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  iVar3 = FUN_0048bb31(extraout_ECX + 0x47);
  if (iVar3 == 0) {
    iVar3 = extraout_ECX[0x44];
    if (iVar3 == 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uVar4 = 0;
        goto LAB_007f1f62;
      }
      fVar7 = (float10)FUN_005d0e60();
      fVar7 = (float10)FUN_0087acc3((double)fVar7);
      *(double *)(unaff_EBP + -0x20) = (double)fVar7;
      iVar3 = FUN_00614c6f();
      if (iVar3 == 0) {
        fVar7 = (float10)FUN_005d0e60();
        fVar7 = fVar7 * (float10)*(double *)(*(int *)(DAT_00978138 + 8) + 0x58) *
                (float10)*(double *)(unaff_EBP + -0x20);
      }
      else {
        fVar7 = (float10)FUN_005d0e60();
        fVar7 = fVar7 * (float10)*(double *)(*(int *)(DAT_00978138 + 8) + 0x48) *
                (float10)*(double *)(unaff_EBP + -0x20) * (float10)_DAT_008ecb30;
      }
      iVar3 = FUN_004f1a11((double)-fVar7);
      extraout_ECX[0x1e] = iVar3;
    }
    else {
      FUN_007f3ee6();
      iVar6 = *(int *)(DAT_00978138 + 8);
      fVar7 = (float10)FUN_005d0e60();
      *(double *)(unaff_EBP + -0x20) = (double)fVar7;
      fVar7 = (float10)FUN_005d0e60();
      iVar5 = FUN_004f1a11((double)-(((float10)*(double *)(unaff_EBP + -0x20) *
                                     (float10)*(double *)(iVar6 + 0x70)) / fVar7));
      iVar6 = *(int *)(unaff_EBP + -0x10);
      extraout_ECX[0x1e] = iVar5;
      if (iVar6 != 0) {
        fVar7 = (float10)FUN_004f1993(extraout_ECX + 0x1a,iVar5);
        iVar6 = FUN_004f1a11((double)(fVar7 * (float10)_DAT_008ed6f8));
        extraout_ECX[0x1e] = iVar6;
      }
      piVar1 = extraout_ECX + 0x51;
      iVar6 = FUN_00413367(piVar1);
      if (iVar6 == 0) {
        FUN_004f1993();
      }
      else {
        *(undefined8 *)(unaff_EBP + -0x20) = *(undefined8 *)(iVar3 + 0x38);
        uVar4 = FUN_00413367(piVar1);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        fVar7 = (float10)FUN_007f1f71(iVar3,extraout_ECX[0x66]);
        *(double *)(unaff_EBP + -0x20) = (double)fVar7;
        fVar7 = (float10)FUN_004f1993(extraout_ECX + 0x14,extraout_ECX[0x18]);
        *(double *)(unaff_EBP + -0x28) = (double)fVar7;
        uVar4 = FUN_00413367(piVar1,extraout_ECX[0x53]);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        if ((double)*(int *)(unaff_EBP + -0x10) * *(double *)(unaff_EBP + -0x28) <
            *(double *)(unaff_EBP + -0x20) * _DAT_008e89c8) {
          fVar7 = (float10)FUN_004f1993(extraout_ECX + 0x14,extraout_ECX[0x18]);
          *(double *)(unaff_EBP + -0x28) = (double)fVar7;
          uVar4 = FUN_00413367(piVar1,extraout_ECX[0x53]);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          iVar3 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x10) * *(double *)(unaff_EBP + -0x20)
                               * _DAT_008e89c8 + *(double *)(unaff_EBP + -0x28));
          extraout_ECX[0x18] = iVar3;
        }
        fVar7 = (float10)FUN_004f1993();
        *(double *)(unaff_EBP + -0x28) = (double)fVar7;
        uVar4 = FUN_00413367(piVar1,extraout_ECX[0x53]);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        if (*(double *)(unaff_EBP + -0x20) <
            (double)*(int *)(unaff_EBP + -0x10) * *(double *)(unaff_EBP + -0x28)) {
          uVar4 = FUN_00413367(piVar1,extraout_ECX[0x53]);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          iVar3 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x10) * *(double *)(unaff_EBP + -0x20))
          ;
          extraout_ECX[0x18] = iVar3;
        }
      }
      iVar3 = (*(code *)**(undefined4 **)extraout_ECX[5])();
      *(uint *)(unaff_EBP + -0x18) = (uint)(iVar3 == 0);
      if ((iVar3 == 0) != 0) {
        FUN_00679d86(unaff_EBP + -0x18,0x8c5);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_007d4073();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
      }
    }
  }
  else {
    iVar3 = FUN_00413367();
    if (iVar3 != 0) {
      (**(code **)(*extraout_ECX + 0x10))(0,0,0);
      iVar3 = DAT_00978138;
      uVar2 = _DAT_008e89d0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        uVar2 = _DAT_008ed700;
      }
      *(undefined8 *)(unaff_EBP + -0x20) = uVar2;
      iVar3 = *(int *)(iVar3 + 8);
      fVar7 = (float10)FUN_005d0e60();
      *(double *)(unaff_EBP + -0x14) = (double)fVar7;
      fVar7 = (float10)FUN_005d0e60();
      iVar3 = FUN_004f1a11((double)-((((float10)*(double *)(unaff_EBP + -0x14) *
                                      (float10)*(double *)(iVar3 + 0x70)) / fVar7) *
                                    (float10)*(double *)(unaff_EBP + -0x20)));
      extraout_ECX[0x1e] = iVar3;
      iVar3 = *(int *)(DAT_00978138 + 8);
      uVar4 = FUN_00413367(extraout_ECX + 0x51,extraout_ECX[0x53]);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      fVar7 = (float10)FUN_005d0e60();
      iVar3 = FUN_004f1a11((double)(fVar7 * (float10)*(double *)(iVar3 + 8) *
                                    (float10)*(int *)(unaff_EBP + -0x10) * (float10)_DAT_008ed790));
      extraout_ECX[0x18] = iVar3;
    }
  }
  uVar4 = 1;
LAB_007f1f62:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


