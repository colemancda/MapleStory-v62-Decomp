/* FUN_5000895c - 0x5000895c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_5000895c(int param_1,ushort *param_2,uint *param_3,undefined4 param_4,uint *param_5,int param_6,
            int param_7,ushort *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *local_c;
  ushort *local_8;
  
  puVar4 = param_8;
  if (param_3 == (uint *)0xffffffff) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      do {
        if (0 < param_1) {
          param_8 = (ushort *)param_1;
          param_2 = puVar4;
          param_3 = param_5;
          do {
            uVar1 = FUN_5000741d((uint)*param_2);
            *param_3 = uVar1;
            param_2 = param_2 + param_10;
            param_8 = (ushort *)((int)param_8 + -1);
            param_3 = param_3 + param_7;
          } while (param_8 != (ushort *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        puVar4 = (ushort *)((int)puVar4 + param_9);
        local_8 = (ushort *)((int)local_8 + -1);
      } while (local_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == (uint *)0xff) {
    if (0 < (int)param_2) {
      param_8 = param_2;
      do {
        if (0 < param_1) {
          param_3 = (uint *)param_1;
          puVar2 = param_5;
          param_2 = puVar4;
          do {
            uVar1 = FUN_5000741d((uint)*param_2);
            *puVar2 = uVar1;
            puVar2 = puVar2 + param_7;
            param_2 = param_2 + param_10;
            param_3 = (uint *)((int)param_3 + -1);
          } while (param_3 != (uint *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        puVar4 = (ushort *)((int)puVar4 + param_9);
        param_8 = (ushort *)((int)param_8 + -1);
      } while (param_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == (uint *)0xfffffffe) {
    if (0 < (int)param_2) {
      do {
        puVar2 = param_5;
        iVar3 = param_1;
        if (0 < param_1) {
          do {
            *puVar2 = 0;
            iVar3 = iVar3 + -1;
            puVar2 = puVar2 + param_7;
          } while (iVar3 != 0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        param_2 = (ushort *)((int)param_2 + -1);
      } while (param_2 != (ushort *)0x0);
    }
  }
  else if (0 < (int)param_2) {
    local_c = param_2;
    do {
      if (0 < param_1) {
        param_2 = (ushort *)param_1;
        puVar2 = param_5;
        puVar4 = param_8;
        do {
          uVar1 = FUN_50008abb(*puVar2,(uint)*puVar4,(uint)param_3);
          puVar4 = puVar4 + param_10;
          *puVar2 = uVar1;
          puVar2 = puVar2 + param_7;
          param_2 = (ushort *)((int)param_2 + -1);
        } while (param_2 != (ushort *)0x0);
      }
      param_5 = (uint *)((int)param_5 + param_6);
      param_8 = (ushort *)((int)param_8 + param_9);
      local_c = (ushort *)((int)local_c + -1);
    } while (local_c != (ushort *)0x0);
  }
  return;
}


