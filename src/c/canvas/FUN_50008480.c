/* FUN_50008480 - 0x50008480 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50008480(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 *param_5,int param_6,
            int param_7,undefined2 *param_8,int param_9,int param_10)

{
  size_t _Size;
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if ((param_3 != 0) && (param_3 != -2)) {
    if ((param_7 == param_10) && (0 < param_7)) {
      if (0 < param_2) {
        _Size = param_1 * 2;
        param_1 = param_2;
        do {
          memcpy(param_5,param_8,_Size);
          param_5 = (undefined2 *)((int)param_5 + param_6);
          param_8 = (undefined2 *)((int)param_8 + param_9);
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
    }
    else if (0 < param_2) {
      param_3 = param_2;
      do {
        puVar1 = param_5;
        puVar2 = param_8;
        iVar3 = param_1;
        if (0 < param_1) {
          do {
            *puVar1 = *puVar2;
            iVar3 = iVar3 + -1;
            puVar1 = puVar1 + param_7;
            puVar2 = puVar2 + param_10;
          } while (iVar3 != 0);
        }
        param_5 = (undefined2 *)((int)param_5 + param_6);
        param_8 = (undefined2 *)((int)param_8 + param_9);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


