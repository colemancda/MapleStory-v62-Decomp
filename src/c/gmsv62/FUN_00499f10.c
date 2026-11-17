/* FUN_00499f10 - 0x00499f10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00499f10(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))();
  if (iVar1 != 0) {
    FUN_00818111(-(uint)(param_1 != 0) & param_1 + 4U);
    FUN_00499e9b();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),200,*(undefined4 *)(param_1 + 0x48));
  }
  return;
}


