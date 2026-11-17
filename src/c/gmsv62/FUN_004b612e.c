/* FUN_004b612e - 0x004b612e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b612e(int param_1)

{
  int iVar1;
  
  FUN_004b5a10();
  FUN_004b8d24(param_1 + 0x28);
  FUN_0045d247();
  FUN_00414edd(param_1 + 0x40,0xffffffff);
  FUN_00459cb5();
  FUN_0045f084(param_1 + 0x30);
  FUN_0045d247();
  iVar1 = FUN_0045e2eb();
  if ((iVar1 / 10000 == 0xcf) || (iVar1 / 10000 == 0xe9)) {
    FUN_00457fa0(param_1 + 0x38);
  }
  return;
}


