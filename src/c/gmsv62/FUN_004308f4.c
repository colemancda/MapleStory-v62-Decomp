/* FUN_004308f4 - 0x004308f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004308f4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = 0;
  iVar2 = FUN_004371d2(&stack0x00000004,&local_c);
  if (iVar2 == 0) {
    local_10 = 0;
    local_8 = 1;
    local_c = local_14;
  }
  uVar1 = *(undefined4 *)(local_c + 4);
  if ((local_8 & 1) != 0) {
    FUN_00434d5d();
  }
  return uVar1;
}


