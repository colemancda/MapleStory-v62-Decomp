/* FUN_50408723 - 0x50408723 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50408723(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  piVar1 = *(int **)(extraout_ECX + 100);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
LAB_5040879b:
    uVar9 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      uVar9 = *(undefined4 *)(extraout_ECX + 0x54);
      *(undefined4 *)(unaff_EBP + -0x40) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x70) = uVar9;
      uVar9 = *(undefined4 *)(extraout_ECX + 0x58);
      *(undefined4 *)(unaff_EBP + -0x54) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x6c) = uVar9;
      uVar9 = *(undefined4 *)(extraout_ECX + 0x5c);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x58) = uVar9;
      uVar9 = *(undefined4 *)(extraout_ECX + 0x60);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar9;
    }
    else {
      iVar8 = (*DAT_50438ca8)(unaff_EBP + -0x20,extraout_ECX + 0x3c,
                              *(undefined4 *)(unaff_EBP + 0x18));
      fVar7 = _DAT_5042d898;
      if (iVar8 == 0) {
        iVar8 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        (**(code **)(iVar8 + 8))(piVar1);
        goto LAB_5040879b;
      }
      iVar8 = *(int *)(extraout_ECX + 0x4c);
      *(float *)(unaff_EBP + -0x70) = (float)*(int *)(unaff_EBP + -0x20) + _DAT_5042d898;
      *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x70) + iVar8 * -0x800000;
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x70);
      iVar2 = *(int *)(extraout_ECX + 0x50);
      *(float *)(unaff_EBP + -0x6c) = (float)*(int *)(unaff_EBP + -0x1c) + fVar7;
      *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + -0x6c) + iVar2 * -0x800000;
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x6c);
      *(float *)(unaff_EBP + -0x58) = (float)*(int *)(unaff_EBP + -0x18) + fVar7;
      *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + -0x58) + iVar8 * -0x800000;
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x58);
      *(float *)(unaff_EBP + -0x3c) = (float)*(int *)(unaff_EBP + -0x14) + fVar7;
      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + iVar2 * -0x800000;
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x3c);
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
    uVar9 = *puVar3;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    uVar4 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = uVar9;
    uVar9 = puVar3[1];
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = uVar9;
    uVar9 = puVar3[2];
    uVar5 = puVar3[3];
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -100) = uVar5;
    puVar3 = *(undefined4 **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -0x68) = uVar9;
    *(undefined4 *)(unaff_EBP + -0x50) = *puVar3;
    uVar9 = puVar3[1];
    *(undefined4 *)(unaff_EBP + -0x74) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x5c) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    uVar4 = puVar3[2];
    uVar5 = puVar3[3];
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar9;
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
    while( true ) {
      while (*(int *)(extraout_ECX + 0x74) != 0) {
        (*DAT_50438af4)(0);
      }
      puVar3 = (undefined4 *)(extraout_ECX + 0x2c);
      *(undefined4 **)(unaff_EBP + 0x18) = puVar3;
      FUN_50401895();
      iVar8 = *(int *)(extraout_ECX + 0x74);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar8 == 0) break;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piVar1 = (int *)(extraout_ECX + 0x30);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar3 = 0;
      }
    }
    puVar6 = *(undefined4 **)(unaff_EBP + 8);
    iVar8 = *(int *)(unaff_EBP + -0x10);
    if (puVar6[0xc] != iVar8) {
      if (*(int *)(extraout_ECX + 0x7c) != puVar6[2]) {
        puVar6[0xf] = puVar6[0xf] + 1;
        *(undefined4 *)(extraout_ECX + 0x7c) = puVar6[2];
      }
      (**(code **)(*(int *)*puVar6 + 0xf4))((int *)*puVar6,0,iVar8);
      puVar6[0xc] = *(undefined4 *)(unaff_EBP + -0x10);
    }
    (**(code **)(*(int *)*puVar6 + 0x120))((int *)*puVar6,5,2,unaff_EBP + -0x80,0x18);
    puVar6[0x10] = puVar6[0x10] + 1;
    piVar1 = (int *)(extraout_ECX + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar3 = 0;
    }
    if (*(int *)(extraout_ECX + 0x78) != 0) {
      *(undefined4 *)(extraout_ECX + 0x78) = 0;
    }
    iVar8 = **(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    (**(code **)(iVar8 + 8))(*(int **)(unaff_EBP + -0x10));
    uVar9 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar9;
}


