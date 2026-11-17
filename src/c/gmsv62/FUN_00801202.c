/* FUN_00801202 - 0x00801202 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00801202(void)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *extraout_ECX;
  int unaff_EBP;
  float10 fVar8;
  
  FUN_00879bb8();
  iVar6 = DAT_00978358;
  if (extraout_ECX[0x92] == 0) {
    uVar3 = 0;
    goto LAB_00801711;
  }
  *(int *)(unaff_EBP + -0x1c) = DAT_00978358;
  FUN_0078ffba();
  piVar1 = (int *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((piVar1 == (int *)0x0) || (iVar4 = (**(code **)(*piVar1 + 0x20))(), iVar4 == 0)) ||
     (extraout_ECX[5] == 0)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = extraout_ECX[5] + -4;
  }
  if (extraout_ECX[0x92] != 4) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0xfffffed4;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xffffff38;
    *(undefined4 *)(unaff_EBP + -0x30) = 300;
    *(undefined4 *)(unaff_EBP + -0x2c) = 200;
    fVar8 = (float10)FUN_004f1993(extraout_ECX + 0xe);
    *(double *)(unaff_EBP + -0x28) = (double)fVar8;
    FUN_004f1993(extraout_ECX + 8,extraout_ECX[0xc]);
    __ftol();
    uVar3 = __ftol();
    (*DAT_0097b54c)(unaff_EBP + -0x38,uVar3);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 4) + 0x10))();
    iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x38,*puVar5,puVar5[1]);
    if (iVar4 == 0) {
      if (extraout_ECX[0x92] == 1) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      else {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          FUN_00878dfb();
        }
        uVar3 = FUN_00424f08();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
      }
      (**(code **)(*(int *)(iVar6 + 4) + 0x10))();
      puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 4) + 0x10))();
      iVar6 = (**(code **)(extraout_ECX[3] + 0x40))(extraout_ECX + 3,*puVar5);
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,extraout_ECX + 3,&DAT_00963d08);
      }
      FUN_004e98b7();
      FUN_0067f31f();
      extraout_ECX[0x94] = 0;
      extraout_ECX[0x93] = 0;
      iVar6 = *(int *)(unaff_EBP + -0x1c);
    }
  }
  iVar4 = extraout_ECX[0x92];
  if ((iVar4 == 3) || (iVar4 == 4)) {
    FUN_008017ba();
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x130) == 0) {
      uVar3 = FUN_007f1845();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      goto LAB_00801711;
    }
    iVar6 = FUN_004f1a11(0);
    extraout_ECX[0x1e] = iVar6;
    iVar6 = FUN_004f1a11(0);
    extraout_ECX[0x18] = iVar6;
  }
  else if (iVar4 == 1) {
    piVar7 = (int *)(**(code **)(*(int *)(iVar6 + 4) + 0x10))();
    iVar6 = *piVar7;
    iVar4 = extraout_ECX[0xc];
    piVar1 = extraout_ECX + 8;
    *(int *)(unaff_EBP + -0x1c) = piVar7[1];
    FUN_004f1993(piVar1,iVar4);
    uVar3 = __ftol();
    iVar4 = extraout_ECX[0x12];
    *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
    FUN_004f1993(extraout_ECX + 0xe,iVar4);
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    iVar4 = *(int *)(unaff_EBP + -0x28);
    *(uint *)(unaff_EBP + -0x10) = ((iVar6 <= iVar4) - 1 & 2) - 1;
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x130) == 0) {
      if (iVar4 + 0x46 < iVar6) {
        iVar4 = extraout_ECX[0xc];
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        FUN_004f1993(piVar1,iVar4);
        iVar4 = __ftol();
        *(int *)(unaff_EBP + -0x14) = iVar6 + -0x46;
        if (iVar4 + 7 <= iVar6 + -0x46) {
          *(int *)(unaff_EBP + -0x14) = iVar4 + 7;
        }
        iVar6 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x14));
        extraout_ECX[0xc] = iVar6;
        uVar2 = 0x3ff0000000000000;
      }
      else if (iVar6 < iVar4 + -0x46) {
        iVar4 = extraout_ECX[0xc];
        *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
        FUN_004f1993(piVar1,iVar4);
        iVar4 = __ftol();
        *(int *)(unaff_EBP + -0x14) = iVar6 + 0x46;
        if (iVar6 + 0x46 <= iVar4 + -7) {
          *(int *)(unaff_EBP + -0x14) = iVar4 + -7;
        }
        iVar6 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x14));
        uVar2 = _DAT_008f26d8;
        extraout_ECX[0xc] = iVar6;
      }
      else {
        uVar2 = 0;
      }
      iVar6 = FUN_004f1a11(uVar2);
      extraout_ECX[0x18] = iVar6;
      if (extraout_ECX[0x93] == 0) {
        FUN_004f1993(extraout_ECX + 0xe);
        iVar4 = __ftol();
        iVar6 = *(int *)(unaff_EBP + -0x1c);
        iVar4 = FUN_0087a90a(iVar6 - iVar4);
        if (iVar4 < 0x15) goto LAB_0080150e;
        extraout_ECX[0x94] = extraout_ECX[0x94] + 1;
        if (0x1d < extraout_ECX[0x94]) {
          extraout_ECX[0x94] = 0;
          extraout_ECX[0x93] = 1;
        }
      }
      else {
        iVar6 = *(int *)(unaff_EBP + -0x1c);
LAB_0080150e:
        extraout_ECX[0x94] = 0;
      }
      iVar4 = *(int *)(unaff_EBP + -0x24);
      if (iVar6 < iVar4) {
LAB_008015cd:
        if ((extraout_ECX[0x93] == 0) && (iVar4 + -100 <= iVar6)) {
LAB_0080167b:
          uVar2 = 0;
        }
        else {
          if (extraout_ECX[0x93] < 0) {
            FUN_004f1993(extraout_ECX + 0xe);
            iVar4 = __ftol();
            if (iVar4 == iVar6) goto LAB_008015fd;
          }
          FUN_004f1993(extraout_ECX + 0xe,extraout_ECX[0x12]);
          iVar4 = __ftol();
          *(int *)(unaff_EBP + -0x14) = iVar6;
          if (iVar6 <= iVar4 + -7) {
            *(int *)(unaff_EBP + -0x14) = iVar4 + -7;
          }
          iVar6 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x14));
          extraout_ECX[0x12] = iVar6;
          fVar8 = (float10)FUN_004f1993(extraout_ECX + 0xe,iVar6);
          if (fVar8 == (float10)*(int *)(unaff_EBP + -0x1c)) {
            extraout_ECX[0x93] = -1;
          }
          uVar2 = _DAT_008f26d8;
          if (extraout_ECX[0x93] == 0) {
            extraout_ECX[0x93] = 1;
            uVar2 = _DAT_008f26d8;
          }
        }
      }
      else {
        if ((extraout_ECX[0x93] == 0) && (iVar6 <= iVar4 + 100)) {
          if (iVar6 <= iVar4) goto LAB_008015cd;
          goto LAB_0080167b;
        }
        if (extraout_ECX[0x93] < 0) {
          FUN_004f1993(extraout_ECX + 0xe);
          iVar4 = __ftol();
          if (iVar4 == iVar6) {
LAB_008015fd:
            extraout_ECX[0x93] = 0;
            goto LAB_0080168d;
          }
        }
        FUN_004f1993(extraout_ECX + 0xe,extraout_ECX[0x12]);
        iVar4 = __ftol();
        *(int *)(unaff_EBP + -0x14) = iVar6;
        if (iVar4 + 7 <= iVar6) {
          *(int *)(unaff_EBP + -0x14) = iVar4 + 7;
        }
        iVar6 = FUN_004f1a11((double)*(int *)(unaff_EBP + -0x14));
        extraout_ECX[0x12] = iVar6;
        fVar8 = (float10)FUN_004f1993(extraout_ECX + 0xe,iVar6);
        if (fVar8 == (float10)*(int *)(unaff_EBP + -0x1c)) {
          extraout_ECX[0x93] = -1;
        }
        if (extraout_ECX[0x93] == 0) {
          extraout_ECX[0x93] = 1;
        }
        uVar2 = 0x3ff0000000000000;
      }
      iVar6 = FUN_004f1a11(uVar2);
      extraout_ECX[0x1e] = iVar6;
    }
    else {
      iVar6 = FUN_004f1a11(0);
      extraout_ECX[0x1e] = iVar6;
      iVar6 = FUN_004f1a11(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      extraout_ECX[0x18] = iVar6;
    }
LAB_0080168d:
    FUN_007f7fd3(*(undefined4 *)(unaff_EBP + -0x10),0);
  }
  (**(code **)(*extraout_ECX + 0x14))();
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar3 = 1;
LAB_00801711:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


