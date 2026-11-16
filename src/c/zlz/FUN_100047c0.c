/* FUN_100047c0 - 0x100047c0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


uint __cdecl FUN_100047c0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
      || (4 < param_2)) || (param_2 < 0)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)PTR_s_stream_error_10012634;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)PTR_s_buffer_error_10012640;
    return 0xfffffffb;
  }
  iVar3 = puVar1[8];
  *puVar1 = param_1;
  puVar1[8] = param_2;
  if (puVar1[1] == 0x2a) {
    uVar2 = puVar1[0x1f] + -1 >> 1;
    if (3 < uVar2) {
      uVar2 = 3;
    }
    uVar2 = puVar1[10] * 0x1000 - 0x7800U | uVar2 << 6;
    if (puVar1[0x19] != 0) {
      uVar2 = uVar2 | 0x20;
    }
    puVar1[1] = 0x71;
    FUN_10004a70((int)puVar1,(uVar2 - uVar2 % 0x1f) + 0x1f);
    if (puVar1[0x19] != 0) {
      FUN_10004a70((int)puVar1,(uint)param_1[0xc] >> 0x10);
      FUN_10004a70((int)puVar1,param_1[0xc] & 0xffff);
    }
    param_1[0xc] = 1;
  }
  if (puVar1[5] == 0) {
    if (((param_1[1] == 0) && (param_2 <= iVar3)) && (param_2 != 4)) {
      param_1[6] = (int)PTR_s_buffer_error_10012640;
      return 0xfffffffb;
    }
  }
  else {
    FUN_10004aa0((int)param_1);
    if (param_1[4] == 0) {
      puVar1[8] = 0xffffffff;
      return 0;
    }
  }
  if (puVar1[1] == 0x29a) {
    if (param_1[1] != 0) {
      param_1[6] = (int)PTR_s_buffer_error_10012640;
      return 0xfffffffb;
    }
LAB_10004932:
    if ((puVar1[0x1b] == 0) && ((param_2 == 0 || (puVar1[1] == 0x29a)))) goto LAB_100049ec;
  }
  else if (param_1[1] == 0) goto LAB_10004932;
  iVar3 = (**(code **)(&DAT_1000d0c8 + puVar1[0x1f] * 0xc))(puVar1,param_2);
  if ((iVar3 == 2) || (iVar3 == 3)) {
    puVar1[1] = 0x29a;
  }
  if ((iVar3 == 0) || (iVar3 == 2)) {
    if (param_1[4] == 0) {
      puVar1[8] = 0xffffffff;
    }
    return 0;
  }
  if (iVar3 == 1) {
    if (param_2 == 1) {
      FUN_10009120((int)puVar1);
    }
    else {
      FUN_10009080((int)puVar1,(undefined1 *)0x0,0,0);
      if (param_2 == 3) {
        *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
        uVar2 = puVar1[0x11] * 2 - 2;
        puVar5 = (undefined4 *)puVar1[0xf];
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
    }
    FUN_10004aa0((int)param_1);
    if (param_1[4] == 0) {
      puVar1[8] = 0xffffffff;
      return 0;
    }
  }
LAB_100049ec:
  if (param_2 != 4) {
    return 0;
  }
  if (puVar1[6] == 0) {
    FUN_10004a70((int)puVar1,(uint)param_1[0xc] >> 0x10);
    FUN_10004a70((int)puVar1,param_1[0xc] & 0xffff);
    FUN_10004aa0((int)param_1);
    puVar1[6] = 0xffffffff;
    return (uint)(puVar1[5] == 0);
  }
  return 1;
}


