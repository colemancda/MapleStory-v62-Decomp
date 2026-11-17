/* FUN_004b2362 - 0x004b2362 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004b2362(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int iVar7;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_4c;
  
  FUN_00879bb8();
  iVar7 = *(int *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar7 == 0) goto LAB_004b265a;
  iStack_4c = 0x4b238d;
  piVar2 = (int *)FUN_004b2aac();
  uVar5 = *(undefined4 *)(extraout_ECX + 0x60);
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  switch(uVar5) {
  case 0:
    *(undefined4 *)(unaff_EBP + -0x10) = 0xd;
    *(undefined4 *)(unaff_EBP + -0x14) = 6;
    iVar7 = 0xc;
    break;
  case 1:
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    goto LAB_004b23ba;
  case 2:
  case 4:
  case 7:
    *(undefined4 *)(unaff_EBP + -0x10) = 0xc;
    iVar7 = 6;
    goto LAB_004b23f5;
  case 3:
    *(undefined4 *)(unaff_EBP + -0x10) = 0xc;
    *(undefined4 *)(unaff_EBP + -0x14) = 10;
    iVar7 = 6;
    break;
  case 5:
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    *(undefined4 *)(unaff_EBP + -0x14) = 3;
    iVar7 = 4;
    break;
  case 6:
    *(undefined4 *)(unaff_EBP + -0x10) = 9;
LAB_004b23ba:
    iVar7 = 4;
LAB_004b23f5:
    *(int *)(unaff_EBP + -0x14) = iVar7;
    break;
  default:
    iVar7 = *(int *)(unaff_EBP + -0x20);
  }
  if (*(int *)(extraout_ECX + 0x34) == 0) {
    if (*piVar2 == 0) {
      iStack_4c = 0x4b24e4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_4c = unaff_EBP + -0x34;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        iStack_4c = 0x4b24fe;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_4c = 0x4b2513;
      uVar5 = FUN_00411641();
      *(int **)(unaff_EBP + -0x20) = &iStack_4c;
      iStack_4c = extraout_ECX_00;
      FUN_004033a1(uVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0044974c();
      iVar7 = FUN_00448ebb();
    }
    else {
      if (piVar2[6] == 0) {
        iStack_4c = 0x4b24cd;
        FUN_00878dfb();
      }
      iVar7 = FUN_0040e48b();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x20) = iVar7 + -4;
    if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
      *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
      iStack_4c = 0x4b254d;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_4c = 0x4b2558;
        FUN_00878dfb();
      }
    }
    *(int *)(extraout_ECX + 0x5c) = *(int *)(unaff_EBP + -0x10) / 2;
    piVar2 = *(int **)(extraout_ECX + 0x4c);
    while (piVar2 != (int *)0x0) {
      if (piVar2 == *(int **)(extraout_ECX + 0x4c)) {
        *(undefined4 *)(extraout_ECX + 0x5c) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      piVar1 = *(int **)(unaff_EBP + -0x1c);
      piVar2[1] = *(int *)(extraout_ECX + 0x5c);
      if (piVar2 == piVar1) {
        *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + *(int *)(unaff_EBP + -0x20);
      }
      else {
        if (*piVar2 == 0) {
          iStack_4c = 0x4b25b8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          iStack_4c = unaff_EBP + -0x44;
          iVar7 = FUN_00402e32();
          if (iVar7 < 0) {
            iStack_4c = 0x4b25d2;
            FUN_00878dfb();
          }
          *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          iStack_4c = 0x4b25e7;
          uVar5 = FUN_00411641();
          *(int **)(unaff_EBP + -0x24) = &iStack_4c;
          iStack_4c = extraout_ECX_01;
          FUN_004033a1(uVar5);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_0044974c();
          iVar7 = FUN_00448ebb();
        }
        else {
          if (piVar2[5] == 0) {
            iStack_4c = 0x4b25a4;
            FUN_00878dfb();
          }
          iVar7 = FUN_0040e48b();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
          iStack_4c = 0x4b261f;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            iStack_4c = 0x4b262a;
            FUN_00878dfb();
          }
        }
        *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + iVar7 + -4;
      }
      piVar2[2] = *(int *)(extraout_ECX + 0x5c);
      *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + *(int *)(unaff_EBP + -0x10);
      iVar7 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
      piVar2 = (int *)(-(uint)(iVar7 != 0) & iVar7 + 0x10U);
    }
  }
  else {
    if ((*(int *)(extraout_ECX + 0x38) != 0) &&
       (uVar3 = *(int *)(extraout_ECX + 0x38) * *(int *)(extraout_ECX + 0x48),
       *(uint *)(extraout_ECX + 0x1c) <= uVar3 && uVar3 - *(uint *)(extraout_ECX + 0x1c) != 0)) {
      *(undefined4 *)(extraout_ECX + 0x38) = 0;
    }
    if (*(int *)(extraout_ECX + 0x38) == 0) {
      uVar3 = (((*(int *)(extraout_ECX + 0x1c) -
                (*(uint *)(extraout_ECX + 0x48) - 1) * *(int *)(unaff_EBP + -0x10)) - iVar7) -
              *(int *)(unaff_EBP + -0x14)) / *(uint *)(extraout_ECX + 0x48);
    }
    else {
      uVar3 = *(int *)(extraout_ECX + 0x38) - 8;
    }
    if (*(int *)(extraout_ECX + 0x38) == 0) {
      iVar7 = *(int *)(extraout_ECX + 0x1c) -
              (uVar3 + iVar7 + *(int *)(unaff_EBP + -0x14)) * *(int *)(extraout_ECX + 0x48);
    }
    else {
      iVar7 = 0;
    }
    *(int *)(extraout_ECX + 0x5c) = *(int *)(unaff_EBP + -0x10) / 2;
    uVar4 = *(uint *)(extraout_ECX + 0x4c);
    while (uVar4 != 0) {
      if (uVar4 == *(uint *)(extraout_ECX + 0x4c)) {
        *(undefined4 *)(extraout_ECX + 0x5c) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(extraout_ECX + 0x5c);
      *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + (0 < iVar7) + uVar3;
      *(undefined4 *)(uVar4 + 8) = *(undefined4 *)(extraout_ECX + 0x5c);
      *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + *(int *)(unaff_EBP + -0x10);
      iVar6 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      iVar7 = iVar7 + -1;
      uVar4 = iVar6 + 0x10U & -(uint)(iVar6 != 0);
    }
  }
LAB_004b265a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


