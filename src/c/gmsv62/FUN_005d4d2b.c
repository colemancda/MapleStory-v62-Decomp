/* FUN_005d4d2b - 0x005d4d2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005d4d2b(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_004030b1();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


