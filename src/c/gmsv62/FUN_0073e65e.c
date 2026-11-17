/* FUN_0073e65e - 0x0073e65e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0073e65e(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc68) != 1) {
    if (*(int *)(param_1 + 0xaa8) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xc68) != 1) goto LAB_0073e683;
  }
  FUN_0073da1a(2);
LAB_0073e683:
  FUN_008164fd(*(undefined4 *)(param_1 + 0xaa8));
  FUN_00817f6e(-(uint)(*(int *)(param_1 + 0xaa8) != 0) & *(int *)(param_1 + 0xaa8) + 4U);
  FUN_004a2fef(param_2);
  return;
}


