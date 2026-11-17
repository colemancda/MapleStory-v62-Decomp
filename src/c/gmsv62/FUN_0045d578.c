/* FUN_0045d578 - 0x0045d578 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0045d578(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar2 = 0;
  if (((iVar1 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + -4) != 0)) {
    piVar3 = (int *)(iVar1 + 4);
    for (; (*(int *)(param_1 + 0x4c) != 0 && (uVar2 < *(uint *)(*(int *)(param_1 + 0x4c) + -4)));
        uVar2 = uVar2 + 1) {
      local_8 = 0;
      piVar4 = piVar3;
      do {
        if (*piVar4 == 0) break;
        if (*piVar4 == param_2) {
          if (param_3 == 0x95) {
            *(undefined4 *)(uVar2 * 0x68 + 0x2c + iVar1) = 2;
            return 1;
          }
          if (param_3 != 0x96) {
            *(undefined4 *)(uVar2 * 0x68 + 0x2c + iVar1) = 0xffffffff;
            return 0;
          }
          *(undefined4 *)(uVar2 * 0x68 + 0x2c + iVar1) = 1;
          return 1;
        }
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 1;
      } while (local_8 < 10);
      piVar3 = piVar3 + 0x1a;
    }
  }
  return 0;
}


