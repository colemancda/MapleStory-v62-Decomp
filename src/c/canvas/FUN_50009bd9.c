/* FUN_50009bd9 - 0x50009bd9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50009bd9(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_3 == 0) {
    if (0 < param_2) {
      param_3 = param_2;
      do {
        if (0 < param_1) {
          param_2 = param_1;
          puVar3 = param_4;
          do {
            uVar1 = param_6;
            if (((param_6 & 0xff000000) != 0xff000000) &&
               (uVar1 = *puVar3, (param_6 & 0xff000000) != 0)) {
              uVar1 = FUN_500078f7(*puVar3,param_6,0xff);
            }
            *puVar3 = uVar1;
            puVar3 = puVar3 + 1;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        param_4 = (uint *)((int)param_4 + param_5);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (0 < param_2) {
    do {
      iVar2 = param_1;
      puVar3 = param_4;
      if (0 < param_1) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = param_6;
          puVar3 = puVar3 + 1;
        }
      }
      param_4 = (uint *)((int)param_4 + param_5);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


