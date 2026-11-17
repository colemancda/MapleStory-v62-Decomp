/* FUN_0085c756 - 0x0085c756 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085c756(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != 0) && (param_3 != (undefined4 *)0x0)) {
    iVar1 = FUN_0085cc85(param_2);
    if (-1 < iVar1) {
      puVar3 = (undefined4 *)(iVar1 * 0x16 + **(int **)(param_1 + 0x2c74));
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      *(undefined2 *)param_3 = *(undefined2 *)puVar3;
    }
  }
  return;
}


