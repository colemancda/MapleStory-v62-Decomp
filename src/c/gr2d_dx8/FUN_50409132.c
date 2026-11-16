/* FUN_50409132 - 0x50409132 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50409132(void)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int iVar9;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff6c;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  Ordinal_8(unaff_EBP + -0x30);
  iVar5 = FUN_504057dd((short *)(unaff_EBP + -0x30),(short *)&DAT_50439040);
  if (iVar5 < 0) {
    FUN_5042a358(iVar5);
  }
  iVar5 = *(int *)(extraout_ECX + 0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar6 = *(int **)(extraout_ECX + 0xc0);
  iVar5 = *piVar6;
  *(int **)(unaff_EBP + -0x20) = piVar6;
  iVar5 = (**(code **)(iVar5 + 0x8c))
                    (piVar6,unaff_EBP + -0x18,unaff_EBP + -0x14,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_5042a366(iVar5,*(int **)(unaff_EBP + -0x20),&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_5040278b((short *)(unaff_EBP + -0x30));
  if (iVar5 < 0) {
    FUN_5042a358(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  if (*(int *)(iVar5 + 0xd0) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar6 = FUN_50409655(*(int **)(iVar5 + 0xd0));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puVar2[5] = (int)piVar6 + 1;
  Ordinal_8(unaff_EBP + -0x30);
  iVar5 = FUN_504057dd((short *)(unaff_EBP + -0x30),(short *)&DAT_50439040);
  if (iVar5 < 0) {
    FUN_5042a358(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  iVar7 = *(int *)(iVar5 + 0xd4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar7 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar6 = *(int **)(iVar5 + 0xd4);
  iVar5 = *piVar6;
  *(int **)(unaff_EBP + 8) = piVar6;
  iVar5 = (**(code **)(iVar5 + 0x8c))
                    (piVar6,puVar2 + 6,puVar2 + 7,0,0,0,0,0,0,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_5042a366(iVar5,*(int **)(unaff_EBP + 8),&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_5040278b((short *)(unaff_EBP + -0x30));
  if (iVar5 < 0) {
    FUN_5042a358(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  puVar2[6] = puVar2[6] + 1;
  iVar7 = *(int *)(unaff_EBP + -0x18);
  puVar2[7] = puVar2[7] + 1;
  iVar9 = *(int *)(unaff_EBP + -0x14);
  if ((*(int *)(iVar5 + 0xc4) != iVar7) || (*(int *)(iVar5 + 200) != iVar9)) {
    iVar1 = *(int *)(unaff_EBP + -0x18);
    *(int *)(iVar5 + 0xc4) = iVar7;
    *(int *)(iVar5 + 200) = iVar9;
    fVar3 = (float)iVar1 + _DAT_5042d648;
    fVar4 = (float)*(int *)(unaff_EBP + -0x14) + _DAT_5042d648;
    *(float *)(unaff_EBP + 8) = fVar4;
    *(float *)(unaff_EBP + -0x54) = fVar3;
    *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
    *(float *)(unaff_EBP + -0x50) = fVar4;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0x3f800000;
    *(float *)(unaff_EBP + -0x48) = fVar3;
    uVar8 = _DAT_5042d644;
    *(undefined4 *)(unaff_EBP + -0x40) = _DAT_5042d644;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = uVar8;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    FUN_50413f56((float *)(unaff_EBP + -0x94),(float *)(unaff_EBP + -0x54),
                 (float *)(unaff_EBP + -0x48),(float *)(unaff_EBP + -0x3c));
    (**(code **)(*(int *)*puVar2 + 0x94))((int *)*puVar2,2,unaff_EBP + -0x94);
    iVar7 = *(int *)(unaff_EBP + -0x18);
    iVar9 = *(int *)(unaff_EBP + -0x14);
  }
  puVar2[8] = iVar7 - (*(uint *)(iVar5 + 0x20) >> 1);
  iVar9 = iVar9 - (*(uint *)(iVar5 + 0x24) >> 1);
  puVar2[9] = iVar9;
  puVar2[10] = puVar2[8] + *(int *)(iVar5 + 0x20);
  puVar2[0xb] = *(int *)(iVar5 + 0x24) + iVar9;
  if (0xfeffffff < *(uint *)(iVar5 + 0xcc)) {
    (**(code **)(*(int *)*puVar2 + 0x90))((int *)*puVar2,0,0,1,*(uint *)(iVar5 + 0xcc),0,0);
  }
  iVar7 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2);
  *(int *)(iVar5 + 0x94) = iVar7;
  if (-1 < iVar7) {
    (**(code **)(*(int *)*puVar2 + 0x88))((int *)*puVar2);
    FUN_50407d56((void *)(iVar5 + 0x128),*(undefined4 *)(unaff_EBP + -0x18),
                 *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar5 + 0x20),
                 *(undefined4 *)(iVar5 + 0x24));
    (**(code **)(*(int *)puVar2[3] + 0x10))(puVar2,*(undefined4 *)(iVar5 + 0xb4));
    if (0 < *(int *)(iVar5 + 0x388)) {
      FUN_50408461();
    }
    (**(code **)(*(int *)*puVar2 + 0x8c))((int *)*puVar2);
  }
  FUN_50409460();
  if (-1 < *(int *)(iVar5 + 0x94)) {
    uVar8 = (**(code **)(*(int *)*puVar2 + 0x3c))((int *)*puVar2,0,0,0,0);
    *(undefined4 *)(iVar5 + 0x94) = uVar8;
  }
  *(undefined4 *)(iVar5 + 0x350) = *(undefined4 *)(iVar5 + 0x348);
  *(undefined4 *)(iVar5 + 0x354) = *(undefined4 *)(iVar5 + 0x34c);
  (*DAT_50438c04)(iVar5 + 0x348);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


