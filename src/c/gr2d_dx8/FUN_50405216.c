/* FUN_50405216 - 0x50405216 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_50405216(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  size_t *psVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *_Format;
  double dVar6;
  undefined8 uVar7;
  char local_104;
  undefined4 local_103;
  
  uVar1 = *param_2;
  if (uVar1 == 8) {
    if (param_1 == param_2) {
      return 0;
    }
    iVar2 = FUN_5040278b((short *)param_1);
    uVar4 = 0;
    if (-1 < iVar2) {
      *param_1 = 8;
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 0) {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      psVar3 = FUN_5040539d(iVar2,uVar4);
      *(size_t **)(param_1 + 4) = psVar3;
      return 0;
    }
    return iVar2;
  }
  if (uVar1 == 0) {
    iVar2 = FUN_5040278b((short *)param_1);
    if (-1 < iVar2) {
      *param_1 = 8;
      psVar3 = FUN_5040539d(0,0);
      *(size_t **)(param_1 + 4) = psVar3;
      return 0;
    }
    return iVar2;
  }
  local_104 = '\0';
  puVar5 = &local_103;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (uVar1 < 0x11) {
    if (uVar1 == 0x10) {
      iVar2 = (int)(char)param_2[4];
    }
    else if (uVar1 == 2) {
      iVar2 = (int)(short)param_2[4];
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 == 4) {
          dVar6 = (double)*(float *)(param_2 + 4);
          _Format = &DAT_50435420;
        }
        else {
          if (uVar1 != 5) {
            return -0x7ffdfffb;
          }
          dVar6 = *(double *)(param_2 + 4);
          _Format = &DAT_50435424;
        }
        sprintf(&local_104,_Format,dVar6);
        goto LAB_50405346;
      }
      iVar2 = *(int *)(param_2 + 4);
    }
    uVar7 = CONCAT44(iVar2,&DAT_5043541c);
  }
  else {
    if (uVar1 == 0x11) {
      uVar4 = (uint)(byte)param_2[4];
    }
    else if (uVar1 == 0x12) {
      uVar4 = (uint)param_2[4];
    }
    else {
      if (uVar1 != 0x13) {
        return -0x7ffdfffb;
      }
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar7 = CONCAT44(uVar4,&DAT_50435418);
  }
  (*DAT_50438c14)(&local_104,uVar7);
LAB_50405346:
  iVar2 = FUN_5040278b((short *)param_1);
  if (-1 < iVar2) {
    *param_1 = 8;
    uVar4 = (*DAT_50438bd0)(0,0,&local_104,0xffffffff,0,0);
    psVar3 = FUN_5040539d(0,(uVar4 & 0x7fffffff) - 1);
    (*DAT_50438bd0)(0,0,&local_104,0xffffffff,psVar3,0x3fffffff);
    *(size_t **)(param_1 + 4) = psVar3;
    return 0;
  }
  return iVar2;
}


