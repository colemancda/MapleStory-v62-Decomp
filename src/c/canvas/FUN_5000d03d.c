/* FUN_5000d03d - 0x5000d03d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_5000d03d(ushort *param_1,ushort *param_2)

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
    iVar2 = FUN_5000630c((short *)param_1);
    uVar4 = 0;
    if (-1 < iVar2) {
      *param_1 = 8;
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 0) {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      psVar3 = FUN_50002850(iVar2,uVar4);
      *(size_t **)(param_1 + 4) = psVar3;
      return 0;
    }
    return iVar2;
  }
  if (uVar1 == 0) {
    iVar2 = FUN_5000630c((short *)param_1);
    if (-1 < iVar2) {
      *param_1 = 8;
      psVar3 = FUN_50002850(0,0);
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
          _Format = &DAT_50019530;
        }
        else {
          if (uVar1 != 5) {
            return -0x7ffdfffb;
          }
          dVar6 = *(double *)(param_2 + 4);
          _Format = &DAT_50019534;
        }
        sprintf(&local_104,_Format,dVar6);
        goto LAB_5000d16d;
      }
      iVar2 = *(int *)(param_2 + 4);
    }
    uVar7 = CONCAT44(iVar2,&DAT_5001952c);
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
    uVar7 = CONCAT44(uVar4,&DAT_50019528);
  }
  (*DAT_50081c64)(&local_104,uVar7);
LAB_5000d16d:
  iVar2 = FUN_5000630c((short *)param_1);
  if (-1 < iVar2) {
    *param_1 = 8;
    uVar4 = (*DAT_50081c20)(0,0,&local_104,0xffffffff,0,0);
    psVar3 = FUN_50002850(0,(uVar4 & 0x7fffffff) - 1);
    (*DAT_50081c20)(0,0,&local_104,0xffffffff,psVar3,0x3fffffff);
    *(size_t **)(param_1 + 4) = psVar3;
    return 0;
  }
  return iVar2;
}


