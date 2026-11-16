/* FUN_50408461 - 0x50408461 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50408461(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *_Src;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  int iVar7;
  
  FUN_5042a430();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (extraout_ECX[0xe4] == 0) {
    iVar3 = FUN_50405763(extraout_ECX + 0xe4);
    extraout_ECX[0xe3] = iVar3;
    piVar4 = (int *)FUN_50404b2f();
    (**(code **)(*piVar4 + 0x3c))(piVar4,0,extraout_ECX + 0xe5);
  }
  if (extraout_ECX[0xe5] != 0) {
    if (extraout_ECX[0xe0] != 0) {
      extraout_ECX[0xe0] = 0;
      *(undefined4 *)(unaff_EBP + -0x88) = _DAT_50435560;
      *(undefined4 *)(unaff_EBP + -0x84) = 0;
      *(undefined4 *)(unaff_EBP + -0x80) = 0;
      *(undefined2 *)(unaff_EBP + -0x7c) = 0;
      *(undefined1 *)(unaff_EBP + -0x7a) = 0;
      *(undefined4 *)(unaff_EBP + -0x79) = DAT_5043555c;
      *(undefined4 *)(unaff_EBP + -0x75) = 0;
      *(undefined4 *)(unaff_EBP + -0x71) = 0;
      *(undefined2 *)(unaff_EBP + -0x6d) = 0;
      *(undefined1 *)(unaff_EBP + -0x6b) = 0;
      *(undefined4 *)(unaff_EBP + -0x6a) = DAT_50435558;
      *(undefined4 *)(unaff_EBP + -0x66) = 0;
      *(undefined4 *)(unaff_EBP + -0x62) = 0;
      *(undefined2 *)(unaff_EBP + -0x5e) = 0;
      *(undefined1 *)(unaff_EBP + -0x5c) = 0;
      *(undefined4 *)(unaff_EBP + -0x5b) = DAT_50435554;
      *(undefined4 *)(unaff_EBP + -0x57) = 0;
      *(undefined4 *)(unaff_EBP + -0x53) = 0;
      *(undefined2 *)(unaff_EBP + -0x4f) = 0;
      *(undefined1 *)(unaff_EBP + -0x4d) = 0;
      *(undefined4 *)(unaff_EBP + -0x4c) = DAT_50435550;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      *(undefined2 *)(unaff_EBP + -0x40) = 0;
      *(undefined1 *)(unaff_EBP + -0x3e) = 0;
      FUN_50408293((char *)(unaff_EBP + -0x85),(uint)(extraout_ECX[0xdc] * 100) >> 7,0xfffffffe,9);
      FUN_50408293((char *)(unaff_EBP + -0x76),(uint)(extraout_ECX[0xdd] * 100) >> 7,0xfffffffe,9);
      FUN_50408293((char *)(unaff_EBP + -0x67),(uint)(extraout_ECX[0xde] * 100) >> 7,0xfffffffe,9);
      iVar7 = 9;
      uVar6 = 0;
      piVar4 = FUN_50408c33(extraout_ECX);
      iVar3 = extraout_ECX[0xdf];
      piVar5 = FUN_50408c5a(extraout_ECX);
      FUN_50408293((char *)(unaff_EBP + -0x58),
                   (uint)(((ulonglong)(uint)(iVar3 * 0x3200) / ZEXT48(piVar4)) / ZEXT48(piVar5)),
                   uVar6,iVar7);
      (**(code **)(*(int *)extraout_ECX[0xe1] + 4))(unaff_EBP + 8);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (piVar4 == (int *)0x0) {
        uVar6 = 0;
      }
      else if (*piVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(*piVar4 + -4) >> 1;
      }
      if (piVar4 == (int *)0x0) {
        _Src = (void *)0x0;
      }
      else {
        _Src = (void *)FUN_50408bc1(piVar4);
      }
      memcpy((void *)(unaff_EBP + -0x49),_Src,uVar6 * 2);
      (**(code **)(*(int *)extraout_ECX[0xe5] + 0x24))
                ((int *)extraout_ECX[0xe5],unaff_EBP + -0x1c,0,0);
      if (*(int *)(extraout_ECX[0xe3] + 0x38) == 0x15) {
        FUN_50408912(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),
                     (char *)(unaff_EBP + -0x88));
      }
      else {
        FUN_5040896f(*(undefined4 **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x1c),
                     (char *)(unaff_EBP + -0x88));
      }
      (**(code **)(*(int *)extraout_ECX[0xe5] + 0x28))((int *)extraout_ECX[0xe5]);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        FUN_50407381(*(int **)(unaff_EBP + 8));
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
    }
    iVar3 = puVar1[10];
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(int *)(unaff_EBP + -0x10) = iVar3 + -0x20;
    iVar3 = *(int *)(unaff_EBP + -0x10);
    iVar2 = puVar1[9];
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(float *)(unaff_EBP + -0x3c) = (float)iVar3;
    *(float *)(unaff_EBP + -0x38) = (float)*(int *)(unaff_EBP + -0x10);
    iVar7 = *(int *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x14) = iVar2 + 0x20;
    *(float *)(unaff_EBP + -0x24) = (float)iVar7;
    *(float *)(unaff_EBP + -0x20) = (float)*(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x20);
    piVar4 = (int *)*puVar1;
    *(float *)(unaff_EBP + -0x34) = (float)iVar7;
    *(float *)(unaff_EBP + -0x30) = (float)*(int *)(unaff_EBP + -0x10);
    *(float *)(unaff_EBP + -0x2c) = (float)iVar3;
    (**(code **)(*piVar4 + 0xfc))(piVar4,0,0x10,1);
    (**(code **)(*(int *)*puVar1 + 0xfc))((int *)*puVar1,0,0x11,1);
    (**(code **)(*(int *)*puVar1 + 200))((int *)*puVar1,0x13,5);
    (**(code **)(*(int *)*puVar1 + 200))((int *)*puVar1,0x14,6);
    FUN_50408723();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


