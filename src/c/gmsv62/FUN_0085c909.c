/* FUN_0085c909 - 0x0085c909 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0085c909(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < param_2) {
    piVar1 = *(int **)(param_1 + 0x2c74);
    FUN_0085cd50();
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *(int *)(*piVar1 + -4);
    }
    if (param_2 <= iVar2) {
      if (param_3 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x2c74) + 8);
      }
      else {
        if (param_3 != 1) {
          return 0;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x2c74) + 0xc);
      }
      return *(undefined4 *)(iVar2 + param_2 * 4);
    }
  }
  return 0;
}


