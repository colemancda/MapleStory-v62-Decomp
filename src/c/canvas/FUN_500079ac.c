/* FUN_500079ac - 0x500079ac in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_500079ac(int param_1,ushort *param_2,uint *param_3,undefined4 param_4,uint *param_5,int param_6,
            int param_7,ushort *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  int local_c;
  ushort *local_8;
  
  if (param_3 == (uint *)0xffffffff) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      puVar5 = param_8;
      do {
        if (0 < param_1) {
          param_8 = (ushort *)param_1;
          param_2 = puVar5;
          param_3 = param_5;
          do {
            uVar1 = FUN_500073e6((uint)*param_2);
            *param_3 = uVar1;
            param_2 = param_2 + param_10;
            param_8 = (ushort *)((int)param_8 + -1);
            param_3 = param_3 + param_7;
          } while (param_8 != (ushort *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        puVar5 = (ushort *)((int)puVar5 + param_9);
        local_8 = (ushort *)((int)local_8 + -1);
      } while (local_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == (uint *)0xff) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      do {
        if (0 < param_1) {
          param_3 = (uint *)param_1;
          puVar5 = param_8;
          puVar4 = param_5;
          do {
            uVar1 = (uint)*puVar5;
            if ((uVar1 & 0xf000) == 0xf000) {
              uVar1 = FUN_500073e6(uVar1);
            }
            else if ((*puVar5 & 0xf000) == 0) {
              uVar1 = *puVar4;
            }
            else {
              uVar1 = FUN_50007b8d(*puVar4,uVar1,0xff);
            }
            puVar5 = puVar5 + param_10;
            *puVar4 = uVar1;
            puVar4 = puVar4 + param_7;
            param_3 = (uint *)((int)param_3 + -1);
          } while (param_3 != (uint *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        param_8 = (ushort *)((int)param_8 + param_9);
        local_8 = (ushort *)((int)local_8 + -1);
      } while (local_8 != (ushort *)0x0);
    }
  }
  else if (param_3 == (uint *)0xfffffffe) {
    if (0 < (int)param_2) {
      param_3 = (uint *)param_2;
      do {
        if (0 < param_1) {
          param_2 = (ushort *)param_1;
          puVar4 = param_5;
          puVar5 = param_8;
          do {
            uVar1 = *puVar4;
            uVar2 = (*puVar5 & 0xfffff000) << 4 | *puVar5 & 0xf000;
            uVar3 = uVar1 + uVar2 * -0x1000;
            puVar5 = puVar5 + param_10;
            *puVar4 = -(uint)(uVar2 * 0x1000 < uVar1) & ((uVar3 ^ uVar1) & 0xffffff ^ uVar3);
            puVar4 = puVar4 + param_7;
            param_2 = (ushort *)((int)param_2 + -1);
          } while (param_2 != (ushort *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        param_8 = (ushort *)((int)param_8 + param_9);
        param_3 = (uint *)((int)param_3 + -1);
      } while (param_3 != (uint *)0x0);
    }
  }
  else if (0 < (int)param_2) {
    local_8 = param_2;
    do {
      if (0 < param_1) {
        local_c = param_1;
        puVar4 = param_5;
        param_2 = param_8;
        do {
          uVar1 = FUN_50007b8d(*puVar4,(uint)*param_2,(int)param_3);
          *puVar4 = uVar1;
          puVar4 = puVar4 + param_7;
          param_2 = param_2 + param_10;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      param_5 = (uint *)((int)param_5 + param_6);
      param_8 = (ushort *)((int)param_8 + param_9);
      local_8 = (ushort *)((int)local_8 + -1);
    } while (local_8 != (ushort *)0x0);
  }
  return;
}


