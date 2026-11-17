/* FUN_004865cc - 0x004865cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_004865cc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
  iVar2 = FUN_0048bb31(uVar1 + 0x11c,*(undefined4 *)(uVar1 + 0x124));
  return iVar2 != 0;
}


