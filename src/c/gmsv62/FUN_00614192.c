/* FUN_00614192 - 0x00614192 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00614192(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0061411c();
  if (iVar1 != 0) {
    uVar2 = FUN_0045f03e(iVar1 + 0x35,*(undefined4 *)(iVar1 + 0x37));
    return uVar2 & 0xff;
  }
  return 0xffffffff;
}


