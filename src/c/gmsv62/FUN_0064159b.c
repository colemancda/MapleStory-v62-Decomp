/* FUN_0064159b - 0x0064159b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0064159b(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(3);
    FUN_004c26e1();
  }
  return;
}


