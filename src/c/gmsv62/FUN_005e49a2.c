/* FUN_005e49a2 - 0x005e49a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005e49a2(int param_1,double *param_2,double *param_3,double *param_4,double *param_5,
            undefined2 *param_6,uint *param_7,uint *param_8)

{
  byte *pbVar1;
  char *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  int local_8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  FUN_00413367(param_1 + 0x80,*(undefined4 *)(param_1 + 0x88));
  FUN_00413367(param_1 + 0x74,*(undefined4 *)(param_1 + 0x7c));
  uVar7 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  iVar8 = *(int *)(param_1 + 0x18);
  while (iVar8 != 0) {
    pbVar1 = *(byte **)(param_1 + 0x1c);
    if (*pbVar1 != 10) {
      *param_8 = *param_8 | 1 << (*pbVar1 & 0x1f);
      iVar8 = FUN_00413367(param_1 + 0x80,*(undefined4 *)(param_1 + 0x88));
      if (iVar8 < *(short *)(pbVar1 + 0x10)) break;
      FUN_00413367(param_1 + 0x80,*(undefined4 *)(param_1 + 0x88));
      uVar7 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x88) = uVar7;
      sVar6 = *(short *)(pbVar1 + 2);
      uVar7 = FUN_004b8c34();
      *(undefined4 *)(param_1 + 4) = uVar7;
      *param_2 = (double)(int)sVar6;
      sVar6 = *(short *)(pbVar1 + 4);
      uVar7 = FUN_004b8c34();
      *(undefined4 *)(param_1 + 0xc) = uVar7;
      *param_3 = (double)(int)sVar6;
      sVar6 = *(short *)(pbVar1 + 6);
      uVar7 = FUN_004133b5();
      *(undefined4 *)(param_1 + 100) = uVar7;
      *param_4 = (double)(int)sVar6;
      sVar6 = *(short *)(pbVar1 + 8);
      uVar7 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x70) = uVar7;
      *param_5 = (double)(int)sVar6;
      *param_6 = *(undefined2 *)(pbVar1 + 0xc);
      *param_7 = (uint)pbVar1[10];
    }
    FUN_005e521b(*(undefined4 *)(param_1 + 0x1c));
    iVar8 = *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar8 = FUN_00413367(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x94));
    iVar9 = FUN_00413367(param_1 + 0x74,*(undefined4 *)(param_1 + 0x7c));
    uVar7 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    if (iVar8 != iVar9 && -1 < iVar8 - iVar9) {
      pcVar2 = *(char **)(param_1 + 0x1c);
      if (*pcVar2 == '\x03') {
        *param_2 = (double)(int)*(short *)(pcVar2 + 2);
        *param_3 = (double)(int)*(short *)(pcVar2 + 4);
        *param_4 = (double)(int)*(short *)(pcVar2 + 6);
        *param_5 = (double)(int)*(short *)(pcVar2 + 8);
      }
      else {
        uVar7 = FUN_00413367(param_1 + 0x80,*(undefined4 *)(param_1 + 0x88));
        FUN_005e4cd8(uVar7,(int)*(short *)(pcVar2 + 0x10),&local_20,&local_10,&local_28,&local_18);
        sVar6 = FUN_0045f084(param_1,*(undefined4 *)(param_1 + 4));
        local_8 = FUN_00413367(param_1 + 0x5c,*(undefined4 *)(param_1 + 100));
        dVar3 = (double)local_8 * local_28 +
                (double)(int)sVar6 * local_20 +
                (double)(int)*(short *)(pcVar2 + 6) * local_18 +
                (double)(int)*(short *)(pcVar2 + 2) * local_10;
        sVar6 = FUN_0045f084(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
        iVar8 = FUN_00413367(param_1 + 0x68,*(undefined4 *)(param_1 + 0x70));
        dVar5 = _DAT_008ecc58;
        dVar4 = (double)iVar8 * local_28 +
                (double)(int)sVar6 * local_20 +
                (double)(int)*(short *)(pcVar2 + 8) * local_18 +
                (double)(int)*(short *)(pcVar2 + 4) * local_10;
        *param_5 = _DAT_008ecc58;
        *param_4 = dVar5;
        *param_4 = (dVar3 - *param_2) * dVar5;
        *param_5 = (dVar4 - *param_3) * *param_5;
        *param_2 = dVar3;
        *param_3 = dVar4;
      }
      *param_6 = *(undefined2 *)(pcVar2 + 0xc);
      *param_7 = (uint)(byte)pcVar2[10];
      return 1;
    }
  }
  FUN_005e532d();
  uVar7 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  uVar7 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  return 1;
}


