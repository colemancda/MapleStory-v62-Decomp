/* FUN_004b8928 - 0x004b8928 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b8928(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00414edd(param_1 + 0xc,0xffffffff);
  FUN_00459cb5();
  FUN_00457cda();
  iVar1 = 3;
  do {
    FUN_00457d37();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


