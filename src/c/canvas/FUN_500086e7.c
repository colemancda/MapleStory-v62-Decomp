/* FUN_500086e7 - 0x500086e7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_500086e7(int param_1,int param_2,uint param_3,undefined4 param_4,ushort *param_5,int param_6,
            int param_7,ushort *param_8,int param_9,int param_10)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int local_c;
  int local_8;
  
  puVar2 = param_8;
  if (param_3 == 0xffffffff) {
    if (0 < param_2) {
      local_8 = param_2;
      do {
        if (0 < param_1) {
          param_3 = param_1;
          puVar2 = param_5;
          puVar5 = param_8;
          do {
            uVar1 = *puVar5;
            puVar5 = puVar5 + param_10;
            *puVar2 = (byte)((byte)(uVar1 >> 7) | (byte)(uVar1 >> 1)) & 0xf | uVar1 >> 4 & 0xff00 |
                      0xf000;
            puVar2 = puVar2 + param_7;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        param_8 = (ushort *)((int)param_8 + param_9);
        param_5 = (ushort *)((int)param_5 + param_6);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else if (param_3 == 0xff) {
    if (0 < param_2) {
      param_8 = (ushort *)param_2;
      do {
        if (0 < param_1) {
          param_3 = param_1;
          puVar5 = param_5;
          puVar6 = puVar2;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + param_10;
            *puVar5 = (byte)((byte)(uVar1 >> 7) | (byte)(uVar1 >> 1)) & 0xf | uVar1 >> 4 & 0xff00 |
                      0xf000;
            puVar5 = puVar5 + param_7;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        param_5 = (ushort *)((int)param_5 + param_6);
        puVar2 = (ushort *)((int)puVar2 + param_9);
        param_8 = (ushort *)((int)param_8 + -1);
      } while (param_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == 0xfffffffe) {
    if (0 < param_2) {
      do {
        puVar2 = param_5;
        iVar4 = param_1;
        if (0 < param_1) {
          do {
            *puVar2 = 0;
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + param_7;
          } while (iVar4 != 0);
        }
        param_5 = (ushort *)((int)param_5 + param_6);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    local_c = param_2;
    do {
      if (0 < param_1) {
        local_8 = param_1;
        puVar2 = param_5;
        puVar5 = param_8;
        do {
          uVar3 = FUN_50008879((uint)*puVar2,(uint)*puVar5,param_3);
          puVar5 = puVar5 + param_10;
          *puVar2 = (ushort)uVar3;
          puVar2 = puVar2 + param_7;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      param_8 = (ushort *)((int)param_8 + param_9);
      param_5 = (ushort *)((int)param_5 + param_6);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


