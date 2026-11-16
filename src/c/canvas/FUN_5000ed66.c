/* FUN_5000ed66 - 0x5000ed66 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_5000ed66(void *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  if (2 < param_3) {
    if (0 < param_3) {
      local_8 = param_3;
      puVar2 = param_2 + 2;
      puVar3 = param_2;
      puVar5 = param_2 + param_3 * 2 + -2;
      do {
        puVar4 = puVar3;
        puVar3 = puVar2;
        piVar1 = FUN_5000ee07(param_1,puVar4[1],1);
        if (((int)puVar5[1] < (int)puVar4[1]) || ((int)puVar3[1] < (int)puVar4[1])) {
          puVar2 = (undefined4 *)FUN_5000f45d(piVar1 + 6);
          *puVar2 = puVar4;
        }
        if ((int)puVar4[1] < (int)puVar5[1]) {
          puVar2 = (undefined4 *)FUN_5000f41f(piVar1 + 1);
          *puVar2 = *puVar4;
          puVar2[1] = puVar5;
        }
        if ((int)puVar4[1] < (int)puVar3[1]) {
          puVar2 = (undefined4 *)FUN_5000f41f(piVar1 + 1);
          *puVar2 = *puVar4;
          puVar2[1] = puVar3;
        }
        puVar2 = puVar3 + 2;
        if (puVar3 + 2 == param_2 + param_3 * 2) {
          puVar2 = param_2;
        }
        local_8 = local_8 + -1;
        puVar5 = puVar4;
      } while (local_8 != 0);
    }
  }
  return;
}


