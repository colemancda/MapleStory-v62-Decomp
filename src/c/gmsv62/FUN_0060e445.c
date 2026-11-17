/* FUN_0060e445 - 0x0060e445 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060e445(void)

{
  int iVar1;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = FUN_00455c59(local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  FUN_00413367(iVar1 + 0xa5,*(undefined4 *)(iVar1 + 0xad));
  return;
}


