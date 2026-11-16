/* FUN_5000e2bf - 0x5000e2bf in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_5000e2bf(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      bVar2 = false;
      bVar1 = param_2 == 0;
    }
    else {
      if (param_1 != 2) {
        if (param_1 != 3) {
          if (param_1 == 0x11) {
            bVar2 = false;
            bVar1 = param_2 == 0;
          }
          else {
            if (param_1 != 0x12) {
              if (param_1 != 0x13) {
                return 0;
              }
              goto LAB_5000e2ec;
            }
            bVar2 = SBORROW4(param_2,1);
            bVar1 = param_2 == 1;
            param_2 = param_2 + -1;
          }
          if (!bVar1 && bVar2 == param_2 < 0) {
            return 0;
          }
LAB_5000e2ec:
          return (-(uint)(param_3 != 1) & 0x200) + 0x1001;
        }
        goto LAB_5000e30b;
      }
      bVar2 = SBORROW4(param_2,1);
      bVar1 = param_2 == 1;
      param_2 = param_2 + -1;
    }
    if (bVar1 || bVar2 != param_2 < 0) {
LAB_5000e30b:
      return (-(uint)(param_3 != 1) & 0x200) + 1;
    }
  }
  return 0;
}


