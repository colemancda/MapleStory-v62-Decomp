/* FUN_00818069 - 0x00818069 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00818069(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x78) != param_2) {
    if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 0x28))(1), iVar1 == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      if (*(int **)(param_1 + 0x80) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x80) + 4))(0);
      }
      if (DAT_009784c0 != 0) {
        FUN_005265cf(1);
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      (**(code **)(**(int **)(param_1 + 0x78) + 0x28))(0);
    }
    *(int **)(param_1 + 0x78) = param_2;
    FUN_00817f6e(-(uint)(param_2 != (int *)0x0) & (uint)(param_2 + 1));
  }
  return;
}


