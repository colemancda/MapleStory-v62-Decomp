/* FUN_5000851c - 0x5000851c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_5000851c(int param_1,int param_2,ushort *param_3,undefined4 param_4,ushort *param_5,int param_6,
            int param_7,ushort *param_8,int param_9,int param_10)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  int local_c;
  int local_8;
  
  puVar4 = param_8;
  if (param_3 == (ushort *)0xffffffff) {
    if (0 < param_2) {
      local_8 = param_2;
      puVar4 = param_5;
      puVar6 = param_8;
      do {
        if (0 < param_1) {
          param_8 = (ushort *)param_1;
          param_3 = puVar6;
          param_5 = puVar4;
          do {
            uVar2 = FUN_50008666((uint)*param_3);
            *param_5 = (ushort)uVar2;
            param_3 = param_3 + param_10;
            param_8 = (ushort *)((int)param_8 + -1);
            param_5 = param_5 + param_7;
          } while (param_8 != (ushort *)0x0);
        }
        puVar4 = (ushort *)((int)puVar4 + param_6);
        puVar6 = (ushort *)((int)puVar6 + param_9);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else if (param_3 == (ushort *)0xff) {
    if (0 < param_2) {
      param_8 = (ushort *)param_2;
      puVar6 = param_5;
      do {
        if (0 < param_1) {
          param_5 = (ushort *)param_1;
          puVar3 = puVar4;
          puVar5 = puVar6;
          do {
            uVar1 = *puVar5;
            if (0x7fff < (*puVar3 & 0xf000)) {
              uVar2 = FUN_50008666((uint)*puVar3);
              uVar1 = (ushort)uVar2;
            }
            puVar3 = puVar3 + param_10;
            *puVar5 = uVar1;
            puVar5 = puVar5 + param_7;
            param_5 = (ushort *)((int)param_5 + -1);
          } while (param_5 != (ushort *)0x0);
        }
        puVar6 = (ushort *)((int)puVar6 + param_6);
        puVar4 = (ushort *)((int)puVar4 + param_9);
        param_8 = (ushort *)((int)param_8 + -1);
      } while (param_8 != (ushort *)0x0);
    }
  }
  else if ((param_3 != (ushort *)0xfffffffe) && (0 < param_2)) {
    local_c = param_2;
    puVar4 = param_5;
    do {
      if (0 < param_1) {
        param_5 = (ushort *)param_1;
        puVar6 = puVar4;
        puVar3 = param_8;
        do {
          uVar2 = FUN_500086a6((uint)*puVar6,(uint)*puVar3,(int)param_3);
          puVar3 = puVar3 + param_10;
          *puVar6 = (ushort)uVar2;
          puVar6 = puVar6 + param_7;
          param_5 = (ushort *)((int)param_5 + -1);
        } while (param_5 != (ushort *)0x0);
      }
      puVar4 = (ushort *)((int)puVar4 + param_6);
      param_8 = (ushort *)((int)param_8 + param_9);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


