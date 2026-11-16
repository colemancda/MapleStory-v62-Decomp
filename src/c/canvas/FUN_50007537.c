/* FUN_50007537 - 0x50007537 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50007537(int param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6,
            uint param_7,uint param_8,int param_9,int param_10,int param_11,undefined4 param_12,
            int param_13,int param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;
  
  puVar5 = param_4;
  bVar3 = false;
  if (param_11 != 0) {
    local_8 = param_7 & 0xff;
    local_c = (uint)param_4 & 0xff;
    if (param_4 == (undefined *)0x1) {
      if (param_7 == 1) {
        param_4 = FUN_5000818d;
      }
      else if (param_7 == 2) {
        param_4 = FUN_50007c69;
      }
      else {
        if (param_7 != 0x201) goto LAB_500075f6;
        param_4 = FUN_500086e7;
      }
    }
    else if (param_4 == (undefined *)0x2) {
      if (param_7 == 1) {
        param_4 = FUN_500079ac;
      }
      else if (param_7 == 2) {
        param_4 = FUN_50007705;
      }
      else {
        if (param_7 != 0x201) goto LAB_500075f6;
        param_4 = FUN_5000895c;
      }
    }
    else {
      if (param_4 != (undefined *)0x201) goto LAB_500075f6;
      if (param_7 == 1) {
        param_4 = FUN_5000851c;
      }
      else if (param_7 == 2) {
        param_4 = FUN_50008b7a;
      }
      else {
        if (param_7 != 0x201) goto LAB_500075f6;
        param_4 = FUN_50008480;
      }
    }
    if (param_4 == (undefined *)0x0) {
LAB_500075f6:
      FUN_50007006(local_1c,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_1c,(ThrowInfo *)&DAT_50015eb8);
    }
    bVar1 = false;
    if (param_8 < param_5) {
      if (param_10 == 0) {
        bVar3 = true;
      }
      else {
        bVar1 = true;
      }
    }
    bVar2 = bVar1;
    if (param_13 != 0) {
      bVar2 = !bVar1;
    }
    bVar4 = bVar3;
    if (param_14 != 0) {
      bVar4 = !bVar3;
    }
    if (bVar2) {
      iVar7 = -1;
    }
    else {
      iVar7 = 1;
    }
    iVar8 = param_9;
    if (bVar4) {
      iVar8 = -param_9;
    }
    iVar6 = param_6;
    if (bVar3) {
      iVar6 = -param_6;
    }
    (*(code *)param_4)(param_1,param_2,param_11,param_12,
                       (-(uint)bVar3 & (param_2 + -1) * param_6) +
                       param_5 + (-(uint)bVar1 & param_1 + -1 << ((byte)puVar5 & 0x1f)),iVar6,
                       (-(uint)bVar1 & 0xfffffffe) + 1,
                       (-(uint)bVar4 & (param_2 + -1) * param_9 << (param_3 & 0x1f)) +
                       param_8 + (-(uint)bVar2 & param_1 + -1 << ((char)param_7 + param_3 & 0x1f)),
                       iVar8 << (param_3 & 0x1f),iVar7 << (param_3 & 0x1f));
  }
  return;
}


