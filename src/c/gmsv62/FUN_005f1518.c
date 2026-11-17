/* FUN_005f1518 - 0x005f1518 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005f1518(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  iVar2 = FUN_004371d2(&param_1,&local_c);
  if ((iVar2 == 0) || (local_c == 0)) {
    local_10 = 0;
    local_8 = 1;
    puVar3 = local_14;
  }
  else {
    puVar3 = (undefined1 *)(local_c + 0xc);
  }
  uVar1 = *(undefined4 *)(puVar3 + 4);
  if ((local_8 & 1) != 0) {
    FUN_005f171e();
  }
  return uVar1;
}


