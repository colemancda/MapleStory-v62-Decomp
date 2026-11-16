/* FUN_50009d1e - 0x50009d1e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50009d1e(uint param_1,int param_2,int param_3,undefined4 *param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar4 = param_6 >> 8;
  uVar5 = uVar4 & 0xf800 | param_6 >> 5 & 0x7e0 | param_6 >> 3 & 0x1f;
  uVar3 = (undefined2)uVar5;
  if (param_3 == 0) {
    if (0 < param_2) {
      param_6 = param_2;
      puVar2 = param_4;
      do {
        if (0 < (int)param_1) {
          param_4 = (undefined4 *)param_1;
          puVar6 = puVar2;
          do {
            uVar3 = *(undefined2 *)puVar6;
            if (0x7fff < (uVar4 & 0xf000)) {
              uVar1 = FUN_50008666(uVar5);
              uVar3 = (undefined2)uVar1;
            }
            *(undefined2 *)puVar6 = uVar3;
            puVar6 = (undefined4 *)((int)puVar6 + 2);
            param_4 = (undefined4 *)((int)param_4 + -1);
          } while (param_4 != (undefined4 *)0x0);
        }
        puVar2 = (undefined4 *)((int)puVar2 + param_5);
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
  }
  else if (0 < param_2) {
    do {
      if (0 < (int)param_1) {
        puVar2 = param_4;
        for (uVar4 = param_1 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar2 = CONCAT22(uVar3,uVar3);
          puVar2 = puVar2 + 1;
        }
        for (uVar4 = (uint)((param_1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined2 *)puVar2 = uVar3;
          puVar2 = (undefined4 *)((int)puVar2 + 2);
        }
      }
      param_4 = (undefined4 *)((int)param_4 + param_5);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


