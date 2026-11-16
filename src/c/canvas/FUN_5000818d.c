/* FUN_5000818d - 0x5000818d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_5000818d(int param_1,ushort *param_2,int param_3,undefined4 param_4,ushort *param_5,int param_6,
            int param_7,ushort *param_8,int param_9,int param_10)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *local_c;
  ushort *local_8;
  
  puVar4 = param_5;
  if (param_3 == -1) {
    if ((param_7 == param_10) && (0 < param_7)) {
      if (0 < (int)param_2) {
        do {
          memcpy(param_5,param_8,param_1 * 2);
          param_5 = (ushort *)((int)param_5 + param_6);
          param_8 = (ushort *)((int)param_8 + param_9);
          param_2 = (ushort *)((int)param_2 + -1);
        } while (param_2 != (ushort *)0x0);
      }
    }
    else if (0 < (int)param_2) {
      param_5 = param_2;
      do {
        if (0 < param_1) {
          param_3 = param_1;
          puVar3 = puVar4;
          param_2 = param_8;
          do {
            uVar1 = *param_2;
            param_2 = param_2 + param_10;
            *puVar3 = uVar1;
            puVar3 = puVar3 + param_7;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        puVar4 = (ushort *)((int)puVar4 + param_6);
        param_8 = (ushort *)((int)param_8 + param_9);
        param_5 = (ushort *)((int)param_5 + -1);
      } while (param_5 != (ushort *)0x0);
    }
  }
  else if (param_3 == 0xff) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      puVar4 = param_8;
      do {
        if (0 < param_1) {
          param_8 = (ushort *)param_1;
          puVar3 = puVar4;
          puVar5 = param_5;
          do {
            uVar1 = *puVar3;
            if ((uVar1 & 0xf000) != 0xf000) {
              if ((uVar1 & 0xf000) == 0) {
                uVar1 = *puVar5;
              }
              else {
                uVar2 = FUN_5000836d((uint)*puVar5,(uint)uVar1,0xff);
                uVar1 = (ushort)uVar2;
              }
            }
            puVar3 = puVar3 + param_10;
            *puVar5 = uVar1;
            puVar5 = puVar5 + param_7;
            param_8 = (ushort *)((int)param_8 + -1);
          } while (param_8 != (ushort *)0x0);
        }
        param_5 = (ushort *)((int)param_5 + param_6);
        puVar4 = (ushort *)((int)puVar4 + param_9);
        local_8 = (ushort *)((int)local_8 + -1);
      } while (local_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == -2) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      puVar4 = param_8;
      do {
        if (0 < param_1) {
          param_8 = (ushort *)param_1;
          puVar3 = param_5;
          param_2 = puVar4;
          do {
            uVar1 = FUN_50008463(*puVar3,*param_2);
            *puVar3 = uVar1;
            puVar3 = puVar3 + param_7;
            param_2 = param_2 + param_10;
            param_8 = (ushort *)((int)param_8 + -1);
          } while (param_8 != (ushort *)0x0);
        }
        param_5 = (ushort *)((int)param_5 + param_6);
        puVar4 = (ushort *)((int)puVar4 + param_9);
        local_8 = (ushort *)((int)local_8 + -1);
      } while (local_8 != (ushort *)0x0);
    }
  }
  else if (0 < (int)param_2) {
    local_c = param_2;
    do {
      if (0 < param_1) {
        param_2 = (ushort *)param_1;
        puVar4 = param_5;
        puVar3 = param_8;
        do {
          uVar2 = FUN_5000836d((uint)*puVar4,(uint)*puVar3,param_3);
          puVar3 = puVar3 + param_10;
          *puVar4 = (ushort)uVar2;
          puVar4 = puVar4 + param_7;
          param_2 = (ushort *)((int)param_2 + -1);
        } while (param_2 != (ushort *)0x0);
      }
      param_5 = (ushort *)((int)param_5 + param_6);
      param_8 = (ushort *)((int)param_8 + param_9);
      local_c = (ushort *)((int)local_c + -1);
    } while (local_c != (ushort *)0x0);
  }
  return;
}


