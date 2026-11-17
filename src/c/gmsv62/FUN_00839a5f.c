/* FUN_00839a5f - 0x00839a5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_00839a5f(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_00455c59(local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  uVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
  return uVar1;
}


